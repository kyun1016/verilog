`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:59:06 09/18/2019 
// Design Name: 
// Module Name:    xor_gate 
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
module xor_gate(A,B,Y);
    input [3:0] A;
    input [3:0] B;
    output [3:0] Y;

//��Ʈ���� ������
//assign Y = A ^ B;

////����Ʈ ������Ƽ��
//
//xor gate[3:0](Y,A,B);
//
//Behavioral �𵨸�
integer i;
reg [3:0]Y;
always @ (A,B)
begin
	for(i=0;i<4;i=i+1)
	begin
		if((A[i] == 1 && B[i] == 0) || (A[i]==0 && B[i]==1))
			Y[i] <= 1'b1;
		else
			Y[i] <= 1'b0;
	end

end

endmodule
