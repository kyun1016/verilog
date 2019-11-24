`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:31:06 10/21/2019 
// Design Name: 
// Module Name:    input_sync 
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
module input_sync(clk,sw,in_syn);
input clk,sw;
output reg in_syn;

reg delay;

always @(negedge clk) begin
	delay <= sw;
	in_syn <= sw&~delay;
end

endmodule
