`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:06:14 10/02/2019 
// Design Name: 
// Module Name:    decoder 
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
module decoder(A,B,C,O);
input A;
input B;
input C;
output reg [7:0] O;

always @(*)
begin
	case({C,B,A})
		3'b000 : O = 8'b00000001;
		3'b001 : O = 8'b00000010;
		3'b010 : O = 8'b00000100;
		3'b011 : O = 8'b00001000;
		3'b100 : O = 8'b00010000;
		3'b101 : O = 8'b00100000;
		3'b110 : O = 8'b01000000;
		default : O = 8'b10000000;
	endcase
end
endmodule
