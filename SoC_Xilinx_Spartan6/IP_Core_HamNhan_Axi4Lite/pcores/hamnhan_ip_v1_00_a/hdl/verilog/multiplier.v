module multiplier (
    i_clk, i_rst_n,
    i_load, i_start,
    i_A, i_B,
    o_done, o_P
);
	input wire i_clk, i_rst_n;
    input wire i_load, i_start;
    input [3:0] i_A, i_B;
    output reg o_done;
    output reg [7:0] o_P;

    parameter IDLE = 3'b000, LOAD = 3'b001, CALC = 3'b010, FINISH = 3'b011;

    reg [2:0] current_state;
    reg [19:0] reg_A;
	reg [3:0] reg_B;  
    reg [7:0] reg_P;
    reg [2:0] index_bit_B;

    
    always @(posedge i_clk or negedge i_rst_n) begin
        if (!i_rst_n) begin
            reg_A <= 20'b0;
            reg_B <= 4'b0;
            reg_P <= 8'b0;
            o_done <= 0;
            o_P <= 8'b0;
            index_bit_B <= 0;
            current_state <= IDLE;
        end
        else begin
            case (current_state)
                IDLE: begin
                    reg_A <= 20'b0;
                    reg_B <= 4'b0;
                    reg_P <= 8'b0;
                    o_done <= 0;
					o_P <= 8'b0;
                    index_bit_B <= 0;
					if (i_load) begin 
						reg_A <= {16'b0, i_A};  
						reg_B <= i_B;  
						current_state <= LOAD;
					end
                    
                end

                LOAD: begin                    
					current_state <= (i_start) ? CALC : LOAD;  
                end

                CALC: begin
                    if (!i_start) begin						 
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
                    if (i_start) begin 
						current_state <= IDLE;
					end
                end
            endcase
        end
    end
endmodule