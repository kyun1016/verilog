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
//num, state를 led로 표시하기 위해 output으로 선언하였다.
output reg [3:0] num;
output reg [2:0] state;

localparam STATE_0 = 3'd0,
			  STATE_1 = 3'd1,
			  STATE_2 = 3'd2,
			  STATE_3 = 3'd3,
			  STATE_4 = 3'd4;
			  
reg [2:0] next_state;
reg check_num_change;

//다음상태를 결정하는 조합회로 블록
always @(*) begin
	next_state = state;
	//숫자의 입력이 없다면(0/0,1/1) state의 변동이 없다.
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


//현재상태를 저장하는 순차회로 블록
always @ (posedge clk) begin
	state <= next_state;
end

//데이터에 buffer를 주기 위해서 변수를 선언한다.
reg delay_A,delay_B,data_A,data_B;
//num 입력을 negedge clk에 맞춰 받아들인다.
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

//출력값을 결정하는 조합회로 블록
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