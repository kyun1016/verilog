`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:11:48 10/23/2019
// Design Name:   piezo
// Module Name:   D:/Xilinx/zip/lab_08/piezo_and_FND/tb.v
// Project Name:  piezo_and_FND
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: piezo
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
	reg [7:0] sw;

	// Outputs
	wire [7:0] FND_out;
	wire piezo_out;

	// Instantiate the Unit Under Test (UUT)
	piezo uut (
		.clk(clk), 
		.FND_out(FND_out), 
		.piezo_out(piezo_out), 
		.sw(sw)
	);

	initial begin
		clk = 0;
		sw = 0;
		#20 sw = 1;
	end
	
	always #1 clk=~clk;
	
	always #4000 sw=sw*2;
      
endmodule

