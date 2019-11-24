`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:26:26 10/18/2019
// Design Name:   check_sync
// Module Name:   C:/Xilinx/zip/lab_07/Moore_machine_by_FSM/tb.v
// Project Name:  Moore_machine_by_FSM
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: check_sync
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
	reg Input;
	reg clk;

	// Outputs
	wire input_sync;

	// Instantiate the Unit Under Test (UUT)
	check_sync uut (
		.Input(Input), 
		.clk(clk), 
		.input_sync(input_sync)
	);

	initial begin
		Input = 0;
		clk = 0;
	end
	
	always begin
		#30 clk = ~clk;
	end
	
	always begin
		#50 Input = ~Input;
	end
      
endmodule

