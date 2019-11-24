`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:52:48 10/23/2019
// Design Name:   FND_array
// Module Name:   D:/Xilinx/zip/lab_08/FND_array_4_bit/tb.v
// Project Name:  FND_array_4_bit
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: FND_array
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
	wire [7:0] FND_out;
	wire [3:0] FND_selector;

	// Instantiate the Unit Under Test (UUT)
	FND_array uut (
		.clk(clk), 
		.reset(reset), 
		.FND_out(FND_out), 
		.FND_selector(FND_selector)
	);

	initial begin
		clk = 0;
		reset = 0;
		#20 reset = 1;
	end
	
	always #1 clk=~clk;
      
endmodule

