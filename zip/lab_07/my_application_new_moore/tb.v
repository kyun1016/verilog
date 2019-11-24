`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:31:32 10/22/2019
// Design Name:   my_applicaton
// Module Name:   C:/Xilinx/zip/lab_07/my_application_new_moore/tb.v
// Project Name:  my_application_new_moore
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: my_applicaton
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
	reg clk;
	reg A;
	reg B;

	// Outputs
	wire out;
	wire [3:0] num;

	// Instantiate the Unit Under Test (UUT)
	my_applicaton uut (
		.clk(clk), 
		.A(A), 
		.B(B), 
		.out(out), 
		.num(num)
	);

	initial begin
		clk = 0;
		A = 0;
		B = 0;
	end
	
	always #1 clk = ~clk;
	
	always #50 A = ~A;
	
	always #180 B = ~B;
      
endmodule

