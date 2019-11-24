`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:01:32 10/23/2019 
// Design Name: 
// Module Name:    binarry 
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
module FND_decoder(num, out);
input [3:0] num;
output reg [7:0] out;

always @ (*) begin
	case(num)
		4'b0000 : out <= 8'b11111100;	//0
		4'b0001 : out <= 8'b01100000;	//1
		4'b0010 : out <= 8'b11011010;	//2
		4'b0011 : out <= 8'b11110010;	//3
		4'b0100 : out <= 8'b01100110;	//4
		4'b0101 : out <= 8'b10110110;	//5
		4'b0110 : out <= 8'b10111110;	//6
		4'b0111 : out <= 8'b11100000;	//7
		4'b1000 : out <= 8'b11111110;	//8
		4'b1001 : out <= 8'b11110110;	//9
		default : out <= 8'b00000000;	//NULL
	endcase
end
endmodule

module FND_array(clk, reset, FND_out, FND_selector, binary);
input clk, reset;
input signed [7:0] binary;
output reg [7:0] FND_out;
output reg [3:0] FND_selector;

reg sign;				//0: 양수, 1: 음수
reg [7:0] num;
reg [3:0] hundreds;	//백의 자리 bcd
reg [3:0] tens;		//십의 자리 bcd
reg [3:0] ones;		//일의 자리 bcd

wire [7:0] FND_hundreds;
wire [7:0] FND_tens;
wire [7:0] FND_ones;

FND_decoder temp1 (.num(hundreds), .out(FND_hundreds));
FND_decoder temp2 (.num(tens), .out(FND_tens));
FND_decoder temp3 (.num(ones), .out(FND_ones));

integer i=0;

always @ (posedge clk or negedge reset) begin
	if(~reset) begin
		i=0;
	end
	else begin
		i=i+1;
		sign = binary[7];				//0: 양수, 1: 음수
		num = binary;
		if(sign) begin
			num = ~binary[6:0];
			num = num + 1;
		end
		
		if(num >= 100) begin
			hundreds = 1'b1;
			num = num - 100;
		end
		else
			hundreds = 0;
			
		tens = 0;
		while(num >= 10) begin
			tens = tens +1;
			num = num - 10;
		end
		
		ones = num;
		
		if(i >= 4) i=0;
		case(i)
			0 : begin
				FND_selector = 4'b0111;
				if(sign) FND_out = 8'b00000010;
				else FND_out = 8'b11111100;
			end
			1 : begin
				FND_selector = 4'b1011;
				FND_out = FND_hundreds;
			end
			2 : begin
				FND_selector = 4'b1101;
				FND_out = FND_tens;
			end
			3 : begin
				FND_selector = 4'b1110;
				FND_out = FND_ones;
			end
		endcase
	end
end

endmodule
