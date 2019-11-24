`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:07:41 10/23/2019
// Design Name:   up_counter
// Module Name:   D:/Xilinx/zip/lab_08/up_counter_4bit_with_FND/tb.v
// Project Name:  up_counter_4bit_with_FND
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: up_counter
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
	reg reset;

	// Outputs
	wire [7:0] out;
//	wire [3:0] num;

	// Instantiate the Unit Under Test (UUT)
	up_counter uut (
		.clk(clk), 
		.reset(reset), 
		.out(out),
		.num(num)
	);

	initial begin
		clk = 0;
		reset = 0;
		# 20 reset = 1;
	end
	
	always #50 clk=~clk;
      
endmodule

