`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:08:03 10/17/2019 
// Design Name: 
// Module Name:    mealy 
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
module mealy(in,out,reset,clk,state_out);
input in, reset, clk;
output reg out;
output reg [3:0] state_out;

localparam STATE_0 = 2'd0,
           STATE_1 = 2'd1,
			  STATE_2 = 2'd2,
			  STATE_3 = 2'd3;
			  
reg [1:0] state;
reg [1:0] next_state;

always @(*) begin
	next_state = state;
	case (state)
		STATE_0 : begin
			if(in == 0) next_state = STATE_1;
			out = 0;
		end
		STATE_1 : begin
			if(in == 1) next_state = STATE_2;
			out = 0;
		end
		STATE_2 : begin
			if(in == 0) next_state = STATE_3;
			else next_state = STATE_0;
			out = 0;
		end
		STATE_3 : begin
			if(in == 0) next_state = STATE_1;
			else next_state = STATE_2;
			
			if(in == 1) out = 1;
			else out = 0;
		end
		default : begin
			next_state = STATE_0;
			out = 0;
		end
	endcase
end

always @(posedge clk, negedge reset) begin
	if(~reset) state <= STATE_0;
	else state <= next_state;
end

always @(*) begin
	state_out = 4'b0000;
	case (state)
		STATE_0 : begin
			state_out[0] = 1'b1;
		end
		STATE_1 : begin
			state_out[1] = 1'b1;
		end
		STATE_2 : begin
			state_out[2] = 1'b1;
		end
		STATE_3 : begin
			state_out[3] = 1'b1;
		end
		default : state_out[3] = 1'b0;
	endcase
	
end



endmodule
