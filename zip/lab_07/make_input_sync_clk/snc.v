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

//output의 출력이 가능한 조건이 된 경우를 저장한다.
reg can_sync;

always @ (negedge clk) begin
	if(can_sync) begin
		//출력이 가능하며, in입력이 존재하므로 1을 출력한다.
		if(in) begin
			input_sync = 1'b1;
			//입력이 사라질 때 까지 출력을 막아놓도록 하자.
			can_sync = 1'b0;
		end
		else
			input_sync = 1'b0;
	end
	//현재 출력이 불가능한 상태이므로 0을 저장.
	else
		input_sync = 1'b0;
	//input이 flush되었으므로 can_sync를 1로 변경한다.
	if(!in)
		can_sync = 1'b1;
end

endmodule
