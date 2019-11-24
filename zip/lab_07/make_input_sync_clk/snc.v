`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:51:29 10/17/2019 
// Design Name: 
// Module Name:    sync 
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
module sync(clk, in, input_sync);
input clk, in;
output reg input_sync;

//output�� ����� ������ ������ �� ��츦 �����Ѵ�.
reg can_sync;

always @ (negedge clk) begin
	if(can_sync) begin
		//����� �����ϸ�, in�Է��� �����ϹǷ� 1�� ����Ѵ�.
		if(in) begin
			input_sync = 1'b1;
			//�Է��� ����� �� ���� ����� ���Ƴ����� ����.
			can_sync = 1'b0;
		end
		else
			input_sync = 1'b0;
	end
	//���� ����� �Ұ����� �����̹Ƿ� 0�� ����.
	else
		input_sync = 1'b0;
	//input�� flush�Ǿ����Ƿ� can_sync�� 1�� �����Ѵ�.
	if(!in)
		can_sync = 1'b1;
end

endmodule
