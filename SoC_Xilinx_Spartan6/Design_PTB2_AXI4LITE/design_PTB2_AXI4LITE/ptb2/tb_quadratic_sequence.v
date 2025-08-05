`timescale 1ns / 1ps

module tb_quadratic_sequence;

    // Đầu vào
    reg i_clk;
    reg i_rst_n;
    reg i_write_en;
    reg i_read_en;
    reg signed [4:0] i_data;

    // Đầu ra
    wire [1:0] o_result;
	
    wire signed [3:0] o_data;	

    // Khởi tạo module cần kiểm tra
    quadratic_sequence uut (
        .i_clk(i_clk),
        .i_rst_n(i_rst_n),
        .i_write_en(i_write_en),
        .i_read_en(i_read_en),
        .i_data(i_data),
        .o_result(o_result),
        .o_data(o_data)
    );

    // Tạo clock: chu kỳ 10ns (tần số 100MHz)
    initial begin
        i_clk = 0;
        forever #5 i_clk = ~i_clk; // Tạo xung clock
    end

    // Testbench
    initial begin
        // Khởi tạo các tín hiệu
        i_rst_n = 0;
        i_write_en = 0;
        i_read_en = 0;
        i_data = 0;

        // Reset module
        #10;
        i_rst_n = 1;
        #10;

        i_write_en = 1; i_data = 1; #10; i_write_en = 0; #10;
	
		i_write_en = 1; i_data = 2; #10; i_write_en = 0; #10;
		
		i_write_en = 1; i_data = 1; #10; i_write_en = 0; #10;
        

        // Chờ module tính toán (GET_A -> GET_B -> GET_C -> CALC_DELTA -> CALC_SQRT -> CALC_ROOTS -> FINISH -> IDLE)
        #100;

        // Kiểm tra o_result sau khi tính toán
        $display("Test RESULT: o_result = %b (11 - 2no)", o_result);
        

        // Nhấn i_read_en để xuất nghiệm x1 (READ_X1)
        i_read_en = 1;
        #10;
        i_read_en = 0;
        #10;

        $display("Display (x1) = %d", o_data);
		
        // Nhấn i_read_en để xuất nghiệm x2 (READ_X2)
        i_read_en = 1;
        #10;
        i_read_en = 0;
        #10;

        $display("Display (x2) = %d", o_data);
		$display("End test");
		
		i_write_en = 1; i_data = 1; #10; i_write_en = 0; #10;
	
		i_write_en = 1; i_data = 0; #10; i_write_en = 0; #10;
		
		i_write_en = 1; i_data = -4; #10; i_write_en = 0; #10;
        

        // Chờ module tính toán (GET_A -> GET_B -> GET_C -> CALC_DELTA -> CALC_SQRT -> CALC_ROOTS -> FINISH -> IDLE)
        #100;

        // Kiểm tra o_result sau khi tính toán
        $display("Test RESULT: o_result = %b (11 - 2no)", o_result);
        

        // Nhấn i_read_en để xuất nghiệm x1 (READ_X1)
        i_read_en = 1;
        #10;
        i_read_en = 0;
        #10;

        $display("Display (x1) = %d", o_data);
		
        // Nhấn i_read_en để xuất nghiệm x2 (READ_X2)
        i_read_en = 1;
        #10;
        i_read_en = 0;
        #10;

        $display("Display (x2) = %d", o_data);
		
        // Kết thúc mô phỏng
        #50;
        $finish;
    end

endmodule