//=================== hammu_ip.v ===================
module hammu_ip 
    #(
        parameter C_S_AXI_DATA_WIDTH = 32,
        parameter C_S_AXI_ADDR_WIDTH = 32,
        parameter C_S_AXI_MIN_SIZE   = 32'h000001ff,
        parameter C_USE_WSTRB        = 0,
        parameter C_DPHASE_TIMEOUT   = 8,
        parameter C_BASEADDR         = 32'h7c800000,
        parameter C_HIGHADDR         = 32'h7c80ffff,
        parameter C_FAMILY           = "spartan6",
        parameter C_NUM_REG          = 1,
        parameter C_NUM_MEM          = 1,
        parameter C_SLV_AWIDTH       = 32,
        parameter C_SLVDWIDTH        = 32
    )
    (
        input  wire        S_AXI_ACLK,
        input  wire        S_AXI_ARESETN,
        input  wire [31:0] S_AXI_AWADDR,
        input  wire        S_AXI_AWVALID,
        input  wire [31:0] S_AXI_WDATA,
        input  wire [3:0]  S_AXI_WSTRB,
        input  wire        S_AXI_WVALID,
        input  wire [31:0] S_AXI_ARADDR,
        input  wire        S_AXI_ARVALID,
        input  wire        S_AXI_RREADY,
        input  wire        S_AXI_BREADY,

        output wire        S_AXI_AWREADY,
        output wire        S_AXI_WREADY,
        output wire        S_AXI_BVALID,
        output wire        S_AXI_ARREADY,
        output wire [31:0] S_AXI_RDATA,
        output wire        S_AXI_RVALID,
        output wire [1:0]  S_AXI_BRESP,
        output wire [1:0]  S_AXI_RRESP
    );

    exponent_axi4_lite_slave slave_inst (
        .S_AXI_ACLK(S_AXI_ACLK),
        .S_AXI_ARESETN(S_AXI_ARESETN),
        .S_AXI_AWADDR(S_AXI_AWADDR),
        .S_AXI_AWVALID(S_AXI_AWVALID),
        .S_AXI_WDATA(S_AXI_WDATA),
        .S_AXI_WSTRB(S_AXI_WSTRB),
        .S_AXI_WVALID(S_AXI_WVALID),
        .S_AXI_ARADDR(S_AXI_ARADDR),
        .S_AXI_ARVALID(S_AXI_ARVALID),
        .S_AXI_RREADY(S_AXI_RREADY),
        .S_AXI_BREADY(S_AXI_BREADY),

        .S_AXI_AWREADY(S_AXI_AWREADY),
        .S_AXI_WREADY(S_AXI_WREADY),
        .S_AXI_BVALID(S_AXI_BVALID),
        .S_AXI_ARREADY(S_AXI_ARREADY),
        .S_AXI_RDATA(S_AXI_RDATA),
        .S_AXI_RVALID(S_AXI_RVALID),
        .S_AXI_BRESP(S_AXI_BRESP),
        .S_AXI_RRESP(S_AXI_RRESP)
    );

endmodule
