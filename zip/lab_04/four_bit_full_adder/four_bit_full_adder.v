`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:24:02 09/25/2019 
// Design Name: 
// Module Name:    four_bit_full_adder 
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
module four_bit_full_adder(A,B,S,C);
    input [3:0] A,B;
    output [3:0] S;
    output C;
	 
//	 reg [3:0] S;
//	 reg C;
//	 
//	 always @(*)
//	 begin
//		S = A + B;
//		if(A + B > 5'b01111)
//			C = 1'b1;
//		else
//			C = 1'b0;
//	 end
	
	assign {C,S} = A + B;
endmodule
