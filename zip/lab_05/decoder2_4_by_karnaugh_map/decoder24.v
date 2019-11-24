`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:34:58 10/06/2019 
// Design Name: 
// Module Name:    decoder24 
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
module decoder24(A,Y);
input [1:0] A;
output reg [3:0] Y;

always @(*)
begin
	case (A)
		2'b00 : Y = 4'b0001;
		2'b01 : Y = 4'b0010;
		2'b10 : Y = 4'b0100;
		2'b11 : Y = 4'b1000;
	endcase
end

endmodule
