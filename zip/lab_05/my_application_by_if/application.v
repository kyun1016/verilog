`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:53:37 10/03/2019 
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
output reg F;

always @(*) begin
	if(A == 4'b0111) F = 1;
	else if(A == 4'b1011) F = 1;
	else if(A == 4'b1101) F = 1;
	else if(A == 4'b1110) F = 1;
	else F = 0;
end

endmodule
