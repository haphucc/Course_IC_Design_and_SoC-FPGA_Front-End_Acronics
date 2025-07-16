module exponent (
    i_clk, i_rst_n,
	i_load, i_start,
	i_X, i_A,
	o_done, o_P
);
	input wire i_clk, i_rst_n;
    input wire i_load, i_start;
    input [3:0] i_X, i_A;
    output reg o_done;
    output reg [29:0] o_P;
		
    parameter IDLE = 3'b000, LOAD = 3'b001, CALC = 3'b010, FINISH = 3'b011;

    reg [2:0] current_state;
    reg [3:0] reg_A, reg_X;
    reg [29:0] reg_P;	
    reg [3:0] counter;
	
    always @(posedge i_clk or negedge i_rst_n) begin
        if (!i_rst_n) begin
            reg_X <= 4'b0;				
            reg_A <= 4'b0;
            reg_P <= 29'b1;
            o_done <= 0;
            o_P <= 29'b1;
            counter <= 4'b0;
            current_state <= IDLE;
		end
		else begin
            case (current_state)
                IDLE: begin
                    reg_A <= 4'b0;
                    reg_X <= 4'b0;
                    reg_P <= 29'b1;
                    o_done <= 0;
					o_P <= 29'b0;
                    counter <= 4'b0;
					if (i_load) begin 
						reg_X <= i_X;  						
						reg_A <= i_A;  
						current_state <= LOAD;
                    end                    
                end	
				
				LOAD: begin                    
					current_state <= (i_start) ? CALC : LOAD;
                end
				
				CALC: begin	
					if (!i_start) begin				
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
                    if (i_start) begin
						current_state <= IDLE;
					end
                end
            endcase
        end
    end
endmodule