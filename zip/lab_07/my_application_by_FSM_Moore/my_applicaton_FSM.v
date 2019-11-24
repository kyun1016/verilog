`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:40:43 10/18/2019 
// Design Name: 
// Module Name:    my_applicaton_FSM 
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
module my_applicaton(clk,A,B,out,num,state);
input clk,A,B;
output reg out;
//num, state�� led�� ǥ���ϱ� ���� output���� �����Ͽ���.
output reg [3:0] num;
output reg [2:0] state;

localparam STATE_0 = 3'd0,
			  STATE_1 = 3'd1,
			  STATE_2 = 3'd2,
			  STATE_3 = 3'd3,
			  STATE_4 = 3'd4;
			  
reg [2:0] next_state;
reg check_num_change;

//�������¸� �����ϴ� ����ȸ�� ���
always @(*) begin
	next_state = state;
	//������ �Է��� ���ٸ�(0/0,1/1) state�� ������ ����.
	if(check_num_change) begin
		case (state)
			STATE_0 : begin
				if(num[0] == 1) next_state = STATE_1;
			end
			STATE_1 : begin
				if(num[0] == 0) next_state = STATE_2;
			end
			STATE_2 : begin
				if(num[0] == 1) next_state = STATE_3;
				else next_state = STATE_0;
			end
			STATE_3 : begin
				if(num[0] == 1) next_state = STATE_4;
				else next_state = STATE_2;
			end
			STATE_4 : begin
				if(num[0] == 0) next_state = STATE_2;
				else next_state = STATE_1;
			end
			default : next_state = STATE_0;
		endcase
	end
end


//������¸� �����ϴ� ����ȸ�� ���
always @ (posedge clk) begin
	state <= next_state;
end

//�����Ϳ� buffer�� �ֱ� ���ؼ� ������ �����Ѵ�.
reg delay_A,delay_B,data_A,data_B;
//num �Է��� negedge clk�� ���� �޾Ƶ��δ�.
always @ (negedge clk) begin
	delay_A <= ~A; data_A <= A&delay_A;
	delay_B <= ~B; data_B <= B&delay_B;
	check_num_change = 1'b0;
	if(data_A^data_B) begin
		if(data_A) num <= {num[2:0] , 1'b1};
		else num <= {num[2:0] , 1'b0};
		check_num_change = 1'b1;
	end
end

//��°��� �����ϴ� ����ȸ�� ���
always @(*) begin
	case (state)
		STATE_0 : begin
			out = 0;
		end
		STATE_1 : begin
			out = 0;
		end
		STATE_2 : begin
			out = 0;
		end
		STATE_3 : begin
			out = 0;
		end
		STATE_4 : begin
			out = 1;
		end
		default : out = 0;
	endcase
end

endmodule