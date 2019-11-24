`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:21:13 10/18/2019
// Design Name:   my_applicaton
// Module Name:   C:/Xilinx/zip/lab_07/my_application_by_FSM_Moore/tb.v
// Project Name:  my_application_by_FSM_Moore
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
	
	always begin
		#1 clk = ~clk;
	end
	
	always begin
		#50 A = ~A;
	end
	
	always begin
		#80 B = ~B;
	end
      
endmodule

