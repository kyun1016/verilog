`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:43:51 10/12/2019 
// Design Name: 
// Module Name:    prescaler 
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
module prescaler(clk,reset,next_clk);
input clk,reset;
output reg next_clk;

integer i;

always @(negedge reset, posedge clk) begin
	if(~reset) begin
		i = 0;
		next_clk = 0;
	end
	else begin
		i = i+1;
		if(i==5) begin
			i = 0;
			next_clk = next_clk+1;
		end
	end
end

endmodule
