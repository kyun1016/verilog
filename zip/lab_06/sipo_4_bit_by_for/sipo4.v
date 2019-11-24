`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:57:40 10/12/2019 
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

integer i;

always @ (negedge reset or posedge clk) begin
	if(~reset)
		q <= 4'b0000;
	else begin
		for(i = 0; i<=2; i = i+1) begin
			q[i] <= q[i+1];
		end
		q[3] <= data_in;
	end
end

endmodule
