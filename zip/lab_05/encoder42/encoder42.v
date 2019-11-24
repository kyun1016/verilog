`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:50:27 10/02/2019 
// Design Name: 
// Module Name:    encoder42 
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
module encoder42(A,Y);
input [3:1] A;
output [1:0] Y;

or (Y[0], A[3], A[1]);
or (Y[1], A[2], A[3]);

endmodule
