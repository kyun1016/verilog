`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:30:49 10/12/2019 
// Design Name: 
// Module Name:    pt4 
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
module pt4(data_in, clk, a,b);
input [3:0] data_in;
input clk;
output reg [3:0] a,b;

always @ (posedge clk) begin
	a <= data_in;
	b <= a;
end

//always @ (posedge clk) begin
//	b = a;
//end

endmodule
