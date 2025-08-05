module quadratic_sequence (
    input wire i_clk,            
    input wire i_rst_n,         
    input wire i_write_en,       
    input wire i_read_en,        
    input wire signed [4:0] i_data, 
    output reg [1:0] o_result,    // Root status: 00 (not computed), 01 (no roots), 10 (repeated root), 11 (two roots)
    output reg signed [3:0] o_data
);

    // Định nghĩa các trạng thái
    parameter IDLE        = 4'b0000,
              GET_A       = 4'b0001,
              GET_B       = 4'b0010,
              GET_C       = 4'b0011,
              CALC_DELTA  = 4'b0100,
              CALC_SQRT   = 4'b0101,
              CALC_ROOTS  = 4'b0110,
              FINISH      = 4'b0111,
              READ_X      = 4'b1000,
              READ_X1     = 4'b1001,
              READ_X2     = 4'b1010;

    // Biến nội bộ
    reg signed [3:0] reg_A, reg_B, reg_C; // Thanh ghi lưu hệ số A, B, C
    reg signed [15:0] delta;              // Delta = b^2 - 4ac
    reg signed [3:0] sqrt_delta;          // Căn bậc 2 của delta
    reg signed [3:0] reg_X, reg_X1, reg_X2; // Thanh ghi lưu nghiệm
    reg [3:0] current_state;              // Trạng thái hiện tại
    reg i_write_en_prev, i_read_en_prev;  // Lưu trạng thái trước của i_write_en, i_read_en

    // Biến tạm để xử lý dấu và giá trị
    reg signed [4:0] temp_value; // Giá trị tạm thời sau khi áp dụng dấu
    // FSM
    always @(posedge i_clk or negedge i_rst_n) begin
        if (!i_rst_n) begin
            reg_A <= 0;
            reg_B <= 0;
            reg_C <= 0;
            delta <= 0;
            sqrt_delta <= 0;
            reg_X <= 0;
            reg_X1 <= 0;
            reg_X2 <= 0;
            o_result <= 0;
            o_data <= 0;
            current_state <= IDLE;
            i_write_en_prev <= 0;
            i_read_en_prev <= 0;
        end else begin
            i_write_en_prev <= i_write_en;
            i_read_en_prev <= i_read_en;

            // Xử lý giá trị từ i_data: áp dụng dấu từ bit 4, lấy giá trị từ bit [3:0]
            if (i_data[4] == 1'b0) begin
                temp_value = $signed(i_data[3:0]); // Giá trị dương
            end else begin
                temp_value = -$signed(i_data[3:0]); // Giá trị âm
            end

            case (current_state)
                IDLE: begin
                    if (i_read_en && !i_read_en_prev) begin
                        case (o_result)
                            2'b10: begin // Nghiệm kép
                                current_state <= READ_X;
                            end
                            2'b11: begin // Hai nghiệm
                                current_state <= READ_X1;
                            end
                            default: current_state <= IDLE; // Vô nghiệm
                        endcase
                    end else if (i_write_en && !i_write_en_prev) begin
                        reg_A <= temp_value[3:0];
                        current_state <= GET_A;
                    end
                end

                GET_A: begin
                    if (i_write_en && !i_write_en_prev) begin
                        reg_B <= temp_value[3:0];
                        current_state <= GET_B;
                    end
                end

                GET_B: begin
                    if (i_write_en && !i_write_en_prev) begin
                        reg_C <= temp_value[3:0];
                        current_state <= GET_C;
                    end
                end

                GET_C: begin
                    current_state <= CALC_DELTA;
                end

                CALC_DELTA: begin
                    // Tính delta = b^2 - 4ac
                    delta <= (reg_B * reg_B) - (4 * reg_A * reg_C);
                    current_state <= CALC_SQRT;
                end

                CALC_SQRT: begin
                    // Tính sqrt_delta bằng LUT
                    case (delta)
                        16'd0:  sqrt_delta <= 4'd0;
                        16'd1:  sqrt_delta <= 4'd1;
                        16'd4:  sqrt_delta <= 4'd2;
                        16'd9:  sqrt_delta <= 4'd3;
                        16'd16: sqrt_delta <= 4'd4;
                        16'd25: sqrt_delta <= 4'd5;
                        16'd36: sqrt_delta <= 4'd6;
                        16'd49: sqrt_delta <= 4'd7;
                        16'd64: sqrt_delta <= 4'd8;
                        16'd81: sqrt_delta <= 4'd9;
                        16'd100: sqrt_delta <= 4'd10;
                        16'd121: sqrt_delta <= 4'd11;
                        16'd144: sqrt_delta <= 4'd12;
                        16'd169: sqrt_delta <= 4'd13;
                        16'd196: sqrt_delta <= 4'd14;
                        16'd225: sqrt_delta <= 4'd15;
                        default: sqrt_delta <= 4'd0; // Delta âm hoặc không phải số chính phương
                    endcase
                    current_state <= CALC_ROOTS;
                end

                CALC_ROOTS: begin
                    // Tính nghiệm
                    if (reg_A != 0) begin
                        reg_X  <= (-reg_B) / (2 * reg_A);
                        reg_X1 <= (-reg_B + $signed({4'b0, sqrt_delta})) / (2 * reg_A);
                        reg_X2 <= (-reg_B - $signed({4'b0, sqrt_delta})) / (2 * reg_A);
                    end else begin
                        reg_X <= 0;
                        reg_X1 <= 0;
                        reg_X2 <= 0;
                    end
                    current_state <= FINISH;
                end

                FINISH: begin
                    if (delta < 0)
                        o_result <= 2'b01; // Vô nghiệm
                    else if (delta == 0)
                        o_result <= 2'b10; // Nghiệm kép
                    else
                        o_result <= 2'b11; // Hai nghiệm phân biệt
                    current_state <= IDLE;
                end

                READ_X: begin
                    o_data <= reg_X; // Xuất nghiệm kép
                    if (i_read_en && !i_read_en_prev) begin
                        current_state <= IDLE;
                    end
                end

                READ_X1: begin
                    o_data <= reg_X1; // Xuất nghiệm x1
                    if (i_read_en && !i_read_en_prev) begin
                        current_state <= READ_X2;
                    end
                end

                READ_X2: begin
                    o_data <= reg_X2; // Xuất nghiệm x2
                    if (i_read_en && !i_read_en_prev) begin
                        current_state <= IDLE;
                    end
                end
            endcase
        end
    end

endmodule