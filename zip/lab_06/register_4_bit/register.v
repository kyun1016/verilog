`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:28:03 10/12/2019 
// Design Name: 
// Module Name:    register_dff 
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
module register_dff(clk,D,Q);
input clk;
input [3:0] D;
output reg [3:0] Q;

always @ (posedge clk) begin
	Q = D;
end

endmodule
