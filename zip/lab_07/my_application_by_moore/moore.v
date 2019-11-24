`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:19:17 10/17/2019 
// Design Name: 
// Module Name:    moore 
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
module moore(clk,A,B,out,num);
input clk,A,B;
output reg out;
//���� ���ڸ� led�� ǥ���ϱ� ���� output���� �����Ͽ���.
output reg [3:0] num;

localparam STATE_0 = 1'd0,
			  STATE_1 = 1'd1;		  

//can_push�� ���� ���� �Է��� �������� üũ�ϴ� �����̴�.
reg can_push;


always @(posedge clk) begin
	if(can_push) begin
		//�� ���� ��ư �� �ϳ��� ���� ��� ���ڸ� �־�����.
		if(A^B) begin
			if(A) begin
				num[2:0] <= num[3:1];
				num[3] <= 1;
				//���� ���� �Է��� �Ұ���������.
				can_push = 1'b0;
			end
			else begin
				num[2:0] <= num[3:1];
				num[3] <= 0;
				can_push = 1'b0;
			end
		end
	end
	//�� ��ư�� �Է��� ���� ��� ���� �Է��� �����ϰ� �ٲپ��ش�.
	if(A == 0 && B == 0)
		can_push = 1'b1;
	
	//����Ǿ��ִ� ���ڰ� 1011�� ��� state�� �����Ѵ�.
	if(num == 4'b1011)
		out = STATE_1;
	else
		out = STATE_0;
end



endmodule
