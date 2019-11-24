`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:06:05 10/12/2019 
// Design Name: 
// Module Name:    counter 
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
module counter(clk,q,en,mode,data,load,reset);
input clk,en,mode,load,reset;
input [3:0] data;
output reg [3:0] q;

always @(negedge reset or posedge clk) begin
	if(~reset)
		q <= 4'b0000;
	else begin
		if(load) begin
			q <= data;
		end
		else if(en) begin
			if(mode)
				q <= q + 1;
			else
				q <= q - 1;
		end
	end
end


endmodule
