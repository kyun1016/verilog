`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:59:27 10/17/2019
// Design Name:   moore
// Module Name:   C:/Xilinx/zip/Moore_machine/tb.v
// Project Name:  Moore_machine
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: moore
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
	reg in;
	reg reset;
	reg clk;

	// Outputs
	wire out;
	wire [3:0] state_out;

	// Instantiate the Unit Under Test (UUT)
	moore uut (
		.in(in), 
		.out(out), 
		.reset(reset), 
		.clk(clk), 
		.state_out(state_out)
	);

	initial begin
		in = 0;
		reset = 1;
		clk = 0;
		
		#10; reset = 0;
		#100; reset = 1;
	end
   
	always begin
		#20 clk = ~clk;
	end
	
	always begin
		#30 in = ~in;
	end
		
endmodule

