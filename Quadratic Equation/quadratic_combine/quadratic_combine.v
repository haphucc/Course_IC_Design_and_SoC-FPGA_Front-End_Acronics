module quadratic_combine (
    input wire i_enable,          // Control signal
    input wire signed [4:0] i_a,  // Coefficient a (bit 4 là dấu, bit [3:0] là giá trị)
    input wire signed [4:0] i_b,  // Coefficient b (bit 4 là dấu, bit [3:0] là giá trị)
    input wire signed [4:0] i_c,  // Coefficient c (bit 4 là dấu, bit [3:0] là giá trị)
    output reg [1:0] o_result,    // Root status: 00 (not computed), 01 (no roots), 10 (repeated root), 11 (two roots)
    output wire signed [3:0] x1_out, // Latched x1 output (4-bit signed)
    output wire signed [3:0] x2_out, // Latched x2 output (4-bit signed)
    output wire [6:0] seg1_x1,    // LED 1 for x1 (sign)
    output wire [6:0] seg2_x1,    // LED 2 for x1 (value)
    output wire [6:0] seg1_x2,    // LED 1 for x2 (sign)
    output wire [6:0] seg2_x2     // LED 2 for x2 (value)
);

    reg signed [15:0] delta;      // Delta = b^2 - 4ac (16-bit signed)
    reg signed [15:0] b_squared;  // b^2
    reg signed [15:0] four_ac;    // 4ac
    wire [7:0] sqrt_delta;        // Square root of delta (8-bit unsigned)
    reg signed [15:0] neg_b;      // -b
    reg signed [15:0] temp_x1, temp_x2; // Temporary roots (16-bit signed)
    reg signed [3:0] x1_temp, x2_temp;  // Temporary outputs for latch
    wire lock;                    // Lock signal

    // Biến tạm để xử lý dấu và giá trị
    reg signed [4:0] temp_a, temp_b, temp_c; // Giá trị tạm thời sau khi áp dụng dấu
    reg signed [3:0] a_clamped, b_clamped, c_clamped; // Giá trị sau khi giới hạn

    sqrt_module sqrt (
        .delta(delta),
        .sqrt_delta(sqrt_delta)
    );

    assign lock = o_result[0] | o_result[1];

    // Xử lý dấu và giá trị từ i_a, i_b, i_c
    always @(*) begin
        // Xử lý giá trị a
        if (i_a[4] == 1'b0) begin
            temp_a = $signed(i_a[3:0]); // Giá trị dương
        end else begin
            temp_a = -$signed(i_a[3:0]); // Giá trị âm
        end
        // Giới hạn giá trị a trong phạm vi 4-bit signed [-8, 7]
        if (temp_a > 7) a_clamped = 4'sd7;
        else if (temp_a < -8) a_clamped = -4'sd8;
        else a_clamped = temp_a[3:0];

        // Xử lý giá trị b
        if (i_b[4] == 1'b0) begin
            temp_b = $signed(i_b[3:0]); // Giá trị dương
        end else begin
            temp_b = -$signed(i_b[3:0]); // Giá trị âm
        end
        // Giới hạn giá trị b trong phạm vi 4-bit signed [-8, 7]
        if (temp_b > 7) b_clamped = 4'sd7;
        else if (temp_b < -8) b_clamped = -4'sd8;
        else b_clamped = temp_b[3:0];

        // Xử lý giá trị c
        if (i_c[4] == 1'b0) begin
            temp_c = $signed(i_c[3:0]); // Giá trị dương
        end else begin
            temp_c = -$signed(i_c[3:0]); // Giá trị âm
        end
        // Giới hạn giá trị c trong phạm vi 4-bit signed [-8, 7]
        if (temp_c > 7) c_clamped = 4'sd7;
        else if (temp_c < -8) c_clamped = -4'sd8;
        else c_clamped = temp_c[3:0];
    end

    always @(*) begin
        if (i_enable) begin
            o_result = 2'b00;
            x1_temp = 4'b0000;
            x2_temp = 4'b0000;
        end else begin
            // Tính delta = b^2 - 4ac
            b_squared = b_clamped * b_clamped;
            four_ac = (a_clamped * c_clamped) << 2; // 4 * a * c
            delta = b_squared - four_ac;

            if (a_clamped == 0) begin
                o_result = 2'b01; // No roots
                x1_temp = 4'b0000;
                x2_temp = 4'b0000;
            end else if (delta < 0) begin
                o_result = 2'b01; // No roots
                x1_temp = 4'b0000;
                x2_temp = 4'b0000;
            end else if (delta == 0) begin
                o_result = 2'b10; // Repeated root
                neg_b = -b_clamped;
                temp_x1 = neg_b / (2 * a_clamped);
                if (temp_x1 > 7) x1_temp = 4'sd7;
                else if (temp_x1 < -8) x1_temp = -4'sd8;
                else x1_temp = temp_x1[3:0];
                x2_temp = x1_temp;
            end else begin
                o_result = 2'b11; // Two roots
                neg_b = -b_clamped;
                temp_x1 = (neg_b + $signed({1'b0, sqrt_delta})) / (2 * a_clamped);
                temp_x2 = (neg_b - $signed({1'b0, sqrt_delta})) / (2 * a_clamped);
                
					 if (temp_x1 > 7) x1_temp = 4'sd7;
                else if (temp_x1 < -8) x1_temp = -4'sd8;
                else x1_temp = temp_x1[3:0];
                if (temp_x2 > 7) x2_temp = 4'sd7;
                else if (temp_x2 < -8) x2_temp = -4'sd8;
                else x2_temp = temp_x2[3:0];
            end
        end
    end

    latch_module latch (
        .lock(lock),
        .x1_in(x1_temp),
        .x2_in(x2_temp),
        .x1_out(x1_out),
        .x2_out(x2_out)
    );

    led_display display_x1 (
        .x1(x1_out),
        .x2(x1_out), // x2 not used
        .display_select(1'b0),
        .seg1(seg1_x1),
        .seg2(seg2_x1)
    );

    led_display display_x2 (
        .x1(x2_out),
        .x2(x2_out), // x1 not used
        .display_select(1'b0),
        .seg1(seg1_x2),
        .seg2(seg2_x2)
    );

endmodule