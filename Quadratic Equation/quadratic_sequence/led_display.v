module led_display (
    input wire signed [3:0] x1,   // Value x1 (4-bit signed)
    input wire signed [3:0] x2,   // Value x2 (4-bit signed)
    input wire display_select,    // Select x1 (0) or x2 (1)
    output reg [6:0] seg1,        // LED 1: Sign (- if negative, 0 if positive)
    output reg [6:0] seg2         // LED 2: Numeric value (0-15)
);

    reg signed [3:0] value;      // Current value to display
    reg [3:0] abs_value;         // Absolute value

    // Select value to display
    always @(*) begin
        value = (display_select == 0) ? x1 : x2;
        abs_value = (value < 0) ? -value : value;
    end

    // Display sign or 0 on LED 1
    always @(*) begin
        if (value < 0)
            seg1 = 7'b0111111; // Display "-"
        else
            seg1 = 7'b1000000; // Display "0"
    end

    // Display value on LED 2 (0-15, gfedcba order)
    always @(*) begin
        case (abs_value)
            4'd0: seg2 = 7'b1000000; // 0
            4'd1: seg2 = 7'b1111001; // 1
            4'd2: seg2 = 7'b0100100; // 2
            4'd3: seg2 = 7'b0110000; // 3
            4'd4: seg2 = 7'b0011001; // 4
            4'd5: seg2 = 7'b0010010; // 5
            4'd6: seg2 = 7'b0000010; // 6
            4'd7: seg2 = 7'b1111000; // 7
            4'd8: seg2 = 7'b0000000; // 8
            4'd9: seg2 = 7'b0010000; // 9
            4'd10: seg2 = 7'b0001000; // A (10)
            4'd11: seg2 = 7'b0000011; // B (11)
            4'd12: seg2 = 7'b1000110; // C (12)
            4'd13: seg2 = 7'b0100001; // D (13)
            4'd14: seg2 = 7'b0000110; // E (14)
            4'd15: seg2 = 7'b0001110; // F (15)
            default: seg2 = 7'b1111111; // All segments off
        endcase
    end

endmodule
