module tb_multiplier();
    // Khai báo tín hiệu testbench
    reg i_clk, i_rst_n;
    reg i_load, i_start;
    reg [3:0] i_A, i_B;
    wire o_done;
    wire [7:0] o_P;
    
    // Instantiate module exponent
    multiplier DUT (
        .i_clk(i_clk),
        .i_rst_n(i_rst_n),
        .i_load(i_load),
        .i_start(i_start),
        .i_A(i_A),
        .i_B(i_B),
        .o_done(o_done),
        .o_P(o_P)
    );
    
    // Tạo clock với chu kỳ 10ns
    always #5 i_clk = ~i_clk;
    
    // Test sequence
    initial begin
        // Khởi tạo
        i_clk = 0;
        i_rst_n = 0;
        i_load = 0;
        i_start = 0;
        i_A = 0;
        i_B = 0;
        
        $display("=== Bắt đầu test module exponent ===");
        
        // Reset hệ thống
        #10;
        i_rst_n = 1;
        #10;
        
        // Load giá trị X=2, A=3
        i_A = 4'd15;
        i_B = 4'd15;
        i_load = 1;
        #10;
        i_load = 0;
        
        
        // Bắt đầu tính toán
        #10;
        i_start = 1;
        #10;
        i_start = 0;
        
        
        // Chờ đến khi hoàn thành
        wait(o_done);
        
        $display("Time: %0t - Hoàn thành tính toán", $time);
        $display("Kết quả: %d^%d = %d", i_A, i_B, o_P);
        
        // Reset để test case tiếp theo
        #20;
        i_start = 1;
        #10;
        i_start = 0;
		#20;
		
        $finish;
    end   
endmodule