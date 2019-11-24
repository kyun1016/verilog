`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:03:10 10/03/2019 
// Design Name: 
// Module Name:    application 
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
module application(A,F);
input [3:0] A;
output F;


assign F = (A[3]&A[2]&~A[1]&A[0])		//4'b1101
				||(A[3]&~A[2]&A[1]&A[0])	//4'b1011
				||(~A[3]&A[2]&A[1]&A[0])	//4'b0111
				||(A[3]&A[2]&A[1]&~A[0]);	//4'b1110
//assign F = (A[3]+A[2]+A[1]+A[0] == 3);

endmodule
