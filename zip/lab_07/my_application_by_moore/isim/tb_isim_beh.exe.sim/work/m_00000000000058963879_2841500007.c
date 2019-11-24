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
static const char *ng0 = "C:/Xilinx/zip/my_application_by_moore/moore.v";
static int ng1[] = {2, 0};
static int ng2[] = {0, 0};
static int ng3[] = {1, 0};
static int ng4[] = {3, 0};
static unsigned int ng5[] = {0U, 0U};
static unsigned int ng6[] = {1U, 0U};
static unsigned int ng7[] = {11U, 0U};



static void Always_32_0(char *t0)
{
    char t16[8];
    char t42[8];
    char t55[8];
    char t56[8];
    char t57[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
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
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    unsigned int t64;
    int t65;
    char *t66;
    unsigned int t67;
    int t68;
    int t69;
    char *t70;
    unsigned int t71;
    int t72;
    int t73;
    unsigned int t74;
    int t75;
    unsigned int t76;
    unsigned int t77;
    int t78;
    int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;

LAB0:    t1 = (t0 + 3280U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 3600);
    *((int *)t2) = 1;
    t3 = (t0 + 3312);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(32, ng0);

LAB5:    xsi_set_current_line(33, ng0);
    t4 = (t0 + 2360);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:
LAB8:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t16, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t2);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t17 = (t11 ^ t12);
    t18 = (t10 | t17);
    t19 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t19 | t22);
    t24 = (~(t23));
    t25 = (t18 & t24);
    if (t25 != 0)
        goto LAB33;

LAB30:    if (t23 != 0)
        goto LAB32;

LAB31:    *((unsigned int *)t16) = 1;

LAB33:    memset(t42, 0, 8);
    t7 = (t16 + 4);
    t26 = *((unsigned int *)t7);
    t27 = (~(t26));
    t28 = *((unsigned int *)t16);
    t30 = (t28 & t27);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t7) != 0)
        goto LAB36;

LAB37:    t14 = (t42 + 4);
    t32 = *((unsigned int *)t42);
    t33 = *((unsigned int *)t14);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB38;

LAB39:    memcpy(t57, t42, 8);

LAB40:    t58 = (t57 + 4);
    t104 = *((unsigned int *)t58);
    t105 = (~(t104));
    t106 = *((unsigned int *)t57);
    t107 = (t106 & t105);
    t108 = (t107 != 0);
    if (t108 > 0)
        goto LAB52;

LAB53:
LAB54:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t16, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t5);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t17 = (t11 ^ t12);
    t18 = (t10 | t17);
    t19 = *((unsigned int *)t6);
    t22 = *((unsigned int *)t7);
    t23 = (t19 | t22);
    t24 = (~(t23));
    t25 = (t18 & t24);
    if (t25 != 0)
        goto LAB58;

LAB55:    if (t23 != 0)
        goto LAB57;

LAB56:    *((unsigned int *)t16) = 1;

LAB58:    t14 = (t16 + 4);
    t26 = *((unsigned int *)t14);
    t27 = (~(t26));
    t28 = *((unsigned int *)t16);
    t30 = (t28 & t27);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB59;

LAB60:    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB61:    goto LAB2;

LAB6:    xsi_set_current_line(33, ng0);

LAB9:    xsi_set_current_line(34, ng0);
    t13 = (t0 + 1480U);
    t14 = *((char **)t13);
    t13 = (t0 + 1640U);
    t15 = *((char **)t13);
    t17 = *((unsigned int *)t14);
    t18 = *((unsigned int *)t15);
    t19 = (t17 ^ t18);
    *((unsigned int *)t16) = t19;
    t13 = (t14 + 4);
    t20 = (t15 + 4);
    t21 = (t16 + 4);
    t22 = *((unsigned int *)t13);
    t23 = *((unsigned int *)t20);
    t24 = (t22 | t23);
    *((unsigned int *)t21) = t24;
    t25 = *((unsigned int *)t21);
    t26 = (t25 != 0);
    if (t26 == 1)
        goto LAB10;

LAB11:
LAB12:    t29 = (t16 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t16);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB13;

LAB14:
LAB15:    goto LAB8;

LAB10:    t27 = *((unsigned int *)t16);
    t28 = *((unsigned int *)t21);
    *((unsigned int *)t16) = (t27 | t28);
    goto LAB12;

LAB13:    xsi_set_current_line(34, ng0);

LAB16:    xsi_set_current_line(35, ng0);
    t35 = (t0 + 1480U);
    t36 = *((char **)t35);
    t35 = (t36 + 4);
    t37 = *((unsigned int *)t35);
    t38 = (~(t37));
    t39 = *((unsigned int *)t36);
    t40 = (t39 & t38);
    t41 = (t40 != 0);
    if (t41 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(40, ng0);

LAB25:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 2200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t16, 0, 8);
    t5 = (t16 + 4);
    t6 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 1);
    *((unsigned int *)t16) = t9;
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 1);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t12 & 7U);
    t17 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t17 & 7U);
    t7 = (t0 + 2200);
    t13 = (t0 + 2200);
    t14 = (t13 + 72U);
    t15 = *((char **)t14);
    t20 = ((char*)((ng1)));
    t21 = ((char*)((ng2)));
    xsi_vlog_convert_partindices(t42, t55, t56, ((int*)(t15)), 2, t20, 32, 1, t21, 32, 1);
    t29 = (t42 + 4);
    t18 = *((unsigned int *)t29);
    t65 = (!(t18));
    t35 = (t55 + 4);
    t19 = *((unsigned int *)t35);
    t68 = (!(t19));
    t69 = (t65 && t68);
    t36 = (t56 + 4);
    t22 = *((unsigned int *)t36);
    t72 = (!(t22));
    t73 = (t69 && t72);
    if (t73 == 1)
        goto LAB26;

LAB27:    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2200);
    t4 = (t0 + 2200);
    t5 = (t4 + 72U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t16, t6, 2, t7, 32, 1);
    t13 = (t16 + 4);
    t8 = *((unsigned int *)t13);
    t65 = (!(t8));
    if (t65 == 1)
        goto LAB28;

LAB29:    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB19:    goto LAB15;

LAB17:    xsi_set_current_line(35, ng0);

LAB20:    xsi_set_current_line(36, ng0);
    t43 = (t0 + 2200);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    memset(t42, 0, 8);
    t46 = (t42 + 4);
    t47 = (t45 + 4);
    t48 = *((unsigned int *)t45);
    t49 = (t48 >> 1);
    *((unsigned int *)t42) = t49;
    t50 = *((unsigned int *)t47);
    t51 = (t50 >> 1);
    *((unsigned int *)t46) = t51;
    t52 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t52 & 7U);
    t53 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t53 & 7U);
    t54 = (t0 + 2200);
    t58 = (t0 + 2200);
    t59 = (t58 + 72U);
    t60 = *((char **)t59);
    t61 = ((char*)((ng1)));
    t62 = ((char*)((ng2)));
    xsi_vlog_convert_partindices(t55, t56, t57, ((int*)(t60)), 2, t61, 32, 1, t62, 32, 1);
    t63 = (t55 + 4);
    t64 = *((unsigned int *)t63);
    t65 = (!(t64));
    t66 = (t56 + 4);
    t67 = *((unsigned int *)t66);
    t68 = (!(t67));
    t69 = (t65 && t68);
    t70 = (t57 + 4);
    t71 = *((unsigned int *)t70);
    t72 = (!(t71));
    t73 = (t69 && t72);
    if (t73 == 1)
        goto LAB21;

LAB22:    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2200);
    t4 = (t0 + 2200);
    t5 = (t4 + 72U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t16, t6, 2, t7, 32, 1);
    t13 = (t16 + 4);
    t8 = *((unsigned int *)t13);
    t65 = (!(t8));
    if (t65 == 1)
        goto LAB23;

LAB24:    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB19;

LAB21:    t74 = *((unsigned int *)t57);
    t75 = (t74 + 0);
    t76 = *((unsigned int *)t55);
    t77 = *((unsigned int *)t56);
    t78 = (t76 - t77);
    t79 = (t78 + 1);
    xsi_vlogvar_wait_assign_value(t54, t42, t75, *((unsigned int *)t56), t79, 0LL);
    goto LAB22;

LAB23:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t16), 1, 0LL);
    goto LAB24;

LAB26:    t23 = *((unsigned int *)t56);
    t75 = (t23 + 0);
    t24 = *((unsigned int *)t42);
    t25 = *((unsigned int *)t55);
    t78 = (t24 - t25);
    t79 = (t78 + 1);
    xsi_vlogvar_wait_assign_value(t7, t16, t75, *((unsigned int *)t55), t79, 0LL);
    goto LAB27;

LAB28:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t16), 1, 0LL);
    goto LAB29;

LAB32:    t6 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB33;

LAB34:    *((unsigned int *)t42) = 1;
    goto LAB37;

LAB36:    t13 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB37;

LAB38:    t15 = (t0 + 1640U);
    t20 = *((char **)t15);
    t15 = ((char*)((ng2)));
    memset(t55, 0, 8);
    t21 = (t20 + 4);
    t29 = (t15 + 4);
    t37 = *((unsigned int *)t20);
    t38 = *((unsigned int *)t15);
    t39 = (t37 ^ t38);
    t40 = *((unsigned int *)t21);
    t41 = *((unsigned int *)t29);
    t48 = (t40 ^ t41);
    t49 = (t39 | t48);
    t50 = *((unsigned int *)t21);
    t51 = *((unsigned int *)t29);
    t52 = (t50 | t51);
    t53 = (~(t52));
    t64 = (t49 & t53);
    if (t64 != 0)
        goto LAB44;

LAB41:    if (t52 != 0)
        goto LAB43;

LAB42:    *((unsigned int *)t55) = 1;

LAB44:    memset(t56, 0, 8);
    t36 = (t55 + 4);
    t67 = *((unsigned int *)t36);
    t71 = (~(t67));
    t74 = *((unsigned int *)t55);
    t76 = (t74 & t71);
    t77 = (t76 & 1U);
    if (t77 != 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t36) != 0)
        goto LAB47;

LAB48:    t80 = *((unsigned int *)t42);
    t81 = *((unsigned int *)t56);
    t82 = (t80 & t81);
    *((unsigned int *)t57) = t82;
    t44 = (t42 + 4);
    t45 = (t56 + 4);
    t46 = (t57 + 4);
    t83 = *((unsigned int *)t44);
    t84 = *((unsigned int *)t45);
    t85 = (t83 | t84);
    *((unsigned int *)t46) = t85;
    t86 = *((unsigned int *)t46);
    t87 = (t86 != 0);
    if (t87 == 1)
        goto LAB49;

LAB50:
LAB51:    goto LAB40;

LAB43:    t35 = (t55 + 4);
    *((unsigned int *)t55) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB44;

LAB45:    *((unsigned int *)t56) = 1;
    goto LAB48;

LAB47:    t43 = (t56 + 4);
    *((unsigned int *)t56) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB48;

LAB49:    t88 = *((unsigned int *)t57);
    t89 = *((unsigned int *)t46);
    *((unsigned int *)t57) = (t88 | t89);
    t47 = (t42 + 4);
    t54 = (t56 + 4);
    t90 = *((unsigned int *)t42);
    t91 = (~(t90));
    t92 = *((unsigned int *)t47);
    t93 = (~(t92));
    t94 = *((unsigned int *)t56);
    t95 = (~(t94));
    t96 = *((unsigned int *)t54);
    t97 = (~(t96));
    t65 = (t91 & t93);
    t68 = (t95 & t97);
    t98 = (~(t65));
    t99 = (~(t68));
    t100 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t100 & t98);
    t101 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t101 & t99);
    t102 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t102 & t98);
    t103 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t103 & t99);
    goto LAB51;

LAB52:    xsi_set_current_line(48, ng0);
    t59 = ((char*)((ng6)));
    t60 = (t0 + 2360);
    xsi_vlogvar_assign_value(t60, t59, 0, 0, 1);
    goto LAB54;

LAB57:    t13 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB58;

LAB59:    xsi_set_current_line(50, ng0);
    t15 = ((char*)((ng6)));
    t20 = (t0 + 2040);
    xsi_vlogvar_assign_value(t20, t15, 0, 0, 1);
    goto LAB61;

}


extern void work_m_00000000000058963879_2841500007_init()
{
	static char *pe[] = {(void *)Always_32_0};
	xsi_register_didat("work_m_00000000000058963879_2841500007", "isim/tb_isim_beh.exe.sim/work/m_00000000000058963879_2841500007.didat");
	xsi_register_executes(pe);
}
