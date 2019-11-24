`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:51:29 10/17/2019 
// Design Name: 
// Module Name:    sync 
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
module sync(clk, in, input_sync);
input clk, in;
output reg input_sync;

reg can_sync;
integer i=0;
integer count = 0;

always @(*) begin
	if(can_sync) begin
		if(in) begin
			i <= i+1;
			can_sync = 0;
		end
	end
	if(!in) can_sync = 1;
end

always @ (negedge clk) begin
	if(count < i && !input_sync) begin
		count <= count + 1;
		input_sync = 1;
	end
	else input_sync = 0;
end

endmodule
