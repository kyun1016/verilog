`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:56:47 10/06/2019 
// Design Name: 
// Module Name:    incoder42 
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
module incoder42(A,Y);

input [3:0] A;
output [1:0] Y;

assign Y[0] = A[3]|A[1];
assign Y[1] = A[3]|A[2];

endmodule
