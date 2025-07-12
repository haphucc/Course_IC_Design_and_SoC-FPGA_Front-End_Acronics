module axi4_lite_slave (
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

	reg [31:0] reg_data;
    assign S_AXI_BRESP = 2'b00;  // OKAY
    assign S_AXI_RRESP = 2'b00;  // OKAY
	
	
	/********************************** READ **********************************/
	always @(posedge S_AXI_ACLK) begin
		if (!S_AXI_ARESETN) begin
			S_AXI_ARREADY <= 0;
			S_AXI_RVALID  <= 0;
			S_AXI_RDATA   <= 0;
		end else begin
			if (!S_AXI_ARREADY && S_AXI_ARVALID)
				S_AXI_ARREADY <= 1;
			else
				S_AXI_ARREADY <= 0;

			// Khi handshake AR ok → chuẩn bị dữ liệu
			if (S_AXI_ARVALID && S_AXI_ARREADY) begin
				S_AXI_RDATA  <= reg_data;
				S_AXI_RVALID <= 1;
			end

			if (S_AXI_RVALID && S_AXI_RREADY)
				S_AXI_RVALID <= 0;
		end
	end


	/********************************** WRITE *********************************/
	always @(posedge S_AXI_ACLK) begin
		if (!S_AXI_ARESETN) begin
			S_AXI_AWREADY <= 0;
			S_AXI_WREADY  <= 0;
			S_AXI_BVALID  <= 0;
			reg_data      <= 0;
		end else begin
			// Bắt tay ghi địa chỉ
			if (!S_AXI_AWREADY && S_AXI_AWVALID)
				S_AXI_AWREADY <= 1;
			else
				S_AXI_AWREADY <= 0;

			// Bắt tay ghi dữ liệu
			if (!S_AXI_WREADY && S_AXI_WVALID)
				S_AXI_WREADY <= 1;
			else
				S_AXI_WREADY <= 0;

			// Ghi dữ liệu khi cả hai valid
			if (S_AXI_AWVALID && S_AXI_WVALID && S_AXI_AWREADY && S_AXI_WREADY) begin
				reg_data <= S_AXI_WDATA;
				S_AXI_BVALID <= 1;
			end

			// Kết thúc phản hồi
			if (S_AXI_BVALID && S_AXI_BREADY)
				S_AXI_BVALID <= 0;
		end
	end
endmodule