`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:48:44 10/12/2019 
// Design Name: 
// Module Name:    my_application 
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
module my_application(clk,reset,q);
input clk, reset;
output reg [0:4] q;

always @(negedge reset or posedge clk) begin
	if(~reset)
		q <= 5'b10111;
	else begin
		q[4] <= q[3];
		q[3] <= q[2];
		q[2] <= q[1];
		q[1] <= q[0];
		q[0] <= q[1]^q[4];
	end
end

endmodule
