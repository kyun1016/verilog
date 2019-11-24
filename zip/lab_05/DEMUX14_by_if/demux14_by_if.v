`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:43:39 10/02/2019 
// Design Name: 
// Module Name:    demux14_by_if 
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
module demux14_by_if(F,S,Q);
input F;
input [1:0] S;
output reg [3:0] Q;

always @(*)
begin
	if(S == 2'b00) Q = F;
	else if(S == 2'b01) Q = F*2;
	else if(S == 2'b10) Q = F*4;
	else Q = F*8;
end

endmodule
