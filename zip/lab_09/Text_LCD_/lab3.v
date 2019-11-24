module text_LCD(RESETN, CLK, LCD_E, LCD_RS, LCD_RW, LCD_DATA);
input RESETN, CLK; //clk 1kHz
output LCD_E;
output reg LCD_RS, LCD_RW;
output reg [7:0] LCD_DATA;

reg [2:0] STATE;    //LCD를 제어하는 state를 always문에서 사용하기 위해 reg선언
parameter DELAY = 3'b000,
          FUNCTION_SET = 3'b001,
          ENTRY_MODE = 3'b010,
          DISP_ONOFF = 3'b011,
          LINE1 = 3'b100,
          LINE2 = 3'b101,
          DELAY_T = 3'b110,
          CLEAR_DISP = 3'b111;
          //각각의 상태들을 parameter로 선언

integer CNT;				//시간이 지나가는 것을 활용하기 위해 integer변수를 활용
integer CNT_100HZ;		//100Hz의 주기를 만들어준다.
integer CNT_half_HZ;		//0.5초에 광고 슬라이딩을 위해 선언
integer shift_bit = 0;	//shift되는 bit수를 저장하는 변수 선언
integer CNT_shift;		//shift되는 개수를 저장하는 변수

reg CLK_100HZ;
reg CLK_half_HZ;

always @ (negedge RESETN or posedge CLK)//clock을 분주하여 1KHz를 100Hz만들어줌
begin
   if(RESETN==0) begin
      CNT_100HZ= 0;
      CLK_100HZ= 0;
		CNT_half_HZ= 0;
      CLK_half_HZ= 0;
		CNT_shift = 0;
   end
   else begin
		if(CNT_100HZ>=5) begin 			//100Hz로 주기를 만들어주었다.           
			CNT_100HZ= 0;
			CLK_100HZ= ~CLK_100HZ;	
		end
		else
			CNT_100HZ= CNT_100HZ+1;
			
		if(CNT_half_HZ >= 1000) begin		//0.5Hz의 주기를 만들어주었다.
			CNT_half_HZ = 0;
			CLK_half_HZ = ~CLK_half_HZ;
		end
		else
			CNT_half_HZ = CNT_half_HZ + 1;
	
	end
end

//state 제어
always @ (negedge RESETN or posedge CLK_100HZ)
begin
   if(RESETN==0) STATE=DELAY; //리셋시 초기상태는 delay
   else
   begin
      case(STATE)// 각각의 상태에 대해 아래 always문의 cnt값에 따른 상태변화
          DELAY :        if(CNT == 70)  STATE = FUNCTION_SET; //전원이 켜지고 초기명령, bit수와 행, 밝기 설정
          FUNCTION_SET : if(CNT == 30)  STATE = DISP_ONOFF;   //화면 on/off, 커서와 커서 깜박임 on/off
          DISP_ONOFF :   if(CNT == 30)  STATE = ENTRY_MODE;   //읽기 쓰기 과정에서 커서의 위치, 화면 변화 조절
          ENTRY_MODE :   if(CNT == 30)  STATE = LINE1;        //첫번째 행 출력
          LINE1 :        if(CNT == 20)  STATE = LINE2;        //두번째 행 출력
          LINE2 :        if(CNT == 20)  STATE = DELAY_T;      //lcd reset 소요시간으로 인한 지연
          DELAY_T :      if(CNT == 400) STATE = CLEAR_DISP;   //화면을 지우고 커서를 home으로 옮김
          CLEAR_DISP :   if(CNT == 200) STATE = LINE1;        //화면을 초기화하고 상태를 첫번째 행으로 옮김
          default : STATE= DELAY; //기본상태는 delay
      endcase
   end
end

//state에 대한 CNT 제어
always @ (negedge RESETN or posedge CLK_100HZ)
begin
   if(RESETN==0) CNT=0;
   else
   begin
      case(STATE)// 각각의 상태에 따라 CNT의 상한을 정해주었다.
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

//0.5 Hz의 clk을 활용한 bit_shift
//이를 활용해 광고판처럼 글자가 슬라이딩을 하도록 해준다.
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

//아래부터는 각 state에 따른 명령을 전달하는 부분
always @ (negedge RESETN or posedge CLK_100HZ)      
begin
   if(RESETN==0)//RESETN이 0일때 아래구문 실행
   begin
      LCD_RS = 1'b1; //data register 선택
      LCD_RW = 1'b1; //write 상태
      LCD_DATA = 8'b00000000; //data 0에는 출력
   end
   else
   begin
      case(STATE)//각각의 상태에 따라 아래 실행
         FUNCTION_SET:
            begin
               LCD_RS = 1'b0; //instruction register 선택
               LCD_RW = 1'b0; //read 상태
               LCD_DATA = 8'b00111100; //[4]는 8-bit bus를 활용한다는 의미
													//[3]는 2-line display모드를 한다는 의미
													//[2]는 5x11 dot format을 활용한다는 의미
            end
         DISP_ONOFF:
            begin
               LCD_RS = 1'b0; //instruction register 선택
               LCD_RW = 1'b0; //read 상태
               LCD_DATA = 8'b00001100; //화면 on, 커서off, 깜박임 off
            end
         ENTRY_MODE:
            begin
               LCD_RS = 1'b0; //instruction register 선택
               LCD_RW = 1'b0; //read 상태
               LCD_DATA = 8'b00000110; //커서 이동 오른쪽, 화면이동 없음
													//실습에서 화면 이동이 있는 경우 어떻게 되는지 테스트해보자.
            end
         LINE1:
            begin
               LCD_RW=1'b0;//read 상태
					
               case(shift_bit) //cnt값에 따라
                  0 :
                     begin
                        LCD_RS = 1'b0; //instruction register 선택
                        LCD_DATA = 8'b10000000;		//ram에 write 하는 위치를 A00으로 고정시켜준다.
                     end
                  1 :
                     begin
                        LCD_RS = 1'b1; //data register 선택
                        LCD_DATA = 8'b00100000; //공백
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
                        LCD_DATA = 8'b00100000; //공백
                     end
                  13 :
                     begin
                        LCD_RS = 1'b1; 
                        LCD_DATA = 8'b00100000; //공백
                     end
                  14 :
                     begin
                        LCD_RS = 1'b1; 
                        LCD_DATA = 8'b00100000; //공백
                     end
                  15 :
                     begin
                        LCD_RS = 1'b1; 
                        LCD_DATA = 8'b00100000; //공백
                     end
                  16 : 
                     begin
                         LCD_RS = 1'b1; 
                        LCD_DATA = 8'b00100000; //공백
                     end
                  default :
                     begin
                        LCD_RS = 1'b1; 
                        LCD_DATA = 8'b00100000; //공백
                     end
                  endcase
               end
            
            LINE2:
            begin
               LCD_RW=1'b0;//read 상태
            
               case(shift_bit) //cnt값에 따라
                  0 :
                     begin
                        LCD_RS = 1'b0; //instruction register 선택
                        LCD_DATA = 8'b11000000;		//LCD_DATA[7]의 의미는 DDRAM address 방식으로 데이터를 읽어올 것이고
																	//LCD_DATA[6]은 주소를 의미하며 27H의 위치에 데이터를 적는다는 의미이다.
                     end
                  1 :
                     begin
                        LCD_RS = 1'b1; //data register 선택
                        LCD_DATA = 8'b00100000; //공백
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
                        LCD_DATA = 8'h20; // 공백
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
                        LCD_DATA = 8'b00100000; //공백
                     end
                  endcase
               end
            
            DELAY_T :
               begin
                  LCD_RS = 1'b0; //instruction register 선택
                  LCD_RW = 1'b0; //read 상태
                  LCD_DATA = 8'b00000010; //리셋시 커서를 최상단 왼쪽으로
               end
            
            CLEAR_DISP :
               begin
                  LCD_RS = 1'b0; //instruction register 선택
                  LCD_RW = 1'b0; //read 상태
                  LCD_DATA = 8'b00000001; //리셋시 화면 초기화
               end
            
            default :
               begin
                   LCD_RS = 1'b1; //DATA register 선택
                  LCD_RW = 1'b1; //write 상태
                  LCD_DATA = 8'b00000000; //기본 값 데이터는 0
               end
            endcase
         end
      end

assign LCD_E = CLK_100HZ;// LCD에 클럭 인가 (enable에 분주된 clk대입)
                              
endmodule