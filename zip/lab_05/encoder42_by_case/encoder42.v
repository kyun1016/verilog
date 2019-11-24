`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:08:27 10/02/2019 
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
input [3:0] A;
output reg [1:0] Y;


always @(*)
begin
	case (A)
		4'b0010 : Y = 2'b01;
		4'b0100 : Y = 2'b10;
		4'b1000 : Y = 2'b11;
		default : Y = 0;
	endcase
end

endmodule
