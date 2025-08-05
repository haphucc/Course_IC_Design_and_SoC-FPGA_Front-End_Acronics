module ptb2_axi4_lite_slave (
    // Global Signals
    input  wire        S_AXI_ACLK,
    input  wire        S_AXI_ARESETN,
    
    // Read Address    
    input  wire [31:0] S_AXI_ARADDR,
    input  wire        S_AXI_ARVALID,
    output reg         S_AXI_ARREADY,
    // Read Data
    input  wire        S_AXI_RREADY,
    output reg signed [31:0]  S_AXI_RDATA,
    output reg         S_AXI_RVALID,
    output wire [1:0]  S_AXI_RRESP,    
        
    // Write Address 
    input  wire [31:0] S_AXI_AWADDR,
    input  wire        S_AXI_AWVALID,
    output reg         S_AXI_AWREADY,
    // Write Data
    input  wire [31:0] S_AXI_WDATA,
    input  wire [3:0]  S_AXI_WSTRB,
    input  wire        S_AXI_WVALID,
    output reg         S_AXI_WREADY,    
    // Write Response
    input  wire        S_AXI_BREADY,
    output reg         S_AXI_BVALID,
    output wire [1:0]  S_AXI_BRESP
);

    // Address Parameters
    parameter ADDR_A      = 32'h7c800000;  
    parameter ADDR_B      = 32'h7c800004;  
    parameter ADDR_C	  = 32'h7c800008;
	parameter ADDR_READ_EN	  = 32'h7c80000C;
    parameter ADDR_RESULT = 32'h7c800010;
	parameter ADDR_DATA_OUT	  = 32'h7c800014;

    // Internal registers
    reg signed [4:0] reg_data_in;
    reg reg_write_en;
    reg reg_read_en;
    reg [31:0] captured_awaddr;
    reg [31:0] captured_araddr;
    
    // Exponent module signals
    wire [1:0] quad_result;
    wire signed [3:0] quad_data_out;
    
    // AXI4-Lite response signals
    assign S_AXI_BRESP = 2'b00;  // OKAY
    assign S_AXI_RRESP = 2'b00;  // OKAY
    
    // Instantiate exponent module
    quadratic_sequence quad_inst (
        .i_clk(S_AXI_ACLK),
        .i_rst_n(S_AXI_ARESETN),
        .i_write_en(reg_write_en),
        .i_read_en(reg_read_en),
        .i_data(reg_data_in),
        .o_result(quad_result),
        .o_data(quad_data_out)
    );
    
    /********************************** READ **********************************/
    always @(posedge S_AXI_ACLK) begin
        if (!S_AXI_ARESETN) begin
            S_AXI_ARREADY <= 0;
            S_AXI_RVALID  <= 0;
            S_AXI_RDATA   <= 0;
            captured_araddr <= 0;
        end else begin
            // Address handshake
            if (!S_AXI_ARREADY && S_AXI_ARVALID) begin
                S_AXI_ARREADY <= 1;
                captured_araddr <= S_AXI_ARADDR;
            end else begin
                S_AXI_ARREADY <= 0;
            end
            
            // Data response
            if (S_AXI_ARVALID && S_AXI_ARREADY) begin
                S_AXI_RVALID <= 1;
                case (captured_araddr)
                    ADDR_RESULT: begin
                        S_AXI_RDATA <= {30'b0, quad_result};  // Extend to 32-bit
                    end
                    ADDR_DATA_OUT: begin
						
                        S_AXI_RDATA <= {28'b0, quad_data_out};  // Extend to 32-bit
                    end
                    default: begin
                        S_AXI_RDATA <= 32'h0;
                    end
                endcase
            end
            
            // Clear read valid when master is ready
            if (S_AXI_RVALID && S_AXI_RREADY) begin
                S_AXI_RVALID <= 0;
            end
        end
    end
    
    /********************************** WRITE *********************************/
    always @(posedge S_AXI_ACLK) begin
        if (!S_AXI_ARESETN) begin
            S_AXI_AWREADY <= 0;
            S_AXI_WREADY  <= 0;
            S_AXI_BVALID  <= 0;
            reg_data_in   <= 0;
            reg_write_en     <= 0;
            reg_read_en      <= 0;
            captured_awaddr <= 0;
        end else begin
            // Address handshake
            if (!S_AXI_AWREADY && S_AXI_AWVALID) begin
                S_AXI_AWREADY <= 1;
                captured_awaddr <= S_AXI_AWADDR;
            end else begin
                S_AXI_AWREADY <= 0;
            end
            
            // Data handshake
            if (!S_AXI_WREADY && S_AXI_WVALID) begin
                S_AXI_WREADY <= 1;
            end else begin
                S_AXI_WREADY <= 0;
            end
            
            // Write data when both address and data are valid
            if (S_AXI_AWVALID && S_AXI_WVALID && S_AXI_AWREADY && S_AXI_WREADY) begin
                case (captured_awaddr)
                    ADDR_A: begin
                        reg_data_in <= S_AXI_WDATA[4:0];
						reg_write_en <= 1;
                    end
                    ADDR_B: begin
                        reg_data_in <= S_AXI_WDATA[4:0];
						reg_write_en <= 1;
                    end
					ADDR_C: begin
                        reg_data_in <= S_AXI_WDATA[4:0];
						reg_write_en <= 1;						
                    end
					
					ADDR_READ_EN: begin
                        if (S_AXI_WDATA[0] == 1'b1) begin                            
							reg_read_en <= 1;
                        end
                    end
					
                endcase
                S_AXI_BVALID <= 1;
            end
            
            // Clear load signal after one clock cycle
            if (reg_write_en) begin
                reg_write_en <= 0;
            end
            
            // Clear start signal after one clock cycle
            if (reg_read_en) begin
                reg_read_en <= 0;
            end
            
            // Clear write response when master is ready
            if (S_AXI_BVALID && S_AXI_BREADY) begin
                S_AXI_BVALID <= 0;
            end
        end
    end

endmodule