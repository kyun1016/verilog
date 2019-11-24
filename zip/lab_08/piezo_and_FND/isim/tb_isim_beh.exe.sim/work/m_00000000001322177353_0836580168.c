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
static const char *ng0 = "D:/Xilinx/zip/lab_08/piezo_and_FND/a.v";
static unsigned int ng1[] = {128U, 0U};
static unsigned int ng2[] = {96U, 0U};
static int ng3[] = {0, 0};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {64U, 0U};
static unsigned int ng6[] = {218U, 0U};
static unsigned int ng7[] = {32U, 0U};
static unsigned int ng8[] = {242U, 0U};
static unsigned int ng9[] = {16U, 0U};
static unsigned int ng10[] = {102U, 0U};
static unsigned int ng11[] = {8U, 0U};
static unsigned int ng12[] = {182U, 0U};
static unsigned int ng13[] = {4U, 0U};
static unsigned int ng14[] = {190U, 0U};
static unsigned int ng15[] = {2U, 0U};
static unsigned int ng16[] = {224U, 0U};
static unsigned int ng17[] = {1U, 0U};
static unsigned int ng18[] = {254U, 0U};
static int ng19[] = {2, 0};



static void Always_48_0(char *t0)
{
    char t6[8];
    char t30[8];
    char t35[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t31;
    char *t32;
    unsigned int t33;
    char *t34;
    char *t36;

LAB0:    t1 = (t0 + 5024U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 5344);
    *((int *)t2) = 1;
    t3 = (t0 + 5056);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(48, ng0);

LAB5:    xsi_set_current_line(49, ng0);
    t4 = (t0 + 3384U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 3384U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB27;

LAB24:    if (t18 != 0)
        goto LAB26;

LAB25:    *((unsigned int *)t6) = 1;

LAB27:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB28;

LAB29:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 3384U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng7)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB45;

LAB42:    if (t18 != 0)
        goto LAB44;

LAB43:    *((unsigned int *)t6) = 1;

LAB45:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB46;

LAB47:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 3384U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng9)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB63;

LAB60:    if (t18 != 0)
        goto LAB62;

LAB61:    *((unsigned int *)t6) = 1;

LAB63:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB64;

LAB65:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 3384U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng11)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB81;

LAB78:    if (t18 != 0)
        goto LAB80;

LAB79:    *((unsigned int *)t6) = 1;

LAB81:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB82;

LAB83:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 3384U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng13)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB99;

LAB96:    if (t18 != 0)
        goto LAB98;

LAB97:    *((unsigned int *)t6) = 1;

LAB99:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB100;

LAB101:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 3384U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng15)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB117;

LAB114:    if (t18 != 0)
        goto LAB116;

LAB115:    *((unsigned int *)t6) = 1;

LAB117:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB118;

LAB119:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 3384U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng17)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB135;

LAB132:    if (t18 != 0)
        goto LAB134;

LAB133:    *((unsigned int *)t6) = 1;

LAB135:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB136;

LAB137:    xsi_set_current_line(121, ng0);

LAB150:    xsi_set_current_line(122, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(123, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3944);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(124, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 3784);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);

LAB138:
LAB120:
LAB102:
LAB84:
LAB66:
LAB48:
LAB30:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(49, ng0);

LAB13:    xsi_set_current_line(50, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 3784);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 8);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 4104);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 472);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    xsi_vlog_signed_greatereq(t6, 32, t4, 32, t7, 32);
    t5 = (t6 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 4104);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 4104);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);

LAB16:    goto LAB12;

LAB14:    xsi_set_current_line(51, ng0);

LAB17:    xsi_set_current_line(52, ng0);
    t8 = (t0 + 3944);
    t21 = (t8 + 56U);
    t22 = *((char **)t21);
    memset(t30, 0, 8);
    t28 = (t22 + 4);
    t14 = *((unsigned int *)t28);
    t15 = (~(t14));
    t16 = *((unsigned int *)t22);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB21;

LAB19:    if (*((unsigned int *)t28) == 0)
        goto LAB18;

LAB20:    t29 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t29) = 1;

LAB21:    t31 = (t30 + 4);
    t32 = (t22 + 4);
    t19 = *((unsigned int *)t22);
    t20 = (~(t19));
    *((unsigned int *)t30) = t20;
    *((unsigned int *)t31) = 0;
    if (*((unsigned int *)t32) != 0)
        goto LAB23;

LAB22:    t27 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t27 & 1U);
    t33 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t33 & 1U);
    t34 = (t0 + 3944);
    xsi_vlogvar_assign_value(t34, t30, 0, 0, 1);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB16;

LAB18:    *((unsigned int *)t30) = 1;
    goto LAB21;

LAB23:    t23 = *((unsigned int *)t30);
    t24 = *((unsigned int *)t32);
    *((unsigned int *)t30) = (t23 | t24);
    t25 = *((unsigned int *)t31);
    t26 = *((unsigned int *)t32);
    *((unsigned int *)t31) = (t25 | t26);
    goto LAB22;

LAB26:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB27;

LAB28:    xsi_set_current_line(58, ng0);

LAB31:    xsi_set_current_line(59, ng0);
    t21 = ((char*)((ng6)));
    t22 = (t0 + 3784);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 8);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 4104);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 608);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    xsi_vlog_signed_greatereq(t6, 32, t4, 32, t7, 32);
    t5 = (t6 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB32;

LAB33:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 4104);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 4104);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);

LAB34:    goto LAB30;

LAB32:    xsi_set_current_line(60, ng0);

LAB35:    xsi_set_current_line(61, ng0);
    t8 = (t0 + 3944);
    t21 = (t8 + 56U);
    t22 = *((char **)t21);
    memset(t30, 0, 8);
    t28 = (t22 + 4);
    t14 = *((unsigned int *)t28);
    t15 = (~(t14));
    t16 = *((unsigned int *)t22);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB39;

LAB37:    if (*((unsigned int *)t28) == 0)
        goto LAB36;

LAB38:    t29 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t29) = 1;

LAB39:    t31 = (t30 + 4);
    t32 = (t22 + 4);
    t19 = *((unsigned int *)t22);
    t20 = (~(t19));
    *((unsigned int *)t30) = t20;
    *((unsigned int *)t31) = 0;
    if (*((unsigned int *)t32) != 0)
        goto LAB41;

LAB40:    t27 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t27 & 1U);
    t33 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t33 & 1U);
    t34 = (t0 + 3944);
    xsi_vlogvar_assign_value(t34, t30, 0, 0, 1);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB34;

LAB36:    *((unsigned int *)t30) = 1;
    goto LAB39;

LAB41:    t23 = *((unsigned int *)t30);
    t24 = *((unsigned int *)t32);
    *((unsigned int *)t30) = (t23 | t24);
    t25 = *((unsigned int *)t31);
    t26 = *((unsigned int *)t32);
    *((unsigned int *)t31) = (t25 | t26);
    goto LAB40;

LAB44:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB45;

LAB46:    xsi_set_current_line(67, ng0);

LAB49:    xsi_set_current_line(68, ng0);
    t21 = ((char*)((ng8)));
    t22 = (t0 + 3784);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 8);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 4104);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 744);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    xsi_vlog_signed_greatereq(t6, 32, t4, 32, t7, 32);
    t5 = (t6 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB50;

LAB51:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 4104);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 4104);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);

LAB52:    goto LAB48;

LAB50:    xsi_set_current_line(69, ng0);

LAB53:    xsi_set_current_line(70, ng0);
    t8 = (t0 + 3944);
    t21 = (t8 + 56U);
    t22 = *((char **)t21);
    memset(t30, 0, 8);
    t28 = (t22 + 4);
    t14 = *((unsigned int *)t28);
    t15 = (~(t14));
    t16 = *((unsigned int *)t22);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB57;

LAB55:    if (*((unsigned int *)t28) == 0)
        goto LAB54;

LAB56:    t29 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t29) = 1;

LAB57:    t31 = (t30 + 4);
    t32 = (t22 + 4);
    t19 = *((unsigned int *)t22);
    t20 = (~(t19));
    *((unsigned int *)t30) = t20;
    *((unsigned int *)t31) = 0;
    if (*((unsigned int *)t32) != 0)
        goto LAB59;

LAB58:    t27 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t27 & 1U);
    t33 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t33 & 1U);
    t34 = (t0 + 3944);
    xsi_vlogvar_assign_value(t34, t30, 0, 0, 1);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB52;

LAB54:    *((unsigned int *)t30) = 1;
    goto LAB57;

LAB59:    t23 = *((unsigned int *)t30);
    t24 = *((unsigned int *)t32);
    *((unsigned int *)t30) = (t23 | t24);
    t25 = *((unsigned int *)t31);
    t26 = *((unsigned int *)t32);
    *((unsigned int *)t31) = (t25 | t26);
    goto LAB58;

LAB62:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB63;

LAB64:    xsi_set_current_line(76, ng0);

LAB67:    xsi_set_current_line(77, ng0);
    t21 = ((char*)((ng10)));
    t22 = (t0 + 3784);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 8);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 4104);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 880);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    xsi_vlog_signed_greatereq(t6, 32, t4, 32, t7, 32);
    t5 = (t6 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB68;

LAB69:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 4104);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 4104);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);

LAB70:    goto LAB66;

LAB68:    xsi_set_current_line(78, ng0);

LAB71:    xsi_set_current_line(79, ng0);
    t8 = (t0 + 3944);
    t21 = (t8 + 56U);
    t22 = *((char **)t21);
    memset(t30, 0, 8);
    t28 = (t22 + 4);
    t14 = *((unsigned int *)t28);
    t15 = (~(t14));
    t16 = *((unsigned int *)t22);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB75;

LAB73:    if (*((unsigned int *)t28) == 0)
        goto LAB72;

LAB74:    t29 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t29) = 1;

LAB75:    t31 = (t30 + 4);
    t32 = (t22 + 4);
    t19 = *((unsigned int *)t22);
    t20 = (~(t19));
    *((unsigned int *)t30) = t20;
    *((unsigned int *)t31) = 0;
    if (*((unsigned int *)t32) != 0)
        goto LAB77;

LAB76:    t27 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t27 & 1U);
    t33 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t33 & 1U);
    t34 = (t0 + 3944);
    xsi_vlogvar_assign_value(t34, t30, 0, 0, 1);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB70;

LAB72:    *((unsigned int *)t30) = 1;
    goto LAB75;

LAB77:    t23 = *((unsigned int *)t30);
    t24 = *((unsigned int *)t32);
    *((unsigned int *)t30) = (t23 | t24);
    t25 = *((unsigned int *)t31);
    t26 = *((unsigned int *)t32);
    *((unsigned int *)t31) = (t25 | t26);
    goto LAB76;

LAB80:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB81;

LAB82:    xsi_set_current_line(85, ng0);

LAB85:    xsi_set_current_line(86, ng0);
    t21 = ((char*)((ng12)));
    t22 = (t0 + 3784);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 8);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 4104);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1016);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    xsi_vlog_signed_greatereq(t6, 32, t4, 32, t7, 32);
    t5 = (t6 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB86;

LAB87:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 4104);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 4104);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);

LAB88:    goto LAB84;

LAB86:    xsi_set_current_line(87, ng0);

LAB89:    xsi_set_current_line(88, ng0);
    t8 = (t0 + 3944);
    t21 = (t8 + 56U);
    t22 = *((char **)t21);
    memset(t30, 0, 8);
    t28 = (t22 + 4);
    t14 = *((unsigned int *)t28);
    t15 = (~(t14));
    t16 = *((unsigned int *)t22);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB93;

LAB91:    if (*((unsigned int *)t28) == 0)
        goto LAB90;

LAB92:    t29 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t29) = 1;

LAB93:    t31 = (t30 + 4);
    t32 = (t22 + 4);
    t19 = *((unsigned int *)t22);
    t20 = (~(t19));
    *((unsigned int *)t30) = t20;
    *((unsigned int *)t31) = 0;
    if (*((unsigned int *)t32) != 0)
        goto LAB95;

LAB94:    t27 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t27 & 1U);
    t33 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t33 & 1U);
    t34 = (t0 + 3944);
    xsi_vlogvar_assign_value(t34, t30, 0, 0, 1);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB88;

LAB90:    *((unsigned int *)t30) = 1;
    goto LAB93;

LAB95:    t23 = *((unsigned int *)t30);
    t24 = *((unsigned int *)t32);
    *((unsigned int *)t30) = (t23 | t24);
    t25 = *((unsigned int *)t31);
    t26 = *((unsigned int *)t32);
    *((unsigned int *)t31) = (t25 | t26);
    goto LAB94;

LAB98:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB99;

LAB100:    xsi_set_current_line(94, ng0);

LAB103:    xsi_set_current_line(95, ng0);
    t21 = ((char*)((ng14)));
    t22 = (t0 + 3784);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 8);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 4104);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1152);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    xsi_vlog_signed_greatereq(t6, 32, t4, 32, t7, 32);
    t5 = (t6 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB104;

LAB105:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 4104);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 4104);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);

LAB106:    goto LAB102;

LAB104:    xsi_set_current_line(96, ng0);

LAB107:    xsi_set_current_line(97, ng0);
    t8 = (t0 + 3944);
    t21 = (t8 + 56U);
    t22 = *((char **)t21);
    memset(t30, 0, 8);
    t28 = (t22 + 4);
    t14 = *((unsigned int *)t28);
    t15 = (~(t14));
    t16 = *((unsigned int *)t22);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB111;

LAB109:    if (*((unsigned int *)t28) == 0)
        goto LAB108;

LAB110:    t29 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t29) = 1;

LAB111:    t31 = (t30 + 4);
    t32 = (t22 + 4);
    t19 = *((unsigned int *)t22);
    t20 = (~(t19));
    *((unsigned int *)t30) = t20;
    *((unsigned int *)t31) = 0;
    if (*((unsigned int *)t32) != 0)
        goto LAB113;

LAB112:    t27 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t27 & 1U);
    t33 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t33 & 1U);
    t34 = (t0 + 3944);
    xsi_vlogvar_assign_value(t34, t30, 0, 0, 1);
    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB106;

LAB108:    *((unsigned int *)t30) = 1;
    goto LAB111;

LAB113:    t23 = *((unsigned int *)t30);
    t24 = *((unsigned int *)t32);
    *((unsigned int *)t30) = (t23 | t24);
    t25 = *((unsigned int *)t31);
    t26 = *((unsigned int *)t32);
    *((unsigned int *)t31) = (t25 | t26);
    goto LAB112;

LAB116:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB117;

LAB118:    xsi_set_current_line(103, ng0);

LAB121:    xsi_set_current_line(104, ng0);
    t21 = ((char*)((ng16)));
    t22 = (t0 + 3784);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 8);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 4104);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1288);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    xsi_vlog_signed_greatereq(t6, 32, t4, 32, t7, 32);
    t5 = (t6 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB122;

LAB123:    xsi_set_current_line(110, ng0);
    t2 = (t0 + 4104);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 4104);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);

LAB124:    goto LAB120;

LAB122:    xsi_set_current_line(105, ng0);

LAB125:    xsi_set_current_line(106, ng0);
    t8 = (t0 + 3944);
    t21 = (t8 + 56U);
    t22 = *((char **)t21);
    memset(t30, 0, 8);
    t28 = (t22 + 4);
    t14 = *((unsigned int *)t28);
    t15 = (~(t14));
    t16 = *((unsigned int *)t22);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB129;

LAB127:    if (*((unsigned int *)t28) == 0)
        goto LAB126;

LAB128:    t29 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t29) = 1;

LAB129:    t31 = (t30 + 4);
    t32 = (t22 + 4);
    t19 = *((unsigned int *)t22);
    t20 = (~(t19));
    *((unsigned int *)t30) = t20;
    *((unsigned int *)t31) = 0;
    if (*((unsigned int *)t32) != 0)
        goto LAB131;

LAB130:    t27 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t27 & 1U);
    t33 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t33 & 1U);
    t34 = (t0 + 3944);
    xsi_vlogvar_assign_value(t34, t30, 0, 0, 1);
    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB124;

LAB126:    *((unsigned int *)t30) = 1;
    goto LAB129;

LAB131:    t23 = *((unsigned int *)t30);
    t24 = *((unsigned int *)t32);
    *((unsigned int *)t30) = (t23 | t24);
    t25 = *((unsigned int *)t31);
    t26 = *((unsigned int *)t32);
    *((unsigned int *)t31) = (t25 | t26);
    goto LAB130;

LAB134:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB135;

LAB136:    xsi_set_current_line(112, ng0);

LAB139:    xsi_set_current_line(113, ng0);
    t21 = ((char*)((ng18)));
    t22 = (t0 + 3784);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 8);
    xsi_set_current_line(114, ng0);
    t2 = (t0 + 4104);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 472);
    t7 = *((char **)t5);
    t5 = ((char*)((ng19)));
    memset(t6, 0, 8);
    xsi_vlog_signed_divide(t6, 32, t7, 32, t5, 32);
    memset(t30, 0, 8);
    xsi_vlog_signed_greatereq(t30, 32, t4, 32, t6, 32);
    t8 = (t30 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t30);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB140;

LAB141:    xsi_set_current_line(119, ng0);
    t2 = (t0 + 4104);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 4104);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);

LAB142:    goto LAB138;

LAB140:    xsi_set_current_line(114, ng0);

LAB143:    xsi_set_current_line(115, ng0);
    t21 = (t0 + 3944);
    t22 = (t21 + 56U);
    t28 = *((char **)t22);
    memset(t35, 0, 8);
    t29 = (t28 + 4);
    t14 = *((unsigned int *)t29);
    t15 = (~(t14));
    t16 = *((unsigned int *)t28);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB147;

LAB145:    if (*((unsigned int *)t29) == 0)
        goto LAB144;

LAB146:    t31 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t31) = 1;

LAB147:    t32 = (t35 + 4);
    t34 = (t28 + 4);
    t19 = *((unsigned int *)t28);
    t20 = (~(t19));
    *((unsigned int *)t35) = t20;
    *((unsigned int *)t32) = 0;
    if (*((unsigned int *)t34) != 0)
        goto LAB149;

LAB148:    t27 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t27 & 1U);
    t33 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t33 & 1U);
    t36 = (t0 + 3944);
    xsi_vlogvar_assign_value(t36, t35, 0, 0, 1);
    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB142;

LAB144:    *((unsigned int *)t35) = 1;
    goto LAB147;

LAB149:    t23 = *((unsigned int *)t35);
    t24 = *((unsigned int *)t34);
    *((unsigned int *)t35) = (t23 | t24);
    t25 = *((unsigned int *)t32);
    t26 = *((unsigned int *)t34);
    *((unsigned int *)t32) = (t25 | t26);
    goto LAB148;

}


extern void work_m_00000000001322177353_0836580168_init()
{
	static char *pe[] = {(void *)Always_48_0};
	xsi_register_didat("work_m_00000000001322177353_0836580168", "isim/tb_isim_beh.exe.sim/work/m_00000000001322177353_0836580168.didat");
	xsi_register_executes(pe);
}
