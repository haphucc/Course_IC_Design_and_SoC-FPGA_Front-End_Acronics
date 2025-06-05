module exponent (
    input wire i_clk, i_rst_n,
    input wire i_load, i_start,
    input [3:0] i_X, i_A,
    output reg o_done,
    output reg [14:0] o_P,
    output reg [6:0] seg_i_X_ten, seg_i_X_unit, seg_i_A_ten, seg_i_A_unit, seg_o_P_thousand, seg_o_P_hundred, seg_o_P_ten, seg_o_P_unit
);

    parameter IDLE = 3'b000, LOAD = 3'b001, CALC = 3'b010, FINISH = 3'b011;

    reg [2:0] current_state;
    reg [3:0] reg_A, reg_X;
	 reg [3:0] led_reg_A, led_reg_X;
    reg [14:0] reg_P;	
    reg [3:0] counter;
	
    always @(posedge i_clk or negedge i_rst_n) begin
        if (!i_rst_n) begin
            reg_X <= 8'b0;
            led_reg_X <= 8'b0;				
            reg_A <= 8'b0;
			   led_reg_A <= 8'b0;
            reg_P <= 8'b1;
            o_done <= 0;
            o_P <= 8'b1;
            counter <= 4'b0;
            current_state <= IDLE;
		end
		else begin
            case (current_state)
                IDLE: begin
                    reg_A <= 4'b0;
                    reg_X <= 4'b0;
					     led_reg_A <= 4'b0;
					     led_reg_X <= 4'b0;
                    reg_P <= 8'b1;
                    o_done <= 0;
					     o_P <= 8'b0;
                    counter <= 4'b0;
					if (!i_load) begin 
						reg_X <= i_X;  
						led_reg_X <= i_X;
						
						reg_A <= i_A;  
						led_reg_A <= i_A;
						current_state <=  LOAD;
                    end                    
                end	
				
				LOAD: begin                    
					current_state <= (!i_start) ? CALC : LOAD;
                end
				
				CALC: begin	
					if (i_start) begin				
						if (counter < reg_A) begin
							reg_P <= reg_P * reg_X;
							counter <= counter + 1;
						end
						else begin
							current_state <= FINISH;
							counter <= 4'b0;
						end
					end
                end
							
				FINISH: begin
                    o_done <= 1;
                    o_P <= reg_P;
                    if (!i_start) begin
						current_state <= IDLE;
					end
                end
            endcase
        end
    end
				
	always @(*) begin  
		case (led_reg_X % 10)
			4'd0: seg_i_X_unit = 7'b1000000;
			4'd1: seg_i_X_unit = 7'b1111001;
			4'd2: seg_i_X_unit = 7'b0100100;
			4'd3: seg_i_X_unit = 7'b0110000;
			4'd4: seg_i_X_unit = 7'b0011001;
			4'd5: seg_i_X_unit = 7'b0010010;
			4'd6: seg_i_X_unit = 7'b0000010;
			4'd7: seg_i_X_unit = 7'b1111000;
			4'd8: seg_i_X_unit = 7'b0000000;
			4'd9: seg_i_X_unit = 7'b0010000;
			default: seg_i_X_unit = 7'b1000000;
		endcase

		case (led_reg_X / 10)
			4'd0: seg_i_X_ten = 7'b1000000;
			4'd1: seg_i_X_ten = 7'b1111001;
			4'd2: seg_i_X_ten = 7'b0100100;
			4'd3: seg_i_X_ten = 7'b0110000;
			4'd4: seg_i_X_ten = 7'b0011001;
			4'd5: seg_i_X_ten = 7'b0010010;
			4'd6: seg_i_X_ten = 7'b0000010;
			4'd7: seg_i_X_ten = 7'b1111000;
			4'd8: seg_i_X_ten = 7'b0000000;
			4'd9: seg_i_X_ten = 7'b0010000;
			default: seg_i_X_ten = 7'b1000000;
		endcase       
		
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