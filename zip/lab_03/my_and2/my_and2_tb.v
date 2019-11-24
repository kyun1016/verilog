`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   01:16:44 09/18/2019
// Design Name:   my_and2
// Module Name:   C:/Xilinx/zip/lab_03/my_and2/my_and2_tb.v
// Project Name:  my_and2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: my_and2
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module my_and2_tb;

	// Inputs
	reg a;
	reg b;

	// Outputs
	wire x;
	
	integer i;

	// Instantiate the Unit Under Test (UUT)
	my_and2 uut (
		.a(a), 
		.b(b), 
		.x(x)
	);

	initial begin
		// Initialize Inputs
		a = 1;	b = 0;
		for(i=0;i<600;i=i+1)
		begin
			#20 b <= i % 2;
		end
        
		// Add stimulus here

	end
      
endmodule

