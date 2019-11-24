`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:35:30 09/18/2019 
// Design Name: 
// Module Name:    full_adder 
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
module full_adder(
    input A,
    input B,
    input Cin,
    output Cout,
    output S
    );

wire s1,c1,c2;

xor (s1, A, B);
and (c1, A, B);
and (c2, s1, Cin);
xor (Cout, c1, c2);
xor (S, Cin, s1);

endmodule
