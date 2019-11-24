`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:40:26 10/06/2019
// Design Name:   mux
// Module Name:   D:/Xilinx/zip/lab_05/mux_21_karnugh_map/mux_tb.v
// Project Name:  mux_21_karnugh_map
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mux
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module mux_tb;

	// Inputs
	reg [1:0] A;
	reg S;

	// Outputs
	wire Q;

	// Instantiate the Unit Under Test (UUT)
	mux uut (
		.A(A), 
		.S(S), 
		.Q(Q)
	);

	initial begin
		A = 0;
		S = 0;
		#200;
		S = 1;
	end
	
	always begin
		# 50; A = A + 1;
	end
	
	
      
endmodule

