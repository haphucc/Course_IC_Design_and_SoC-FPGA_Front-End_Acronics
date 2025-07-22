module exponent_multiplier_axi4_lite_slave (
    // Global Signals
    input  wire        S_AXI_ACLK,
    input  wire        S_AXI_ARESETN,
    
    // Read Address    
    input  wire [31:0] S_AXI_ARADDR,
    input  wire        S_AXI_ARVALID,
    output reg         S_AXI_ARREADY,
    // Read Data
    input  wire        S_AXI_RREADY,
    output reg [31:0]  S_AXI_RDATA,
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
	parameter ADDR_A      = 32'h74400000;  // Ghi A
    parameter ADDR_B      = 32'h74400004;  // Ghi B
    parameter ADDR_SELECT = 32'h74400008;  // Ghi select (0: multiplier, 1: exponent)
    parameter ADDR_START  = 32'h7440000C;  // Ghi start
    parameter ADDR_P      = 32'h74400010;  // Đọc P
    parameter ADDR_DONE   = 32'h74400014;  // Đọc done

    // Internal registers
    reg [3:0] reg_A;
    reg [3:0] reg_B;
    reg reg_start;
    reg reg_load;
	reg reg_select;
    reg [31:0] captured_awaddr;
    reg [31:0] captured_araddr;
    
    // Exponent_Multiplier module signals
    wire o_done;
    wire [29:0] o_P;
    
    // AXI4-Lite response signals
    assign S_AXI_BRESP = 2'b00;  // OKAY
    assign S_AXI_RRESP = 2'b00;  // OKAY
    
    // Instantiate exponent module
    exponent_multiplier exp_inst (
        .i_clk(S_AXI_ACLK),
        .i_rst_n(S_AXI_ARESETN),
        .i_load(reg_load),
        .i_start(reg_start),
		.i_select(reg_select),
        .i_A(reg_A),
        .i_B(reg_B),
        .o_done(o_done),
        .o_P(o_P)
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
                    ADDR_P: begin
                        S_AXI_RDATA <= {2'b0, o_P};  // Extend to 32-bit
                    end
                    ADDR_DONE: begin
                        S_AXI_RDATA <= {31'b0, o_done};  // Extend to 32-bit
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
            reg_A         <= 0;
            reg_B         <= 0;
            reg_start     <= 0;
            reg_load      <= 0;
			reg_select    <= 0;
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
                        reg_A <= S_AXI_WDATA[3:0];
                    end
                    ADDR_B: begin
                        reg_B <= S_AXI_WDATA[3:0];
                    end
					
					ADDR_SELECT: begin
                        reg_select <= S_AXI_WDATA[0];
                    end
					
                    ADDR_START: begin
                        if (S_AXI_WDATA[0] == 1'b1) begin
                            reg_load <= 1;  // Trigger load first
                        end
                    end
                endcase
                S_AXI_BVALID <= 1;
            end
            
            // Clear load signal after one clock cycle
            if (reg_load) begin
                reg_load <= 0;
                reg_start <= 1;  // Then trigger start
            end
            
            // Clear start signal after one clock cycle
            if (reg_start) begin
                reg_start <= 0;
            end
            
            // Clear write response when master is ready
            if (S_AXI_BVALID && S_AXI_BREADY) begin
                S_AXI_BVALID <= 0;
            end
        end
    end

endmodule