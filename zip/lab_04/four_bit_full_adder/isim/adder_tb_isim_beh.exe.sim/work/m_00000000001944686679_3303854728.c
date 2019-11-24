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
static const char *ng0 = "D:/Xilinx/zip/lab_04/four_bit_full_adder/four_bit_full_adder.v";



static void Cont_40_0(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;

LAB0:    t1 = (t0 + 2688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t4);
    t8 = (t6 ^ t7);
    *((unsigned int *)t5) = t8;
    t2 = (t3 + 4);
    t9 = (t4 + 4);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t2);
    t12 = *((unsigned int *)t9);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 != 0);
    if (t15 == 1)
        goto LAB4;

LAB5:
LAB6:    t18 = (t0 + 3352);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memset(t22, 0, 8);
    t23 = 15U;
    t24 = t23;
    t25 = (t5 + 4);
    t26 = *((unsigned int *)t5);
    t23 = (t23 & t26);
    t27 = *((unsigned int *)t25);
    t24 = (t24 & t27);
    t28 = (t22 + 4);
    t29 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t29 | t23);
    t30 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t30 | t24);
    xsi_driver_vfirst_trans(t18, 0, 3);
    t31 = (t0 + 3256);
    *((int *)t31) = 1;

LAB1:    return;
LAB4:    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t5) = (t16 | t17);
    goto LAB6;

}

static void Cont_41_1(char *t0)
{
    char t4[8];
    char t14[8];
    char t22[8];
    char t54[8];
    char t69[8];
    char t79[8];
    char t87[8];
    char t119[8];
    char t127[8];
    char t155[8];
    char t170[8];
    char t180[8];
    char t188[8];
    char t220[8];
    char t228[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    int t46;
    int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    char *t68;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;
    char *t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    char *t101;
    char *t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    int t111;
    int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    char *t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    char *t126;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    char *t131;
    char *t132;
    char *t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    char *t141;
    char *t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    char *t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    char *t162;
    char *t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    char *t168;
    char *t169;
    char *t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    char *t178;
    char *t179;
    char *t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    char *t192;
    char *t193;
    char *t194;
    unsigned int t195;
    unsigned int t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    unsigned int t201;
    char *t202;
    char *t203;
    unsigned int t204;
    unsigned int t205;
    unsigned int t206;
    unsigned int t207;
    unsigned int t208;
    unsigned int t209;
    unsigned int t210;
    unsigned int t211;
    int t212;
    int t213;
    unsigned int t214;
    unsigned int t215;
    unsigned int t216;
    unsigned int t217;
    unsigned int t218;
    unsigned int t219;
    char *t221;
    unsigned int t222;
    unsigned int t223;
    unsigned int t224;
    unsigned int t225;
    unsigned int t226;
    char *t227;
    unsigned int t229;
    unsigned int t230;
    unsigned int t231;
    char *t232;
    char *t233;
    char *t234;
    unsigned int t235;
    unsigned int t236;
    unsigned int t237;
    unsigned int t238;
    unsigned int t239;
    unsigned int t240;
    unsigned int t241;
    char *t242;
    char *t243;
    unsigned int t244;
    unsigned int t245;
    unsigned int t246;
    int t247;
    unsigned int t248;
    unsigned int t249;
    unsigned int t250;
    int t251;
    unsigned int t252;
    unsigned int t253;
    unsigned int t254;
    unsigned int t255;
    char *t256;
    char *t257;
    char *t258;
    char *t259;
    char *t260;
    unsigned int t261;
    unsigned int t262;
    char *t263;
    unsigned int t264;
    unsigned int t265;
    char *t266;
    unsigned int t267;
    unsigned int t268;
    char *t269;

LAB0:    t1 = (t0 + 2936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 3);
    t8 = (t7 & 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 3);
    t11 = (t10 & 1);
    *((unsigned int *)t2) = t11;
    t12 = (t0 + 1048U);
    t13 = *((char **)t12);
    memset(t14, 0, 8);
    t12 = (t14 + 4);
    t15 = (t13 + 4);
    t16 = *((unsigned int *)t13);
    t17 = (t16 >> 3);
    t18 = (t17 & 1);
    *((unsigned int *)t14) = t18;
    t19 = *((unsigned int *)t15);
    t20 = (t19 >> 3);
    t21 = (t20 & 1);
    *((unsigned int *)t12) = t21;
    t23 = *((unsigned int *)t4);
    t24 = *((unsigned int *)t14);
    t25 = (t23 & t24);
    *((unsigned int *)t22) = t25;
    t26 = (t4 + 4);
    t27 = (t14 + 4);
    t28 = (t22 + 4);
    t29 = *((unsigned int *)t26);
    t30 = *((unsigned int *)t27);
    t31 = (t29 | t30);
    *((unsigned int *)t28) = t31;
    t32 = *((unsigned int *)t28);
    t33 = (t32 != 0);
    if (t33 == 1)
        goto LAB4;

LAB5:
LAB6:    memset(t54, 0, 8);
    t55 = (t22 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (~(t56));
    t58 = *((unsigned int *)t22);
    t59 = (t58 & t57);
    t60 = (t59 & 1U);
    if (t60 != 0)
        goto LAB7;

LAB8:    if (*((unsigned int *)t55) != 0)
        goto LAB9;

LAB10:    t62 = (t54 + 4);
    t63 = *((unsigned int *)t54);
    t64 = (!(t63));
    t65 = *((unsigned int *)t62);
    t66 = (t64 || t65);
    if (t66 > 0)
        goto LAB11;

LAB12:    memcpy(t127, t54, 8);

LAB13:    memset(t155, 0, 8);
    t156 = (t127 + 4);
    t157 = *((unsigned int *)t156);
    t158 = (~(t157));
    t159 = *((unsigned int *)t127);
    t160 = (t159 & t158);
    t161 = (t160 & 1U);
    if (t161 != 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t156) != 0)
        goto LAB26;

LAB27:    t163 = (t155 + 4);
    t164 = *((unsigned int *)t155);
    t165 = (!(t164));
    t166 = *((unsigned int *)t163);
    t167 = (t165 || t166);
    if (t167 > 0)
        goto LAB28;

LAB29:    memcpy(t228, t155, 8);

LAB30:    t256 = (t0 + 3416);
    t257 = (t256 + 56U);
    t258 = *((char **)t257);
    t259 = (t258 + 56U);
    t260 = *((char **)t259);
    memset(t260, 0, 8);
    t261 = 1U;
    t262 = t261;
    t263 = (t228 + 4);
    t264 = *((unsigned int *)t228);
    t261 = (t261 & t264);
    t265 = *((unsigned int *)t263);
    t262 = (t262 & t265);
    t266 = (t260 + 4);
    t267 = *((unsigned int *)t260);
    *((unsigned int *)t260) = (t267 | t261);
    t268 = *((unsigned int *)t266);
    *((unsigned int *)t266) = (t268 | t262);
    xsi_driver_vfirst_trans(t256, 0, 0);
    t269 = (t0 + 3272);
    *((int *)t269) = 1;

LAB1:    return;
LAB4:    t34 = *((unsigned int *)t22);
    t35 = *((unsigned int *)t28);
    *((unsigned int *)t22) = (t34 | t35);
    t36 = (t4 + 4);
    t37 = (t14 + 4);
    t38 = *((unsigned int *)t4);
    t39 = (~(t38));
    t40 = *((unsigned int *)t36);
    t41 = (~(t40));
    t42 = *((unsigned int *)t14);
    t43 = (~(t42));
    t44 = *((unsigned int *)t37);
    t45 = (~(t44));
    t46 = (t39 & t41);
    t47 = (t43 & t45);
    t48 = (~(t46));
    t49 = (~(t47));
    t50 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t50 & t48);
    t51 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t51 & t49);
    t52 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t52 & t48);
    t53 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t53 & t49);
    goto LAB6;

LAB7:    *((unsigned int *)t54) = 1;
    goto LAB10;

LAB9:    t61 = (t54 + 4);
    *((unsigned int *)t54) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB10;

LAB11:    t67 = (t0 + 1208U);
    t68 = *((char **)t67);
    memset(t69, 0, 8);
    t67 = (t69 + 4);
    t70 = (t68 + 4);
    t71 = *((unsigned int *)t68);
    t72 = (t71 >> 3);
    t73 = (t72 & 1);
    *((unsigned int *)t69) = t73;
    t74 = *((unsigned int *)t70);
    t75 = (t74 >> 3);
    t76 = (t75 & 1);
    *((unsigned int *)t67) = t76;
    t77 = (t0 + 1048U);
    t78 = *((char **)t77);
    memset(t79, 0, 8);
    t77 = (t79 + 4);
    t80 = (t78 + 4);
    t81 = *((unsigned int *)t78);
    t82 = (t81 >> 3);
    t83 = (t82 & 1);
    *((unsigned int *)t79) = t83;
    t84 = *((unsigned int *)t80);
    t85 = (t84 >> 3);
    t86 = (t85 & 1);
    *((unsigned int *)t77) = t86;
    t88 = *((unsigned int *)t69);
    t89 = *((unsigned int *)t79);
    t90 = (t88 & t89);
    *((unsigned int *)t87) = t90;
    t91 = (t69 + 4);
    t92 = (t79 + 4);
    t93 = (t87 + 4);
    t94 = *((unsigned int *)t91);
    t95 = *((unsigned int *)t92);
    t96 = (t94 | t95);
    *((unsigned int *)t93) = t96;
    t97 = *((unsigned int *)t93);
    t98 = (t97 != 0);
    if (t98 == 1)
        goto LAB14;

LAB15:
LAB16:    memset(t119, 0, 8);
    t120 = (t87 + 4);
    t121 = *((unsigned int *)t120);
    t122 = (~(t121));
    t123 = *((unsigned int *)t87);
    t124 = (t123 & t122);
    t125 = (t124 & 1U);
    if (t125 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t120) != 0)
        goto LAB19;

LAB20:    t128 = *((unsigned int *)t54);
    t129 = *((unsigned int *)t119);
    t130 = (t128 | t129);
    *((unsigned int *)t127) = t130;
    t131 = (t54 + 4);
    t132 = (t119 + 4);
    t133 = (t127 + 4);
    t134 = *((unsigned int *)t131);
    t135 = *((unsigned int *)t132);
    t136 = (t134 | t135);
    *((unsigned int *)t133) = t136;
    t137 = *((unsigned int *)t133);
    t138 = (t137 != 0);
    if (t138 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB13;

LAB14:    t99 = *((unsigned int *)t87);
    t100 = *((unsigned int *)t93);
    *((unsigned int *)t87) = (t99 | t100);
    t101 = (t69 + 4);
    t102 = (t79 + 4);
    t103 = *((unsigned int *)t69);
    t104 = (~(t103));
    t105 = *((unsigned int *)t101);
    t106 = (~(t105));
    t107 = *((unsigned int *)t79);
    t108 = (~(t107));
    t109 = *((unsigned int *)t102);
    t110 = (~(t109));
    t111 = (t104 & t106);
    t112 = (t108 & t110);
    t113 = (~(t111));
    t114 = (~(t112));
    t115 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t115 & t113);
    t116 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t116 & t114);
    t117 = *((unsigned int *)t87);
    *((unsigned int *)t87) = (t117 & t113);
    t118 = *((unsigned int *)t87);
    *((unsigned int *)t87) = (t118 & t114);
    goto LAB16;

LAB17:    *((unsigned int *)t119) = 1;
    goto LAB20;

LAB19:    t126 = (t119 + 4);
    *((unsigned int *)t119) = 1;
    *((unsigned int *)t126) = 1;
    goto LAB20;

LAB21:    t139 = *((unsigned int *)t127);
    t140 = *((unsigned int *)t133);
    *((unsigned int *)t127) = (t139 | t140);
    t141 = (t54 + 4);
    t142 = (t119 + 4);
    t143 = *((unsigned int *)t141);
    t144 = (~(t143));
    t145 = *((unsigned int *)t54);
    t146 = (t145 & t144);
    t147 = *((unsigned int *)t142);
    t148 = (~(t147));
    t149 = *((unsigned int *)t119);
    t150 = (t149 & t148);
    t151 = (~(t146));
    t152 = (~(t150));
    t153 = *((unsigned int *)t133);
    *((unsigned int *)t133) = (t153 & t151);
    t154 = *((unsigned int *)t133);
    *((unsigned int *)t133) = (t154 & t152);
    goto LAB23;

LAB24:    *((unsigned int *)t155) = 1;
    goto LAB27;

LAB26:    t162 = (t155 + 4);
    *((unsigned int *)t155) = 1;
    *((unsigned int *)t162) = 1;
    goto LAB27;

LAB28:    t168 = (t0 + 1368U);
    t169 = *((char **)t168);
    memset(t170, 0, 8);
    t168 = (t170 + 4);
    t171 = (t169 + 4);
    t172 = *((unsigned int *)t169);
    t173 = (t172 >> 3);
    t174 = (t173 & 1);
    *((unsigned int *)t170) = t174;
    t175 = *((unsigned int *)t171);
    t176 = (t175 >> 3);
    t177 = (t176 & 1);
    *((unsigned int *)t168) = t177;
    t178 = (t0 + 1208U);
    t179 = *((char **)t178);
    memset(t180, 0, 8);
    t178 = (t180 + 4);
    t181 = (t179 + 4);
    t182 = *((unsigned int *)t179);
    t183 = (t182 >> 3);
    t184 = (t183 & 1);
    *((unsigned int *)t180) = t184;
    t185 = *((unsigned int *)t181);
    t186 = (t185 >> 3);
    t187 = (t186 & 1);
    *((unsigned int *)t178) = t187;
    t189 = *((unsigned int *)t170);
    t190 = *((unsigned int *)t180);
    t191 = (t189 & t190);
    *((unsigned int *)t188) = t191;
    t192 = (t170 + 4);
    t193 = (t180 + 4);
    t194 = (t188 + 4);
    t195 = *((unsigned int *)t192);
    t196 = *((unsigned int *)t193);
    t197 = (t195 | t196);
    *((unsigned int *)t194) = t197;
    t198 = *((unsigned int *)t194);
    t199 = (t198 != 0);
    if (t199 == 1)
        goto LAB31;

LAB32:
LAB33:    memset(t220, 0, 8);
    t221 = (t188 + 4);
    t222 = *((unsigned int *)t221);
    t223 = (~(t222));
    t224 = *((unsigned int *)t188);
    t225 = (t224 & t223);
    t226 = (t225 & 1U);
    if (t226 != 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t221) != 0)
        goto LAB36;

LAB37:    t229 = *((unsigned int *)t155);
    t230 = *((unsigned int *)t220);
    t231 = (t229 | t230);
    *((unsigned int *)t228) = t231;
    t232 = (t155 + 4);
    t233 = (t220 + 4);
    t234 = (t228 + 4);
    t235 = *((unsigned int *)t232);
    t236 = *((unsigned int *)t233);
    t237 = (t235 | t236);
    *((unsigned int *)t234) = t237;
    t238 = *((unsigned int *)t234);
    t239 = (t238 != 0);
    if (t239 == 1)
        goto LAB38;

LAB39:
LAB40:    goto LAB30;

LAB31:    t200 = *((unsigned int *)t188);
    t201 = *((unsigned int *)t194);
    *((unsigned int *)t188) = (t200 | t201);
    t202 = (t170 + 4);
    t203 = (t180 + 4);
    t204 = *((unsigned int *)t170);
    t205 = (~(t204));
    t206 = *((unsigned int *)t202);
    t207 = (~(t206));
    t208 = *((unsigned int *)t180);
    t209 = (~(t208));
    t210 = *((unsigned int *)t203);
    t211 = (~(t210));
    t212 = (t205 & t207);
    t213 = (t209 & t211);
    t214 = (~(t212));
    t215 = (~(t213));
    t216 = *((unsigned int *)t194);
    *((unsigned int *)t194) = (t216 & t214);
    t217 = *((unsigned int *)t194);
    *((unsigned int *)t194) = (t217 & t215);
    t218 = *((unsigned int *)t188);
    *((unsigned int *)t188) = (t218 & t214);
    t219 = *((unsigned int *)t188);
    *((unsigned int *)t188) = (t219 & t215);
    goto LAB33;

LAB34:    *((unsigned int *)t220) = 1;
    goto LAB37;

LAB36:    t227 = (t220 + 4);
    *((unsigned int *)t220) = 1;
    *((unsigned int *)t227) = 1;
    goto LAB37;

LAB38:    t240 = *((unsigned int *)t228);
    t241 = *((unsigned int *)t234);
    *((unsigned int *)t228) = (t240 | t241);
    t242 = (t155 + 4);
    t243 = (t220 + 4);
    t244 = *((unsigned int *)t242);
    t245 = (~(t244));
    t246 = *((unsigned int *)t155);
    t247 = (t246 & t245);
    t248 = *((unsigned int *)t243);
    t249 = (~(t248));
    t250 = *((unsigned int *)t220);
    t251 = (t250 & t249);
    t252 = (~(t247));
    t253 = (~(t251));
    t254 = *((unsigned int *)t234);
    *((unsigned int *)t234) = (t254 & t252);
    t255 = *((unsigned int *)t234);
    *((unsigned int *)t234) = (t255 & t253);
    goto LAB40;

}


extern void work_m_00000000001944686679_3303854728_init()
{
	static char *pe[] = {(void *)Cont_40_0,(void *)Cont_41_1};
	xsi_register_didat("work_m_00000000001944686679_3303854728", "isim/adder_tb_isim_beh.exe.sim/work/m_00000000001944686679_3303854728.didat");
	xsi_register_executes(pe);
}
