`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:40:31 10/23/2019 
// Design Name: 
// Module Name:    FND_array 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module FND_decoder(num, out);
input [3:0] num;
output reg [7:0] out;

localparam NUM_1 = 8'b01100000,	//1
			  NUM_2 = 8'b11011010,	//2
			  NUM_3 = 8'b11110010,	//3
			  NUM_4 = 8'b01100110,	//4
			  NUM_5 = 8'b10110110,	//5
			  NUM_6 = 8'b10111110,	//6
			  NUM_7 = 8'b11100000,	//7
			  NUM_8 = 8'b11111110,	//8
			  NUM_9 = 8'b11110110,	//9
			  NUM_0 = 8'b11111100,	//0
			  NUM_NULL = 8'b00000000;	//NULL

always @ (*) begin
	case(num)
		4'b0000 : out <= NUM_0;	//0
		4'b0001 : out <= NUM_1;	//1
		4'b0010 : out <= NUM_2;	//2
		4'b0011 : out <= NUM_3;	//3
		4'b0100 : out <= NUM_4;	//4
		4'b0101 : out <= NUM_5;	//5
		4'b0110 : out <= NUM_6;	//6
		4'b0111 : out <= NUM_7;	//7
		4'b1000 : out <= NUM_8;	//8
		4'b1001 : out <= NUM_9;	//9
		default : out <= NUM_NULL;	//NULL
	endcase
end
endmodule

module FND_array(clk, reset, FND_out, FND_selector);
input clk, reset;
output reg [7:0] FND_out;
output reg [3:0] FND_selector;

reg sign = 1'b1;				//0: 양수, 1: 음수
reg [3:0] hundreds = 4'd1;	//백의 자리 bcd
reg [3:0] tens = 4'd3;		//백의 자리 bcd
reg [3:0] ones = 4'd7;		//백의 자리 bcd

wire [7:0] FND_hundreds;
wire [7:0] FND_tens;
wire [7:0] FND_ones;

FND_decoder temp1 (.num(hundreds), .out(FND_hundreds));
FND_decoder temp2 (.num(tens), .out(FND_tens));
FND_decoder temp3 (.num(ones), .out(FND_ones));

integer i=0;

always @ (posedge clk or negedge reset) begin
	if(~reset) begin
		i=0;
	end
	else begin
		i=i+1;
		if(i >= 4) i=0;
		case(i)
			0 : begin
				FND_selector = 4'b0111;
				if(sign) FND_out = 8'b00000010;
				else FND_out = 8'b11111100;
			end
			1 : begin
				FND_selector = 4'b1011;
				FND_out = FND_hundreds;
			end
			2 : begin
				FND_selector = 4'b1101;
				FND_out = FND_tens;
			end
			3 : begin
				FND_selector = 4'b1110;
				FND_out = FND_ones;
			end
		endcase
	end
end

endmodule
