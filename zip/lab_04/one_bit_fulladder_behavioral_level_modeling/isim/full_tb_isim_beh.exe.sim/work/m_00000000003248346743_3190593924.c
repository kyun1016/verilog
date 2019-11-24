/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/Xilinx/zip/lab_04/one_bit_fulladder_behavioral_level_modeling/full_adder.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {0U, 0U};



static void Always_62_0(char *t0)
{
    char t7[8];
    char t38[8];
    char t54[8];
    char t85[8];
    char t93[8];
    char t121[8];
    char t137[8];
    char t168[8];
    char t176[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t52;
    char *t53;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    int t77;
    int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    char *t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    char *t98;
    char *t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    char *t107;
    char *t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    char *t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    char *t128;
    char *t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    char *t134;
    char *t135;
    char *t136;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    char *t141;
    char *t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    char *t150;
    char *t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    int t160;
    int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    char *t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    char *t175;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    char *t180;
    char *t181;
    char *t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    char *t190;
    char *t191;
    unsigned int t192;
    unsigned int t193;
    unsigned int t194;
    int t195;
    unsigned int t196;
    unsigned int t197;
    unsigned int t198;
    int t199;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    unsigned int t203;
    char *t204;
    unsigned int t205;
    unsigned int t206;
    unsigned int t207;
    unsigned int t208;
    unsigned int t209;
    char *t210;
    char *t211;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 3168);
    *((int *)t2) = 1;
    t3 = (t0 + 2880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(63, ng0);

LAB5:    xsi_set_current_line(64, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t6 = *((char **)t4);
    t8 = *((unsigned int *)t5);
    t9 = *((unsigned int *)t6);
    t10 = (t8 & t9);
    *((unsigned int *)t7) = t10;
    t4 = (t5 + 4);
    t11 = (t6 + 4);
    t12 = (t7 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t11);
    t15 = (t13 | t14);
    *((unsigned int *)t12) = t15;
    t16 = *((unsigned int *)t12);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB6;

LAB7:
LAB8:    memset(t38, 0, 8);
    t39 = (t7 + 4);
    t40 = *((unsigned int *)t39);
    t41 = (~(t40));
    t42 = *((unsigned int *)t7);
    t43 = (t42 & t41);
    t44 = (t43 & 1U);
    if (t44 != 0)
        goto LAB9;

LAB10:    if (*((unsigned int *)t39) != 0)
        goto LAB11;

LAB12:    t46 = (t38 + 4);
    t47 = *((unsigned int *)t38);
    t48 = (!(t47));
    t49 = *((unsigned int *)t46);
    t50 = (t48 || t49);
    if (t50 > 0)
        goto LAB13;

LAB14:    memcpy(t93, t38, 8);

LAB15:    memset(t121, 0, 8);
    t122 = (t93 + 4);
    t123 = *((unsigned int *)t122);
    t124 = (~(t123));
    t125 = *((unsigned int *)t93);
    t126 = (t125 & t124);
    t127 = (t126 & 1U);
    if (t127 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t122) != 0)
        goto LAB28;

LAB29:    t129 = (t121 + 4);
    t130 = *((unsigned int *)t121);
    t131 = (!(t130));
    t132 = *((unsigned int *)t129);
    t133 = (t131 || t132);
    if (t133 > 0)
        goto LAB30;

LAB31:    memcpy(t176, t121, 8);

LAB32:    t204 = (t176 + 4);
    t205 = *((unsigned int *)t204);
    t206 = (~(t205));
    t207 = *((unsigned int *)t176);
    t208 = (t207 & t206);
    t209 = (t208 != 0);
    if (t209 > 0)
        goto LAB43;

LAB44:    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB45:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t4);
    t10 = (t8 ^ t9);
    *((unsigned int *)t7) = t10;
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = (t7 + 4);
    t13 = *((unsigned int *)t2);
    t14 = *((unsigned int *)t5);
    t15 = (t13 | t14);
    *((unsigned int *)t6) = t15;
    t16 = *((unsigned int *)t6);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB46;

LAB47:
LAB48:    t11 = (t0 + 1368U);
    t12 = *((char **)t11);
    t22 = *((unsigned int *)t7);
    t23 = *((unsigned int *)t12);
    t24 = (t22 ^ t23);
    *((unsigned int *)t38) = t24;
    t11 = (t7 + 4);
    t20 = (t12 + 4);
    t21 = (t38 + 4);
    t25 = *((unsigned int *)t11);
    t26 = *((unsigned int *)t20);
    t27 = (t25 | t26);
    *((unsigned int *)t21) = t27;
    t28 = *((unsigned int *)t21);
    t29 = (t28 != 0);
    if (t29 == 1)
        goto LAB49;

LAB50:
LAB51:    t39 = (t38 + 4);
    t34 = *((unsigned int *)t39);
    t35 = (~(t34));
    t36 = *((unsigned int *)t38);
    t37 = (t36 & t35);
    t40 = (t37 != 0);
    if (t40 > 0)
        goto LAB52;

LAB53:    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB54:    goto LAB2;

LAB6:    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t7) = (t18 | t19);
    t20 = (t5 + 4);
    t21 = (t6 + 4);
    t22 = *((unsigned int *)t5);
    t23 = (~(t22));
    t24 = *((unsigned int *)t20);
    t25 = (~(t24));
    t26 = *((unsigned int *)t6);
    t27 = (~(t26));
    t28 = *((unsigned int *)t21);
    t29 = (~(t28));
    t30 = (t23 & t25);
    t31 = (t27 & t29);
    t32 = (~(t30));
    t33 = (~(t31));
    t34 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t34 & t32);
    t35 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t35 & t33);
    t36 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t36 & t32);
    t37 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t37 & t33);
    goto LAB8;

LAB9:    *((unsigned int *)t38) = 1;
    goto LAB12;

LAB11:    t45 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB12;

LAB13:    t51 = (t0 + 1048U);
    t52 = *((char **)t51);
    t51 = (t0 + 1368U);
    t53 = *((char **)t51);
    t55 = *((unsigned int *)t52);
    t56 = *((unsigned int *)t53);
    t57 = (t55 & t56);
    *((unsigned int *)t54) = t57;
    t51 = (t52 + 4);
    t58 = (t53 + 4);
    t59 = (t54 + 4);
    t60 = *((unsigned int *)t51);
    t61 = *((unsigned int *)t58);
    t62 = (t60 | t61);
    *((unsigned int *)t59) = t62;
    t63 = *((unsigned int *)t59);
    t64 = (t63 != 0);
    if (t64 == 1)
        goto LAB16;

LAB17:
LAB18:    memset(t85, 0, 8);
    t86 = (t54 + 4);
    t87 = *((unsigned int *)t86);
    t88 = (~(t87));
    t89 = *((unsigned int *)t54);
    t90 = (t89 & t88);
    t91 = (t90 & 1U);
    if (t91 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t86) != 0)
        goto LAB21;

LAB22:    t94 = *((unsigned int *)t38);
    t95 = *((unsigned int *)t85);
    t96 = (t94 | t95);
    *((unsigned int *)t93) = t96;
    t97 = (t38 + 4);
    t98 = (t85 + 4);
    t99 = (t93 + 4);
    t100 = *((unsigned int *)t97);
    t101 = *((unsigned int *)t98);
    t102 = (t100 | t101);
    *((unsigned int *)t99) = t102;
    t103 = *((unsigned int *)t99);
    t104 = (t103 != 0);
    if (t104 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB15;

LAB16:    t65 = *((unsigned int *)t54);
    t66 = *((unsigned int *)t59);
    *((unsigned int *)t54) = (t65 | t66);
    t67 = (t52 + 4);
    t68 = (t53 + 4);
    t69 = *((unsigned int *)t52);
    t70 = (~(t69));
    t71 = *((unsigned int *)t67);
    t72 = (~(t71));
    t73 = *((unsigned int *)t53);
    t74 = (~(t73));
    t75 = *((unsigned int *)t68);
    t76 = (~(t75));
    t77 = (t70 & t72);
    t78 = (t74 & t76);
    t79 = (~(t77));
    t80 = (~(t78));
    t81 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t81 & t79);
    t82 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t82 & t80);
    t83 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t83 & t79);
    t84 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t84 & t80);
    goto LAB18;

LAB19:    *((unsigned int *)t85) = 1;
    goto LAB22;

LAB21:    t92 = (t85 + 4);
    *((unsigned int *)t85) = 1;
    *((unsigned int *)t92) = 1;
    goto LAB22;

LAB23:    t105 = *((unsigned int *)t93);
    t106 = *((unsigned int *)t99);
    *((unsigned int *)t93) = (t105 | t106);
    t107 = (t38 + 4);
    t108 = (t85 + 4);
    t109 = *((unsigned int *)t107);
    t110 = (~(t109));
    t111 = *((unsigned int *)t38);
    t112 = (t111 & t110);
    t113 = *((unsigned int *)t108);
    t114 = (~(t113));
    t115 = *((unsigned int *)t85);
    t116 = (t115 & t114);
    t117 = (~(t112));
    t118 = (~(t116));
    t119 = *((unsigned int *)t99);
    *((unsigned int *)t99) = (t119 & t117);
    t120 = *((unsigned int *)t99);
    *((unsigned int *)t99) = (t120 & t118);
    goto LAB25;

LAB26:    *((unsigned int *)t121) = 1;
    goto LAB29;

LAB28:    t128 = (t121 + 4);
    *((unsigned int *)t121) = 1;
    *((unsigned int *)t128) = 1;
    goto LAB29;

LAB30:    t134 = (t0 + 1208U);
    t135 = *((char **)t134);
    t134 = (t0 + 1368U);
    t136 = *((char **)t134);
    t138 = *((unsigned int *)t135);
    t139 = *((unsigned int *)t136);
    t140 = (t138 & t139);
    *((unsigned int *)t137) = t140;
    t134 = (t135 + 4);
    t141 = (t136 + 4);
    t142 = (t137 + 4);
    t143 = *((unsigned int *)t134);
    t144 = *((unsigned int *)t141);
    t145 = (t143 | t144);
    *((unsigned int *)t142) = t145;
    t146 = *((unsigned int *)t142);
    t147 = (t146 != 0);
    if (t147 == 1)
        goto LAB33;

LAB34:
LAB35:    memset(t168, 0, 8);
    t169 = (t137 + 4);
    t170 = *((unsigned int *)t169);
    t171 = (~(t170));
    t172 = *((unsigned int *)t137);
    t173 = (t172 & t171);
    t174 = (t173 & 1U);
    if (t174 != 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t169) != 0)
        goto LAB38;

LAB39:    t177 = *((unsigned int *)t121);
    t178 = *((unsigned int *)t168);
    t179 = (t177 | t178);
    *((unsigned int *)t176) = t179;
    t180 = (t121 + 4);
    t181 = (t168 + 4);
    t182 = (t176 + 4);
    t183 = *((unsigned int *)t180);
    t184 = *((unsigned int *)t181);
    t185 = (t183 | t184);
    *((unsigned int *)t182) = t185;
    t186 = *((unsigned int *)t182);
    t187 = (t186 != 0);
    if (t187 == 1)
        goto LAB40;

LAB41:
LAB42:    goto LAB32;

LAB33:    t148 = *((unsigned int *)t137);
    t149 = *((unsigned int *)t142);
    *((unsigned int *)t137) = (t148 | t149);
    t150 = (t135 + 4);
    t151 = (t136 + 4);
    t152 = *((unsigned int *)t135);
    t153 = (~(t152));
    t154 = *((unsigned int *)t150);
    t155 = (~(t154));
    t156 = *((unsigned int *)t136);
    t157 = (~(t156));
    t158 = *((unsigned int *)t151);
    t159 = (~(t158));
    t160 = (t153 & t155);
    t161 = (t157 & t159);
    t162 = (~(t160));
    t163 = (~(t161));
    t164 = *((unsigned int *)t142);
    *((unsigned int *)t142) = (t164 & t162);
    t165 = *((unsigned int *)t142);
    *((unsigned int *)t142) = (t165 & t163);
    t166 = *((unsigned int *)t137);
    *((unsigned int *)t137) = (t166 & t162);
    t167 = *((unsigned int *)t137);
    *((unsigned int *)t137) = (t167 & t163);
    goto LAB35;

LAB36:    *((unsigned int *)t168) = 1;
    goto LAB39;

LAB38:    t175 = (t168 + 4);
    *((unsigned int *)t168) = 1;
    *((unsigned int *)t175) = 1;
    goto LAB39;

LAB40:    t188 = *((unsigned int *)t176);
    t189 = *((unsigned int *)t182);
    *((unsigned int *)t176) = (t188 | t189);
    t190 = (t121 + 4);
    t191 = (t168 + 4);
    t192 = *((unsigned int *)t190);
    t193 = (~(t192));
    t194 = *((unsigned int *)t121);
    t195 = (t194 & t193);
    t196 = *((unsigned int *)t191);
    t197 = (~(t196));
    t198 = *((unsigned int *)t168);
    t199 = (t198 & t197);
    t200 = (~(t195));
    t201 = (~(t199));
    t202 = *((unsigned int *)t182);
    *((unsigned int *)t182) = (t202 & t200);
    t203 = *((unsigned int *)t182);
    *((unsigned int *)t182) = (t203 & t201);
    goto LAB42;

LAB43:    xsi_set_current_line(65, ng0);
    t210 = ((char*)((ng1)));
    t211 = (t0 + 1928);
    xsi_vlogvar_assign_value(t211, t210, 0, 0, 1);
    goto LAB45;

LAB46:    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t6);
    *((unsigned int *)t7) = (t18 | t19);
    goto LAB48;

LAB49:    t32 = *((unsigned int *)t38);
    t33 = *((unsigned int *)t21);
    *((unsigned int *)t38) = (t32 | t33);
    goto LAB51;

LAB52:    xsi_set_current_line(69, ng0);
    t45 = ((char*)((ng1)));
    t46 = (t0 + 1768);
    xsi_vlogvar_assign_value(t46, t45, 0, 0, 1);
    goto LAB54;

}


extern void work_m_00000000003248346743_3190593924_init()
{
	static char *pe[] = {(void *)Always_62_0};
	xsi_register_didat("work_m_00000000003248346743_3190593924", "isim/full_tb_isim_beh.exe.sim/work/m_00000000003248346743_3190593924.didat");
	xsi_register_executes(pe);
}
