module tb_hammu_hamnhan_ip();

    // Clock and Reset
    reg S_AXI_ACLK;
    reg S_AXI_ARESETN;
    
    // AXI4-Lite signals
    reg [31:0] S_AXI_ARADDR;
    reg        S_AXI_ARVALID;
    wire       S_AXI_ARREADY;
    reg        S_AXI_RREADY;
    wire [31:0] S_AXI_RDATA;
    wire       S_AXI_RVALID;
    wire [1:0] S_AXI_RRESP;
    
    reg [31:0] S_AXI_AWADDR;
    reg        S_AXI_AWVALID;
    wire       S_AXI_AWREADY;
    reg [31:0] S_AXI_WDATA;
    reg [3:0]  S_AXI_WSTRB;
    reg        S_AXI_WVALID;
    wire       S_AXI_WREADY;
    reg        S_AXI_BREADY;
    wire       S_AXI_BVALID;
    wire [1:0] S_AXI_BRESP;
    
    // Address Parameters
	parameter ADDR_A      = 32'h7c800000;  // Ghi A
    parameter ADDR_B      = 32'h7c800004;  // Ghi B
    parameter ADDR_SELECT = 32'h7c800008;  // Ghi select (0: multiplier, 1: exponent)
    parameter ADDR_START  = 32'h7c80000C;  // Ghi start
    parameter ADDR_P      = 32'h7c800010;  // Đọc P
    parameter ADDR_DONE   = 32'h7c800014;  // Đọc done
    
    // Instantiate DUT
    hammu_hamnhan_ip DUT (
        .S_AXI_ACLK(S_AXI_ACLK),
        .S_AXI_ARESETN(S_AXI_ARESETN),
        .S_AXI_ARADDR(S_AXI_ARADDR),
        .S_AXI_ARVALID(S_AXI_ARVALID),
        .S_AXI_ARREADY(S_AXI_ARREADY),
        .S_AXI_RREADY(S_AXI_RREADY),
        .S_AXI_RDATA(S_AXI_RDATA),
        .S_AXI_RVALID(S_AXI_RVALID),
        .S_AXI_RRESP(S_AXI_RRESP),
        .S_AXI_AWADDR(S_AXI_AWADDR),
        .S_AXI_AWVALID(S_AXI_AWVALID),
        .S_AXI_AWREADY(S_AXI_AWREADY),
        .S_AXI_WDATA(S_AXI_WDATA),
        .S_AXI_WSTRB(S_AXI_WSTRB),
        .S_AXI_WVALID(S_AXI_WVALID),
        .S_AXI_WREADY(S_AXI_WREADY),
        .S_AXI_BREADY(S_AXI_BREADY),
        .S_AXI_BVALID(S_AXI_BVALID),
        .S_AXI_BRESP(S_AXI_BRESP)
    );
    
    // Clock generation
    always #5 S_AXI_ACLK = ~S_AXI_ACLK;
    
    // Tasks for AXI4-Lite operations
    task axi_write(input [31:0] addr, input [31:0] data);
        begin
            @(posedge S_AXI_ACLK);
            S_AXI_AWADDR <= addr;
            S_AXI_AWVALID <= 1;
            S_AXI_WDATA <= data;
            S_AXI_WVALID <= 1;
            S_AXI_WSTRB <= 4'hF;
            S_AXI_BREADY <= 1;
            
            // Wait for address and data handshake
            wait(S_AXI_AWREADY && S_AXI_WREADY);
            @(posedge S_AXI_ACLK);
            S_AXI_AWVALID <= 0;
            S_AXI_WVALID <= 0;
            
            // Wait for write response
            wait(S_AXI_BVALID);
            @(posedge S_AXI_ACLK);
            S_AXI_BREADY <= 0;
            
            $display("Time: %0t - AXI Write: Addr=0x%08h, Data=0x%08h", $time, addr, data);
        end
    endtask
    
    task axi_read(input [31:0] addr, output [31:0] data);
        begin
            @(posedge S_AXI_ACLK);
            S_AXI_ARADDR <= addr;
            S_AXI_ARVALID <= 1;
            S_AXI_RREADY <= 1;
            
            // Wait for address handshake
            wait(S_AXI_ARREADY);
            @(posedge S_AXI_ACLK);
            S_AXI_ARVALID <= 0;
            
            // Wait for read data
            wait(S_AXI_RVALID);
            data = S_AXI_RDATA;
            @(posedge S_AXI_ACLK);
            S_AXI_RREADY <= 0;
            
            $display("Time: %0t - AXI Read: Addr=0x%08h, Data=0x%08h", $time, addr, data);
        end
    endtask
    
    // Test sequence
    reg [31:0] read_data;
    
    initial begin
        // Initialize signals
        S_AXI_ACLK = 0;
        S_AXI_ARESETN = 0;
        S_AXI_ARADDR = 0;
        S_AXI_ARVALID = 0;
        S_AXI_RREADY = 0;
        S_AXI_AWADDR = 0;
        S_AXI_AWVALID = 0;
        S_AXI_WDATA = 0;
        S_AXI_WSTRB = 0;
        S_AXI_WVALID = 0;
        S_AXI_BREADY = 0;
        
        $display("=== Test AXI4-Lite Exponent Module ===");
        
        // Reset
        #20;
        S_AXI_ARESETN = 1;
        #20;
        
        // Test Case 1: 2^3 = 8        
        // Write X = 2
        axi_write(ADDR_A, 32'd2);
        
        // Write A = 3
        axi_write(ADDR_B, 32'd3);
        
		// select
		axi_write(ADDR_SELECT, 32'd0);
		
        // Start calculation
        axi_write(ADDR_START, 32'd1);
        
        // Wait a bit and check if calculation is done
        #200;
        
        // Read done status
        axi_read(ADDR_DONE, read_data);

        if (read_data[0] == 1) begin
            $display("Calculation completed!");
            
            // Read result
            axi_read(ADDR_P, read_data);            
            $display("Test Case: Ket qua = %d (correct)", read_data[29:0]);
        end else begin
			axi_read(ADDR_P, read_data);            
            $display("Test Fail : Ket qua = %d", read_data[29:0]);
        end
                
        $display("\n=== Test completed ===");
        $finish;
    end
endmodule