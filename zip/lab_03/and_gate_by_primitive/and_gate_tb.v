`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   01:21:54 09/18/2019
// Design Name:   and_gate
// Module Name:   C:/Xilinx/zip/lab_03/and_gate_by_primitive/and_gate_tb.v
// Project Name:  and_gate_by_primitive
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: and_gate
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module and_gate_tb;

	// Inputs
	reg a;
	reg b;

	// Outputs
	wire x;

	// Instantiate the Unit Under Test (UUT)
	and_gate uut (
		.a(a), 
		.b(b), 
		.x(x)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;

		// Wait 100 ns for global reset to finish
		#100 a <= 1; b <= 0;
		#100 a <= 0; b <= 1;
		#100 a <= 1; b <= 1;
        
		// Add stimulus here

	end
      
endmodule

