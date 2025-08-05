module tb_ptb2_axi4_lite_slave();

    // Clock and Reset
    reg S_AXI_ACLK;
    reg S_AXI_ARESETN;
    
    // AXI4-Lite signals
    reg [31:0] S_AXI_ARADDR;
    reg        S_AXI_ARVALID;
    wire       S_AXI_ARREADY;
    reg        S_AXI_RREADY;
    wire signed [31:0] S_AXI_RDATA;
    wire       S_AXI_RVALID;
    wire [1:0] S_AXI_RRESP;
    
    reg [31:0] S_AXI_AWADDR;
    reg        S_AXI_AWVALID;
    wire       S_AXI_AWREADY;
    reg signed [31:0] S_AXI_WDATA;
    reg [3:0]  S_AXI_WSTRB;
    reg        S_AXI_WVALID;
    wire       S_AXI_WREADY;
    reg        S_AXI_BREADY;
    wire       S_AXI_BVALID;
    wire [1:0] S_AXI_BRESP;
    
    // Address Parameters  
    parameter ADDR_A          = 32'h79c00000;  
    parameter ADDR_B          = 32'h79c00004;  
    parameter ADDR_C	      = 32'h79c00008;
	parameter ADDR_READ_EN	  = 32'h79c0000C;
    parameter ADDR_RESULT     = 32'h79c00010;
	parameter ADDR_DATA_OUT	  = 32'h79c00014;
    
    // Instantiate DUT
    ptb2_axi4_lite_slave DUT (
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
    task axi_write(input [31:0] addr, input signed [4:0] data);
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
            
            //$display("Time: %0t - AXI Write: Addr=0x%08h, Data=0x%5b", $time, addr, data);
			
			$display("Time: %0t - AXI Write: Addr=0x%08h, Data=%0d (binary: %b)", 
						 $time, addr, $signed(data[4:0]), data[4:0]);
			
        end
    endtask
    
    // Modified read task to handle signed data display
    task axi_read(input [31:0] addr, output signed [31:0] data);
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
            
            // Display based on address type
            if (addr == ADDR_DATA_OUT) begin
                // For quadratic roots, display as signed 4-bit value
                $display("Time: %0t - AXI Read: Addr=0x%08h, Data=%0d (binary: %b)", 
                         $time, addr, $signed(data[3:0]), data[3:0]);
            end else begin
                // For other addresses, display as usual
                $display("Time: %0t - AXI Read: Addr=0x%08h, Data=0x%3b", $time, addr, data);
            end
        end
    endtask
    
    // Test sequence
    reg signed [31:0] read_data;
    
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
        
        $display("=== Test AXI4-Lite PTB2 Module ===");
        
        // Reset
        #20;
        S_AXI_ARESETN = 1;
        #20;
        
        // Write coefficients
        axi_write(ADDR_A, 1);  
        axi_write(ADDR_B, 2); 
        axi_write(ADDR_C, 1);  
		
        #50;
        
        // Read result status
        axi_read(ADDR_RESULT, read_data);
		$display("Ket qua o_Result = %b ", read_data[1:0]);
		
		$display("Read x1");
		#40;
		axi_write(ADDR_READ_EN, 1);
		axi_read(ADDR_DATA_OUT, read_data);            
		
		#20;
		$display("Read x2");
		#30;
		axi_write(ADDR_READ_EN, 1);
		axi_read(ADDR_DATA_OUT, read_data);            
		
		#50;
        $display("\n=== Test completed ===");
		
		// Write coefficients
        axi_write(ADDR_A, 1);  
        axi_write(ADDR_B, 1); 
        axi_write(ADDR_C, -6);  
		
        #50;
        
        // Read result status
        axi_read(ADDR_RESULT, read_data);
		$display("Ket qua o_Result = %b ", read_data[1:0]);
		
		$display("Read x1");
		#40;
		axi_write(ADDR_READ_EN, 1);
		axi_read(ADDR_DATA_OUT, read_data);            
		
		#20;
		$display("Read x2");
		#30;
		axi_write(ADDR_READ_EN, 1);
		axi_read(ADDR_DATA_OUT, read_data);            
		
		#50;
		axi_write(ADDR_READ_EN, 1);

        $finish;
    end
endmodule