`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:03:43 09/25/2019
// Design Name:   full_adder
// Module Name:   D:/Xilinx/zip/lab_04/one_bit_fulladder_behavioral_level_modeling/full_tb.v
// Project Name:  one_bit_fulladder_behavioral_level_modeling
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: full_adder
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module full_tb;

	// Inputs
	reg A;
	reg B;
	reg Cin;

	// Outputs
	wire Cout;
	wire S;

	// Instantiate the Unit Under Test (UUT)
	full_adder uut (
		.A(A), 
		.B(B), 
		.Cin(Cin), 
		.Cout(Cout), 
		.S(S)
	);

	initial begin
		// Initialize Inputs
		A = 0;
		B = 0;
		Cin = 0;

		// Wait 100 ns for global reset to finish
		#100 A <= 1 ; B <= 0;
		#100 A <= 0 ; B <= 1;
		#100 A <= 1 ; B <= 1;
		#100 A <= 0 ; B <= 0; Cin <= 1;
		#100 A <= 1 ; B <= 0;
		#100 A <= 0 ; B <= 1;
		#100 A <= 1 ; B <= 1;
        
		// Add stimulus here

	end
      
endmodule

