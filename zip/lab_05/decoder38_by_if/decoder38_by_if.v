`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:20:39 10/02/2019 
// Design Name: 
// Module Name:    decoder38_by_if 
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
module decoder38_by_if(C,B,A,O);
input A;
input B;
input C;
output reg [7:0] O;

always @(*)
begin
	if({C,B,A} == 3'b000) O = 8'b00000001;
	if({C,B,A} == 3'b001) O = 8'b00000010;
	if({C,B,A} == 3'b010) O = 8'b00000100;
	if({C,B,A} == 3'b011) O = 8'b00001000;
	if({C,B,A} == 3'b100) O = 8'b00010000;
	if({C,B,A} == 3'b101) O = 8'b00100000;
	if({C,B,A} == 3'b110) O = 8'b01000000;
	if({C,B,A} == 3'b111) O = 8'b10000000;
	
	//else if¹®
//	if({C,B,A} == 3'b000) O = 8'b00000001;
//	else if({C,B,A} == 3'b001) O = 8'b00000010;
//	else if({C,B,A} == 3'b010) O = 8'b00000100;
//	else if({C,B,A} == 3'b011) O = 8'b00001000;
//	else if({C,B,A} == 3'b100) O = 8'b00010000;
//	else if({C,B,A} == 3'b101) O = 8'b00100000;
//	else if({C,B,A} == 3'b110) O = 8'b01000000;
//	else O = 8'b10000000;
end

endmodule
