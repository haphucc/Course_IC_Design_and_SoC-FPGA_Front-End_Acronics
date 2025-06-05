module multiplier (
    input wire i_clk, i_rst_n,
    input wire i_load, i_start,
    input [3:0] i_A, i_B,
    output reg o_done,
    output reg [7:0] o_P,  //hien thi ket qua P ra led 7 doan
    output reg [6:0] seg_i_A_ten, seg_i_A_unit, seg_i_B_ten, seg_i_B_unit, seg_o_P_thousand, seg_o_P_hundred, seg_o_P_ten, seg_o_P_unit
);

    parameter IDLE = 3'b000, LOAD = 3'b001, CALC = 3'b010, FINISH = 3'b011;

    reg [2:0] current_state;
    reg [7:0] reg_A, reg_B;   //i_A va i_B tu switch dua vao thanh ghi reg_A va reg_B de tinh toan
    reg [3:0] led_reg_A, led_reg_B;    //i_A va i_B tu switch dua vao thanh ghi led_reg_A, led_reg_B de hien thi led 7 doan
    reg [7:0] reg_P;
    reg [2:0] index_bit_B;

    
    always @(posedge i_clk or negedge i_rst_n) begin
        if (!i_rst_n) begin
            reg_A <= 8'b0;
            reg_B <= 8'b0;
			   led_reg_A <= 4'b0;
            led_reg_B <= 4'b0;
            reg_P <= 8'b0;
            o_done <= 0;
            o_P <= 8'b0;
            index_bit_B <= 0;
            current_state <= IDLE;
        end
        else begin
            case (current_state)
                IDLE: begin
                    reg_A <= 8'b0;
                    reg_B <= 8'b0;
						  led_reg_A <= 4'b0;
					     led_reg_B <= 4'b0;
                    reg_P <= 8'b0;
                    o_done <= 0;
					     o_P <= 8'b0;
                    index_bit_B <= 0;
					if (!i_load) begin   // khi i_load duoc nhan thi i_A va i_B tu switch duoc dua vao thanh ghi
						reg_A <= i_A;  
						led_reg_A <= i_A; 
						reg_B <= i_B;  
						led_reg_B <= i_B;
						current_state <= LOAD; //sau do chuyen sang trang thai LOAD
					end
                    
                end

                LOAD: begin                    
					     current_state <= (!i_start) ? CALC : LOAD;  //du i_A va i_B thay doi và i_load có duoc bam bao nhiu lan 
																					//thi gia tri thanh ghi và led 7 doan van khong doi
																					// neu i_start = 1 duoc nhan thi sẽ chuyen trang thai sang CALC
                end

                CALC: begin
                    if (i_start) begin						  // khi i_start = 0 ~ nut duoc nha thi moi bat dau tinh
																			// loai bo truong hop i_start = 1 duoc nhan o trang thai LOAD, roi sang CALC roi den FINISH ma ket qua chua duoc tinh
                        if (index_bit_B < 4) begin     //index_bit_B=3;2;1;0 tuong ung 4bit cua i_B nhap vao
                            if (reg_B[index_bit_B]) begin		//kiem tra tung bit của reg_B (tu 0-->3) neu bit do =1 thì reg_P moi = reg_P cu +reg_A
                                reg_P <= reg_P + reg_A;
                            end
                            reg_A <= reg_A << 1;   //sau do dich reg_A sang trai 1 don vi va tang index_bit_B len 1 don vi
                            index_bit_B <= index_bit_B + 1;  
                        end
                        else begin
                            current_state <= FINISH; //khi nao kiem tra tung bit của reg_B xong thi chuyen sang trang thai FINISH
                            index_bit_B <= 0;
                        end
                    end
                end

                FINISH: begin
                    o_done <= 1;
                    o_P <= reg_P;
                    if (!i_start) begin  //neu i_start duoc nhan lan nua thi chuyen sang trang thai IDLE
						current_state <= IDLE;
					end
                end
            endcase
        end
    end


    always @(*) begin
                 
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