`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:28:41 10/02/2019 
// Design Name: 
// Module Name:    mux_21_by_case 
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
module mux_21_by_case(A,S,Q);
input [1:0] A;
input S;
output reg Q;

always @(*)
begin
	case(S)
		1'b0 : Q = A[0];
		1'b1 : Q = A[1];
	endcase
end

endmodule
