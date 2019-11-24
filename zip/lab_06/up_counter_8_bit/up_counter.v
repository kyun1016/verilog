`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:01:40 10/12/2019 
// Design Name: 
// Module Name:    up_counter 
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
module up_counter(clk,reset,cnt);
input clk, reset;
output reg [7:0] cnt;

always @ (posedge clk or negedge reset) begin
	if(!reset) cnt <= 0;
	else cnt <= cnt + 1;
end


endmodule
