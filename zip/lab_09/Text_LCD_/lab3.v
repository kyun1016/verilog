module text_LCD(RESETN, CLK, LCD_E, LCD_RS, LCD_RW, LCD_DATA);
input RESETN, CLK; //clk 1kHz
output LCD_E;
output reg LCD_RS, LCD_RW;
output reg [7:0] LCD_DATA;

reg [2:0] STATE;    //LCD�� �����ϴ� state�� always������ ����ϱ� ���� reg����
parameter DELAY = 3'b000,
          FUNCTION_SET = 3'b001,
          ENTRY_MODE = 3'b010,
          DISP_ONOFF = 3'b011,
          LINE1 = 3'b100,
          LINE2 = 3'b101,
          DELAY_T = 3'b110,
          CLEAR_DISP = 3'b111;
          //������ ���µ��� parameter�� ����

integer CNT;				//�ð��� �������� ���� Ȱ���ϱ� ���� integer������ Ȱ��
integer CNT_100HZ;		//100Hz�� �ֱ⸦ ������ش�.
integer CNT_half_HZ;		//0.5�ʿ� ���� �����̵��� ���� ����
integer shift_bit = 0;	//shift�Ǵ� bit���� �����ϴ� ���� ����
integer CNT_shift;		//shift�Ǵ� ������ �����ϴ� ����

reg CLK_100HZ;
reg CLK_half_HZ;

always @ (negedge RESETN or posedge CLK)//clock�� �����Ͽ� 1KHz�� 100Hz�������
begin
   if(RESETN==0) begin
      CNT_100HZ= 0;
      CLK_100HZ= 0;
		CNT_half_HZ= 0;
      CLK_half_HZ= 0;
		CNT_shift = 0;
   end
   else begin
		if(CNT_100HZ>=5) begin 			//100Hz�� �ֱ⸦ ������־���.           
			CNT_100HZ= 0;
			CLK_100HZ= ~CLK_100HZ;	
		end
		else
			CNT_100HZ= CNT_100HZ+1;
			
		if(CNT_half_HZ >= 1000) begin		//0.5Hz�� �ֱ⸦ ������־���.
			CNT_half_HZ = 0;
			CLK_half_HZ = ~CLK_half_HZ;
		end
		else
			CNT_half_HZ = CNT_half_HZ + 1;
	
	end
end

//state ����
always @ (negedge RESETN or posedge CLK_100HZ)
begin
   if(RESETN==0) STATE=DELAY; //���½� �ʱ���´� delay
   else
   begin
      case(STATE)// ������ ���¿� ���� �Ʒ� always���� cnt���� ���� ���º�ȭ
          DELAY :        if(CNT == 70)  STATE = FUNCTION_SET; //������ ������ �ʱ���, bit���� ��, ��� ����
          FUNCTION_SET : if(CNT == 30)  STATE = DISP_ONOFF;   //ȭ�� on/off, Ŀ���� Ŀ�� ������ on/off
          DISP_ONOFF :   if(CNT == 30)  STATE = ENTRY_MODE;   //�б� ���� �������� Ŀ���� ��ġ, ȭ�� ��ȭ ����
          ENTRY_MODE :   if(CNT == 30)  STATE = LINE1;        //ù��° �� ���
          LINE1 :        if(CNT == 20)  STATE = LINE2;        //�ι�° �� ���
          LINE2 :        if(CNT == 20)  STATE = DELAY_T;      //lcd reset �ҿ�ð����� ���� ����
          DELAY_T :      if(CNT == 400) STATE = CLEAR_DISP;   //ȭ���� ����� Ŀ���� home���� �ű�
          CLEAR_DISP :   if(CNT == 200) STATE = LINE1;        //ȭ���� �ʱ�ȭ�ϰ� ���¸� ù��° ������ �ű�
          default : STATE= DELAY; //�⺻���´� delay
      endcase
   end
end

//state�� ���� CNT ����
always @ (negedge RESETN or posedge CLK_100HZ)
begin
   if(RESETN==0) CNT=0;
   else
   begin
      case(STATE)// ������ ���¿� ���� CNT�� ������ �����־���.
         DELAY:
            if(CNT>=70) CNT=0;
            else CNT=CNT+1;
         FUNCTION_SET:
            if(CNT>=30) CNT=0;
            else CNT=CNT+1;
           DISP_ONOFF:
            if(CNT>=30) CNT=0;
            else CNT=CNT+1;
         ENTRY_MODE:
            if(CNT>=30) CNT=0;
            else CNT=CNT+1;
         LINE1:
            if(CNT>=20) CNT=0;
            else CNT=CNT+1;
         LINE2:
            if(CNT>=20) CNT=0;
            else CNT=CNT+1;
         DELAY_T :
            if(CNT>=400) CNT=0;
             else CNT=CNT+1;
         CLEAR_DISP:
            if(CNT>=200) CNT=0;
             else CNT=CNT+1;
         default: CNT=0;
      endcase
   end
end

//0.5 Hz�� clk�� Ȱ���� bit_shift
//�̸� Ȱ���� ������ó�� ���ڰ� �����̵��� �ϵ��� ���ش�.
always @ (negedge RESETN or posedge CLK_haft_HZ)
begin
   if(RESETN==0)
		CNT_shift=0;
   else begin
      case(STATE)
         LINE1:
            if(CNT>=20) CNT_shift=0;
            else CNT_shift = CNT_shift + 1;
         LINE2:
            if(CNT>=20) CNT_shift=0;
            else CNT_shift = CNT_shift + 1;
         default: CNT_shift=0;
      endcase
		
		shift_bit = CNT_shift + CNT;
		if(shift_bit >= 20) shift_bit = shift_bit - 20;
		
   end
end

//�Ʒ����ʹ� �� state�� ���� ����� �����ϴ� �κ�
always @ (negedge RESETN or posedge CLK_100HZ)      
begin
   if(RESETN==0)//RESETN�� 0�϶� �Ʒ����� ����
   begin
      LCD_RS = 1'b1; //data register ����
      LCD_RW = 1'b1; //write ����
      LCD_DATA = 8'b00000000; //data 0���� ���
   end
   else
   begin
      case(STATE)//������ ���¿� ���� �Ʒ� ����
         FUNCTION_SET:
            begin
               LCD_RS = 1'b0; //instruction register ����
               LCD_RW = 1'b0; //read ����
               LCD_DATA = 8'b00111100; //[4]�� 8-bit bus�� Ȱ���Ѵٴ� �ǹ�
													//[3]�� 2-line display��带 �Ѵٴ� �ǹ�
													//[2]�� 5x11 dot format�� Ȱ���Ѵٴ� �ǹ�
            end
         DISP_ONOFF:
            begin
               LCD_RS = 1'b0; //instruction register ����
               LCD_RW = 1'b0; //read ����
               LCD_DATA = 8'b00001100; //ȭ�� on, Ŀ��off, ������ off
            end
         ENTRY_MODE:
            begin
               LCD_RS = 1'b0; //instruction register ����
               LCD_RW = 1'b0; //read ����
               LCD_DATA = 8'b00000110; //Ŀ�� �̵� ������, ȭ���̵� ����
													//�ǽ����� ȭ�� �̵��� �ִ� ��� ��� �Ǵ��� �׽�Ʈ�غ���.
            end
         LINE1:
            begin
               LCD_RW=1'b0;//read ����
					
               case(shift_bit) //cnt���� ����
                  0 :
                     begin
                        LCD_RS = 1'b0; //instruction register ����
                        LCD_DATA = 8'b10000000;		//ram�� write �ϴ� ��ġ�� A00���� ���������ش�.
                     end
                  1 :
                     begin
                        LCD_RS = 1'b1; //data register ����
                        LCD_DATA = 8'b00100000; //����
                     end
                  2:
                     begin
                        LCD_RS = 1'b1; 
                        LCD_DATA = 8'h32; //2
                     end
                  3 :
                     begin
                        LCD_RS = 1'b1; 
                        LCD_DATA = 8'h30; //0
                     end
                  4 :
                     begin
                        LCD_RS = 1'b1; 
                        LCD_DATA = 8'h31; //1
                     end
                  5 :
                      begin
                        LCD_RS = 1'b1;
                        LCD_DATA = 8'h36; //6
                     end
                  6 :
                     begin
                        LCD_RS = 1'b1; 
                        LCD_DATA = 8'h34; //4
                     end
                  7 :
                     begin
                        LCD_RS = 1'b1; 
                        LCD_DATA = 8'h34; //4
                     end
                  8 :
                     begin
                        LCD_RS = 1'b1; 
                        LCD_DATA = 8'h30; //0
                     end
                  9 :
                     begin
                        LCD_RS = 1'b1; 
                        LCD_DATA = 8'h30; //0
                     end
                  10 :
                     begin
                        LCD_RS = 1'b1; 
                        LCD_DATA = 8'h34; //4
                     end
                  11 :
                     begin
                        LCD_RS = 1'b1; 
                        LCD_DATA = 8'h37; //7
                     end
                  12 :
                     begin
                        LCD_RS = 1'b1; 
                        LCD_DATA = 8'b00100000; //����
                     end
                  13 :
                     begin
                        LCD_RS = 1'b1; 
                        LCD_DATA = 8'b00100000; //����
                     end
                  14 :
                     begin
                        LCD_RS = 1'b1; 
                        LCD_DATA = 8'b00100000; //����
                     end
                  15 :
                     begin
                        LCD_RS = 1'b1; 
                        LCD_DATA = 8'b00100000; //����
                     end
                  16 : 
                     begin
                         LCD_RS = 1'b1; 
                        LCD_DATA = 8'b00100000; //����
                     end
                  default :
                     begin
                        LCD_RS = 1'b1; 
                        LCD_DATA = 8'b00100000; //����
                     end
                  endcase
               end
            
            LINE2:
            begin
               LCD_RW=1'b0;//read ����
            
               case(shift_bit) //cnt���� ����
                  0 :
                     begin
                        LCD_RS = 1'b0; //instruction register ����
                        LCD_DATA = 8'b11000000;		//LCD_DATA[7]�� �ǹ̴� DDRAM address ������� �����͸� �о�� ���̰�
																	//LCD_DATA[6]�� �ּҸ� �ǹ��ϸ� 27H�� ��ġ�� �����͸� ���´ٴ� �ǹ��̴�.
                     end
                  1 :
                     begin
                        LCD_RS = 1'b1; //data register ����
                        LCD_DATA = 8'b00100000; //����
                     end
                  2:
                     begin
                        LCD_RS = 1'b1; 
                        LCD_DATA = 8'h50; //P
                     end
                  3 :
                     begin
                        LCD_RS = 1'b1; 
                        LCD_DATA = 8'h61; //a
                     end
                  4 :
                     begin
                        LCD_RS = 1'b1; 
                        LCD_DATA = 8'h72; //r
                     end
                  5 :
                      begin
                        LCD_RS = 1'b1;
                        LCD_DATA = 8'h6B; //k
                     end
                  6 :
                     begin
                        LCD_RS = 1'b1; 
                        LCD_DATA = 8'h20; // ����
                     end
                  7 :
                     begin
                        LCD_RS = 1'b1; 
                        LCD_DATA = 8'h53; //S
                     end
                  8 :
                     begin
                        LCD_RS = 1'b1; 
                        LCD_DATA = 8'h65; //e
                     end
                  9 :
                     begin
                        LCD_RS = 1'b1; 
                        LCD_DATA = 8'h75; //u
                     end
                  10 :
                     begin
                        LCD_RS = 1'b1; 
                        LCD_DATA = 8'h6E; //n
                     end
                  11 :
                     begin
                        LCD_RS = 1'b1; 
                        LCD_DATA = 8'h67; //g
                     end
                  12 :
                     begin
                        LCD_RS = 1'b1; 
                        LCD_DATA = 8'h2D; // - 
                     end
                  13 :
                     begin
                        LCD_RS = 1'b1; 
                        LCD_DATA = 8'h4B; //K
                     end
                  14 :
                     begin
                        LCD_RS = 1'b1; 
                        LCD_DATA = 8'h97; //y
                     end
                  15 :
                     begin
                        LCD_RS = 1'b1; 
                        LCD_DATA = 8'h75; //u
                     end
                  16 : 
                     begin
                         LCD_RS = 1'b1; 
                        LCD_DATA = 8'h6E; //n
                     end
                  default :
                     begin
                        LCD_RS = 1'b1; 
                        LCD_DATA = 8'b00100000; //����
                     end
                  endcase
               end
            
            DELAY_T :
               begin
                  LCD_RS = 1'b0; //instruction register ����
                  LCD_RW = 1'b0; //read ����
                  LCD_DATA = 8'b00000010; //���½� Ŀ���� �ֻ�� ��������
               end
            
            CLEAR_DISP :
               begin
                  LCD_RS = 1'b0; //instruction register ����
                  LCD_RW = 1'b0; //read ����
                  LCD_DATA = 8'b00000001; //���½� ȭ�� �ʱ�ȭ
               end
            
            default :
               begin
                   LCD_RS = 1'b1; //DATA register ����
                  LCD_RW = 1'b1; //write ����
                  LCD_DATA = 8'b00000000; //�⺻ �� �����ʹ� 0
               end
            endcase
         end
      end

assign LCD_E = CLK_100HZ;// LCD�� Ŭ�� �ΰ� (enable�� ���ֵ� clk����)
                              
endmodule