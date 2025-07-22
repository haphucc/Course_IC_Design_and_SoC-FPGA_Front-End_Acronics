module tb_exponent_multiplier();
    // Khai báo tín hiệu testbench
    reg i_clk, i_rst_n;
    reg i_load, i_start, i_select;
    reg [3:0] i_A, i_B;
    wire o_done;
    wire [29:0] o_P;
    
    // Instantiate module exponent
    exponent_multiplier DUT (
        .i_clk(i_clk),
        .i_rst_n(i_rst_n),
        .i_load(i_load),
        .i_start(i_start),
		.i_select(i_select),
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
        
        $display("=== Test module exponent_multiplier ===");
        
        // Reset hệ thống
        #10;
        i_rst_n = 1;
        #10;
		
		//========================================================
		
        i_A = 4'd6;
        i_B = 4'd2;			
			
        i_load = 1;
        #10;
        i_load = 0;        
        
		i_select = 0;
		
        // Bắt đầu tính toán
        #10;
        i_start = 1;
        #10;
        i_start = 0;        
        #60;
        // Chờ đến khi hoàn thành
        wait(o_done);
        
		$display("Case: %d * %d = %d", i_A, i_B, o_P);		
		
		//========================================================
		
        // Reset để test case tiếp theo
        #20;
        i_start = 1;
        #10;
        i_start = 0;
		#20;
		
        $finish;
    end   
endmodule