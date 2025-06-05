module multiplier_1_input (
    input wire i_clk,       
    input wire i_rst_n,       
    input wire i_load,       
    input wire i_start,      
    input wire [3:0] i_data,  
    output reg o_done,       
    output reg [14:0] o_P,
    output reg [6:0] seg_i_A_ten, seg_i_A_unit, seg_i_B_ten, seg_i_B_unit, seg_o_P_thousand, seg_o_P_hundred, seg_o_P_ten, seg_o_P_unit
);

	parameter IDLE = 3'b000, LOAD_A = 3'b001, LOAD_B = 3'b010, CALC = 3'b011, FINISH = 3'b100;

	reg [2:0] current_state;
    reg [7:0] reg_A, reg_B;
    reg [3:0] led_reg_A, led_reg_B;
    reg [14:0] reg_P;
    reg [2:0] index_bit_B;
	reg [3:0] load_count;  
	reg load_prev;       

	always @(posedge i_clk or negedge i_rst_n) begin
		if (!i_rst_n) begin
			reg_A <= 4'b0;
			reg_B <= 4'b0;
			led_reg_A <= 4'b0;
			led_reg_B <= 4'b0;
			reg_P <= 8'b0;
			o_done <= 0;
			o_P <= 8'b0;
			load_count <= 0;
			load_prev <= 0;
			index_bit_B <= 0;
			current_state <= IDLE;
		end
		
		else begin
			load_prev <= !i_load;
			if (!i_load && !load_prev) begin
				load_count <= load_count + 1;  // Tăng load_count khi phát hiện cạnh lên
			end
		
			case (current_state)
				IDLE: begin
					reg_A <= 4'b0;
					reg_B <= 4'b0;
					led_reg_A <= 4'b0;
					led_reg_B <= 4'b0;
					reg_P <= 8'b0;
					o_done <= 0;
					o_P <= 8'b0;
					load_count <= 0;
					index_bit_B <= 0;
					if (!i_load && !load_prev) begin
						reg_A <= i_data;
						led_reg_A <= i_data;
						current_state <= LOAD_A;
					end
				end
				
				LOAD_A: begin
					if (!i_load && !load_prev) begin
						reg_B <= i_data;
						led_reg_B <= i_data;
						current_state <= LOAD_B;
					end
					
				end
				
				LOAD_B: begin
					if (!i_load && !load_prev) begin
						if (load_count[0] == 0) begin  // Số lần nhấn chẵn (bit thấp nhất = 0)
							reg_B <= i_data;  // Sửa A
							led_reg_B <= i_data;
							current_state <= LOAD_B;
						end
						else begin  // Số lần nhấn lẻ (bit thấp nhất = 1)
							reg_A <= i_data;  // Sửa X
							led_reg_A <= i_data;
							current_state <= LOAD_A;
						end
					end
					else if (!i_start) begin
						load_count <= 0;  // Reset bộ đếm khi bắt đầu tính toán
						current_state <= CALC;  // Nhấn start để tính toán
					end
				end
				
				CALC: begin
                    if (i_start) begin
                        if (index_bit_B < 4) begin
                            if (reg_B[index_bit_B]) begin
                                reg_P <= reg_P + reg_A;
                            end
                            reg_A <= reg_A << 1;
                            index_bit_B <= index_bit_B + 1;
                        end 
						else begin
                            current_state <= FINISH;
                        end
                    end
                end
				
				FINISH: begin
					o_done <= 1;
					o_P <= reg_P;
					if (!i_start) begin
						current_state <= IDLE;  // Quay lại IDLE để nhập mới
					end
				end
			endcase
		end
	end

	// Logic hiển thị 7-segment
	always @(*) begin
		// Hiển thị i_A (hàng đơn vị)
		case (led_reg_A % 10)
			4'd0: seg_i_A_unit = 7'b1000000;
			4'd1: seg_i_A_unit = 7'b1111001;
			4'd2: seg_i_A_unit = 7'b0100100;
			4'd3: seg_i_A_unit = 7'b0110000;
			4'd4: seg_i_A_unit = 7'b0011001;
			4'd5: seg_i_A_unit = 7'b0010010;
			4'd6: seg_i_A_unit = 7'b0000010;
			4'd7: seg_i_A_unit = 7'b1111000;
			4'd8: seg_i_A_unit = 7'b0000000;
			4'd9: seg_i_A_unit = 7'b0010000;
			default: seg_i_A_unit = 7'b1000000;
		endcase

		// Hiển thị i_B (hàng chục)
		case (led_reg_A / 10)
			4'd0: seg_i_A_ten = 7'b1000000;
			4'd1: seg_i_A_ten = 7'b1111001;
			4'd2: seg_i_A_ten = 7'b0100100;
			4'd3: seg_i_A_ten = 7'b0110000;
			4'd4: seg_i_A_ten = 7'b0011001;
			4'd5: seg_i_A_ten = 7'b0010010;
			4'd6: seg_i_A_ten = 7'b0000010;
			4'd7: seg_i_A_ten = 7'b1111000;
			4'd8: seg_i_A_ten = 7'b0000000;
			4'd9: seg_i_A_ten = 7'b0010000;
			default: seg_i_A_ten = 7'b1000000;
		endcase

		// Hiển thị i_B (hàng đơn vị)
		case (led_reg_B % 10)
			4'd0: seg_i_B_unit = 7'b1000000;
			4'd1: seg_i_B_unit = 7'b1111001;
			4'd2: seg_i_B_unit = 7'b0100100;
			4'd3: seg_i_B_unit = 7'b0110000;
			4'd4: seg_i_B_unit = 7'b0011001;
			4'd5: seg_i_B_unit = 7'b0010010;
			4'd6: seg_i_B_unit = 7'b0000010;
			4'd7: seg_i_B_unit = 7'b1111000;
			4'd8: seg_i_B_unit = 7'b0000000;
			4'd9: seg_i_B_unit = 7'b0010000;
			default: seg_i_B_unit = 7'b1000000;
		endcase

		// Hiển thị i_B (hàng chục)
		case (led_reg_B / 10)
			4'd0: seg_i_B_ten = 7'b1000000;
			4'd1: seg_i_B_ten = 7'b1111001;
			4'd2: seg_i_B_ten = 7'b0100100;
			4'd3: seg_i_B_ten = 7'b0110000;
			4'd4: seg_i_B_ten = 7'b0011001;
			4'd5: seg_i_B_ten = 7'b0010010;
			4'd6: seg_i_B_ten = 7'b0000010;
			4'd7: seg_i_B_ten = 7'b1111000;
			4'd8: seg_i_B_ten = 7'b0000000;
			4'd9: seg_i_B_ten = 7'b0010000;
			default: seg_i_B_ten = 7'b1000000;
		endcase

		// Hiển thị o_P (hàng đơn vị)
		case (o_P % 10)
			4'd0: seg_o_P_unit = 7'b1000000;
			4'd1: seg_o_P_unit = 7'b1111001;
			4'd2: seg_o_P_unit = 7'b0100100;
			4'd3: seg_o_P_unit = 7'b0110000;
			4'd4: seg_o_P_unit = 7'b0011001;
			4'd5: seg_o_P_unit = 7'b0010010;
			4'd6: seg_o_P_unit = 7'b0000010;
			4'd7: seg_o_P_unit = 7'b1111000;
			4'd8: seg_o_P_unit = 7'b0000000;
			4'd9: seg_o_P_unit = 7'b0010000;
			default: seg_o_P_unit = 7'b1000000;
		endcase

		// Hiển thị o_P (hàng chục)
		case ((o_P / 10) % 10)
			4'd0: seg_o_P_ten = 7'b1000000;
			4'd1: seg_o_P_ten = 7'b1111001;
			4'd2: seg_o_P_ten = 7'b0100100;
			4'd3: seg_o_P_ten = 7'b0110000;
			4'd4: seg_o_P_ten = 7'b0011001;
			4'd5: seg_o_P_ten = 7'b0010010;
			4'd6: seg_o_P_ten = 7'b0000010;
			4'd7: seg_o_P_ten = 7'b1111000;
			4'd8: seg_o_P_ten = 7'b0000000;
			4'd9: seg_o_P_ten = 7'b0010000;
			default: seg_o_P_ten = 7'b1000000;
		endcase

		// Hiển thị o_P (hàng trăm)
		case (o_P / 100)
			4'd0: seg_o_P_hundred = 7'b1000000;
			4'd1: seg_o_P_hundred = 7'b1111001;
			4'd2: seg_o_P_hundred = 7'b0100100;
			4'd3: seg_o_P_hundred = 7'b0110000;
			4'd4: seg_o_P_hundred = 7'b0011001;
			4'd5: seg_o_P_hundred = 7'b0010010;
			4'd6: seg_o_P_hundred = 7'b0000010;
			4'd7: seg_o_P_hundred = 7'b1111000;
			4'd8: seg_o_P_hundred = 7'b0000000;
			4'd9: seg_o_P_hundred = 7'b0010000;
			default: seg_o_P_hundred = 7'b1000000;
		endcase
		
		case (o_P / 1000)
			4'd0: seg_o_P_thousand = 7'b1000000;
			4'd1: seg_o_P_thousand = 7'b1111001;
			4'd2: seg_o_P_thousand = 7'b0100100;
			4'd3: seg_o_P_thousand = 7'b0110000;
			4'd4: seg_o_P_thousand = 7'b0011001;
			4'd5: seg_o_P_thousand = 7'b0010010;
			4'd6: seg_o_P_thousand = 7'b0000010;
			4'd7: seg_o_P_thousand = 7'b1111000;
			4'd8: seg_o_P_thousand = 7'b0000000;
			4'd9: seg_o_P_thousand = 7'b0010000;
			default: seg_o_P_thousand = 7'b1000000;		
		endcase
	end

endmodule