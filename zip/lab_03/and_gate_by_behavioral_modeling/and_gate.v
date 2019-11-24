`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:43:32 09/18/2019 
// Design Name: 
// Module Name:    and_gate 
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
module and_gate(A,B,X);
input A,B;
output X;
reg X;

always @(A,B)
begin
	if(A==1 && B == 1)
		X = 1'b1;
	else
		X = 1'b0;
end

endmodule
