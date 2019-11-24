`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:46:04 10/02/2019
// Design Name:   demux14_by_if
// Module Name:   D:/Xilinx/zip/lab_05/DEMUX14_by_if/demux_tb.v
// Project Name:  DEMUX14_by_if
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: demux14_by_if
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module demux_tb;

	// Inputs
	reg F;
	reg [1:0] S;

	// Outputs
	wire [3:0] Q;

	// Instantiate the Unit Under Test (UUT)
	demux14_by_if uut (
		.F(F), 
		.S(S), 
		.Q(Q)
	);

	initial begin
		F = 0;
		#200 F = 1;
	end
	
	always begin
		S[1] = 0; #100;
		S[1] = 1; #100;
	end
	always begin
		S[0] = 0; #50;
		S[0] = 1; #50;
	end
      
endmodule

