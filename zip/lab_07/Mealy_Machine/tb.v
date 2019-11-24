`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:17:35 10/17/2019
// Design Name:   mealy
// Module Name:   C:/Xilinx/zip/Mealy_Machine/tb.v
// Project Name:  Mealy_Machine
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mealy
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
	mealy uut (
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

