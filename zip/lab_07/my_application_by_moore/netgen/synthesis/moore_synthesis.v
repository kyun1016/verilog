////////////////////////////////////////////////////////////////////////////////
// Copyright (c) 1995-2013 Xilinx, Inc.  All rights reserved.
////////////////////////////////////////////////////////////////////////////////
//   ____  ____
//  /   /\/   /
// /___/  \  /    Vendor: Xilinx
// \   \   \/     Version: P.20131013
//  \   \         Application: netgen
//  /   /         Filename: moore_synthesis.v
// /___/   /\     Timestamp: Fri Oct 18 20:20:57 2019
// \   \  /  \ 
//  \___\/\___\
//             
// Command	: -intstyle ise -insert_glbl true -w -dir netgen/synthesis -ofmt verilog -sim moore.ngc moore_synthesis.v 
// Device	: xc3s200-4-pq208
// Input file	: moore.ngc
// Output file	: C:\Xilinx\zip\my_application_by_moore\netgen\synthesis\moore_synthesis.v
// # of Modules	: 1
// Design Name	: moore
// Xilinx        : C:\Xilinx\14.7\ISE_DS\ISE\
//             
// Purpose:    
//     This verilog netlist is a verification model and uses simulation 
//     primitives which may not represent the true implementation of the 
//     device, however the netlist is functionally correct and should not 
//     be modified. This file cannot be synthesized and should only be used 
//     with supported simulation tools.
//             
// Reference:  
//     Command Line Tools User Guide, Chapter 23 and Synthesis and Simulation Design Guide, Chapter 6
//             
////////////////////////////////////////////////////////////////////////////////

`timescale 1 ns/1 ps

module moore (
  clk, A, B, out, num
);
  input clk;
  input A;
  input B;
  output out;
  output [3 : 0] num;
  wire A_IBUF_1;
  wire B_IBUF_3;
  wire N0;
  wire N1;
  wire can_push_6;
  wire can_push_not0002_inv;
  wire can_push_not0003;
  wire clk_BUFGP_10;
  wire num_0_15;
  wire num_1_16;
  wire num_2_17;
  wire num_3_18;
  wire out_OBUF_20;
  wire out_not0001;
  GND   XST_GND (
    .G(N0)
  );
  VCC   XST_VCC (
    .P(N1)
  );
  FDSE   can_push (
    .C(clk_BUFGP_10),
    .CE(can_push_not0003),
    .D(N0),
    .S(can_push_not0002_inv),
    .Q(can_push_6)
  );
  FDR   out_4 (
    .C(clk_BUFGP_10),
    .D(N1),
    .R(out_not0001),
    .Q(out_OBUF_20)
  );
  FDE   num_3 (
    .C(clk_BUFGP_10),
    .CE(can_push_not0003),
    .D(A_IBUF_1),
    .Q(num_3_18)
  );
  FDE   num_2 (
    .C(clk_BUFGP_10),
    .CE(can_push_not0003),
    .D(num_3_18),
    .Q(num_2_17)
  );
  FDE   num_1 (
    .C(clk_BUFGP_10),
    .CE(can_push_not0003),
    .D(num_2_17),
    .Q(num_1_16)
  );
  FDE   num_0 (
    .C(clk_BUFGP_10),
    .CE(can_push_not0003),
    .D(num_1_16),
    .Q(num_0_15)
  );
  LUT2 #(
    .INIT ( 4'h1 ))
  can_push_and00001 (
    .I0(A_IBUF_1),
    .I1(B_IBUF_3),
    .O(can_push_not0002_inv)
  );
  LUT3 #(
    .INIT ( 8'h60 ))
  can_push_not00031 (
    .I0(B_IBUF_3),
    .I1(A_IBUF_1),
    .I2(can_push_6),
    .O(can_push_not0003)
  );
  LUT4 #(
    .INIT ( 16'hDFFF ))
  out_not00011 (
    .I0(num_0_15),
    .I1(num_2_17),
    .I2(num_1_16),
    .I3(num_3_18),
    .O(out_not0001)
  );
  IBUF   A_IBUF (
    .I(A),
    .O(A_IBUF_1)
  );
  IBUF   B_IBUF (
    .I(B),
    .O(B_IBUF_3)
  );
  OBUF   out_OBUF (
    .I(out_OBUF_20),
    .O(out)
  );
  OBUF   num_3_OBUF (
    .I(num_3_18),
    .O(num[3])
  );
  OBUF   num_2_OBUF (
    .I(num_2_17),
    .O(num[2])
  );
  OBUF   num_1_OBUF (
    .I(num_1_16),
    .O(num[1])
  );
  OBUF   num_0_OBUF (
    .I(num_0_15),
    .O(num[0])
  );
  BUFGP   clk_BUFGP (
    .I(clk),
    .O(clk_BUFGP_10)
  );
endmodule


`ifndef GLBL
`define GLBL

`timescale  1 ps / 1 ps

module glbl ();

    parameter ROC_WIDTH = 100000;
    parameter TOC_WIDTH = 0;

//--------   STARTUP Globals --------------
    wire GSR;
    wire GTS;
    wire GWE;
    wire PRLD;
    tri1 p_up_tmp;
    tri (weak1, strong0) PLL_LOCKG = p_up_tmp;

    wire PROGB_GLBL;
    wire CCLKO_GLBL;

    reg GSR_int;
    reg GTS_int;
    reg PRLD_int;

//--------   JTAG Globals --------------
    wire JTAG_TDO_GLBL;
    wire JTAG_TCK_GLBL;
    wire JTAG_TDI_GLBL;
    wire JTAG_TMS_GLBL;
    wire JTAG_TRST_GLBL;

    reg JTAG_CAPTURE_GLBL;
    reg JTAG_RESET_GLBL;
    reg JTAG_SHIFT_GLBL;
    reg JTAG_UPDATE_GLBL;
    reg JTAG_RUNTEST_GLBL;

    reg JTAG_SEL1_GLBL = 0;
    reg JTAG_SEL2_GLBL = 0 ;
    reg JTAG_SEL3_GLBL = 0;
    reg JTAG_SEL4_GLBL = 0;

    reg JTAG_USER_TDO1_GLBL = 1'bz;
    reg JTAG_USER_TDO2_GLBL = 1'bz;
    reg JTAG_USER_TDO3_GLBL = 1'bz;
    reg JTAG_USER_TDO4_GLBL = 1'bz;

    assign (weak1, weak0) GSR = GSR_int;
    assign (weak1, weak0) GTS = GTS_int;
    assign (weak1, weak0) PRLD = PRLD_int;

    initial begin
	GSR_int = 1'b1;
	PRLD_int = 1'b1;
	#(ROC_WIDTH)
	GSR_int = 1'b0;
	PRLD_int = 1'b0;
    end

    initial begin
	GTS_int = 1'b1;
	#(TOC_WIDTH)
	GTS_int = 1'b0;
    end

endmodule

`endif

