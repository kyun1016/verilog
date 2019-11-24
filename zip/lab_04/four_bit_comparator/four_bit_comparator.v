`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:39:52 09/27/2019 
// Design Name: 
// Module Name:    four_bit_comparator 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module four_bit_comparator(A,B,AGB, EQ, ALB);
    input signed [3:0] A;
    input signed [3:0] B;
    output AGB, EQ, ALB;
	 
	 assign AGB = A > B;
	 assign EQ = A == B;
	 assign ALB = A < B;
	 
	 
//	 always @(*)
//	 begin
//		if(A == B)
//		begin
//			AGB = 0;
//			EQ = 1;
//			ALB = 0;
//		end
//		//A의 부호가 음수인 경우
//		else if(A[3] == 1 && B[3] == 0)
//		begin
//			AGB = 0;
//			EQ = 0;
//			ALB = 1;
//		end
//		//B의 부호가 음수인 경우
//		else if(A[3] == 0 && B[3] == 1)
//		begin
//			AGB = 1;
//			EQ = 0;
//			ALB = 0;
//		end
//		//A > B 인 경우
//		else if(A > B)
//		begin
//			AGB = 1;
//			EQ = 0;
//			ALB = 0;
//		end
//		else
//		begin
//			AGB = 0;
//			EQ = 0;
//			ALB = 1;
//		end
//	 end
	 
endmodule
