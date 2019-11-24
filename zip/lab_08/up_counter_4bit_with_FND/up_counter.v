`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:54:17 10/23/2019 
// Design Name: 
// Module Name:    up_counter 
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
`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:26:50 10/23/2019 
// Design Name: 
// Module Name:    a 
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
module up_counter(clk, reset,out);
input clk,reset;
output reg [7:0] out;

reg [3:0] num;

always @ (posedge clk or negedge reset) begin
	if(~reset) begin
		num <= 0;
		out <= 8'b11111100;
	end
	else begin
		num <= num+1;
		case(num)
			4'b0000 : out <= 8'b11111100;	//0
			4'b0001 : out <= 8'b01100000;	//1
			4'b0010 : out <= 8'b11011010;	//2
			4'b0011 : out <= 8'b11110010;	//3
			4'b0100 : out <= 8'b01100110;	//4
			4'b0101 : out <= 8'b10110110;	//5
			4'b0110 : out <= 8'b10111110;	//6
			4'b0111 : out <= 8'b11100000;	//7
			4'b1000 : out <= 8'b11111110;	//8
			4'b1001 : out <= 8'b11110110;	//9
			4'b1010 : out <= 8'b11101110;	//10(A)
			4'b1011 : out <= 8'b00111110;	//11(b)
			4'b1100 : out <= 8'b00011010;	//12(c)
			4'b1101 : out <= 8'b01111010;	//13(d)
			4'b1110 : out <= 8'b10011110;	//14(E)
			4'b1111 : out <= 8'b10001110;	//15(F)
			default : out <= 8'b00000000;	//NULL
		endcase
	end
end
endmodule
