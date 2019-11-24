`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:00:33 10/06/2019
// Design Name:   incoder42
// Module Name:   D:/Xilinx/zip/lab_05/incoder42_by_karnaugh_map/encoder_tb.v
// Project Name:  incoder42_by_karnaugh_map
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: incoder42
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module encoder_tb;

	// Inputs
	reg [3:0] A;

	// Outputs
	wire [1:0] Y;

	// Instantiate the Unit Under Test (UUT)
	incoder42 uut (
		.A(A), 
		.Y(Y)
	);

	initial begin
		A = 0;
	end
	always begin
		# 50; A = A + 1;
   end;
endmodule

