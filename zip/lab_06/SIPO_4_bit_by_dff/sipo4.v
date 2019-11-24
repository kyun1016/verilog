`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:08:21 10/12/2019 
// Design Name: 
// Module Name:    sipo4 
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
module sipo4(clk,reset,data_in,q);
input clk, reset, data_in;
output reg [3:0] q;

always @ (negedge reset or posedge clk) begin
	if(~reset)
		q <= 4'b0000;
	else begin
		q[2:0] <= q[3:1];
		q[3] <= data_in;
	end
end

endmodule
