`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:08:58 10/03/2019
// Design Name:   application
// Module Name:   D:/Xilinx/zip/lab_05/my_application_by_assign/tb.v
// Project Name:  my_application_by_assign
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: application
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb;

	// Inputs
	reg [3:0] A;

	// Outputs
	wire F;

	// Instantiate the Unit Under Test (UUT)
	application uut (
		.A(A), 
		.F(F)
	);

	initial begin
		A = 0;
	end
	always begin
		A = A+1; #50;
	end
      
endmodule

