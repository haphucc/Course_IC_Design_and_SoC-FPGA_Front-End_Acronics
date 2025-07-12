`timescale 1ns / 1ps

module tb_axi4_lite_slave;

    reg clk, rst_n;

    // AXI Write Address Channel
    reg  [31:0] awaddr;
    reg         awvalid;
    wire        awready;

    // AXI Write Data Channel
    reg  [31:0] wdata;
    reg  [3:0]  wstrb;
    reg         wvalid;
    wire        wready;

    // AXI Write Response Channel
    reg         bready;
    wire        bvalid;
    wire [1:0]  bresp;

    // AXI Read Address Channel
    reg  [31:0] araddr;
    reg         arvalid;
    wire        arready;

    // AXI Read Data Channel
    reg         rready;
    wire [31:0] rdata;
    wire        rvalid;
    wire [1:0]  rresp;

    // Instantiate DUT
    axi4_lite_slave dut (
        .S_AXI_ACLK     (clk),
        .S_AXI_ARESETN  (rst_n),

        .S_AXI_AWADDR   (awaddr),
        .S_AXI_AWVALID  (awvalid),
        .S_AXI_AWREADY  (awready),

        .S_AXI_WDATA    (wdata),
        .S_AXI_WSTRB    (wstrb),
        .S_AXI_WVALID   (wvalid),
        .S_AXI_WREADY   (wready),

        .S_AXI_BVALID   (bvalid),
        .S_AXI_BREADY   (bready),
        .S_AXI_BRESP    (bresp),

        .S_AXI_ARADDR   (araddr),
        .S_AXI_ARVALID  (arvalid),
        .S_AXI_ARREADY  (arready),

        .S_AXI_RDATA    (rdata),
        .S_AXI_RVALID   (rvalid),
        .S_AXI_RREADY   (rready),
        .S_AXI_RRESP    (rresp)
    );

    // Clock generator
    initial clk = 0;
    always #5 clk = ~clk;  // 100 MHz

    // Test Sequence
    initial begin
        $display("Start Simulation");
        rst_n = 0;
        awaddr = 0; awvalid = 0;
        wdata = 0; wstrb = 4'b1111; wvalid = 0;
        bready = 0;
        araddr = 0; arvalid = 0;
        rready = 0;

        // Reset
        #20;
        rst_n = 1;

        // ====================
        //  WRITE TRANSACTION
        // ====================
        #10;
        @(posedge clk);
        awaddr  <= 32'h7c800004;
        awvalid <= 1;
        wdata   <= 32'hABCD1234;
        wvalid  <= 1;
        wstrb   <= 4'b1111;

        // Chờ bắt tay ghi
        wait (awready && wready);
        @(posedge clk);
        awvalid <= 0;
        wvalid  <= 0;

        // Chờ phản hồi BVALID
        bready <= 1;
        wait (bvalid);
        @(posedge clk);
        bready <= 0;
        $display("Write Done: Data = 0x%h", wdata);

        // ====================
        //  READ TRANSACTION
        // ====================
        #20;
        @(posedge clk);
        araddr  <= 32'h7c800004;
        arvalid <= 1;

        wait (arready);
        @(posedge clk);
        arvalid <= 0;
        rready <= 1;

        wait (rvalid);
        @(posedge clk);
        $display("Read Done: Data = 0x%h", rdata);
        rready <= 0;

        #20;
        $display("Simulation Finished");
        $stop;
    end

endmodule
