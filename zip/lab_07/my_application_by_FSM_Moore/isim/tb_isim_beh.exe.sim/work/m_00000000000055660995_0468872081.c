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
static const char *ng0 = "C:/Users/kyun/Desktop/lab_07/my_application_by_FSM_Moore/my_applicaton_FSM.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {3U, 0U};
static unsigned int ng7[] = {4U, 0U};



static void Always_38_0(char *t0)
{
    char t19[8];
    char t25[8];
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
    int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;

LAB0:    t1 = (t0 + 4648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 5712);
    *((int *)t2) = 1;
    t3 = (t0 + 4680);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(38, ng0);

LAB5:    xsi_set_current_line(39, ng0);
    t4 = (t0 + 2768);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 2928);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 3);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 3088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(41, ng0);

LAB9:    xsi_set_current_line(42, ng0);
    t6 = (t0 + 2768);
    t7 = (t6 + 56U);
    t13 = *((char **)t7);

LAB10:    t14 = ((char*)((ng1)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 3, t14, 3);
    if (t15 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 3, t2, 3);
    if (t15 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 3, t2, 3);
    if (t15 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 3, t2, 3);
    if (t15 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 3, t2, 3);
    if (t15 == 1)
        goto LAB19;

LAB20:
LAB22:
LAB21:    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB23:    goto LAB8;

LAB11:    xsi_set_current_line(43, ng0);

LAB24:    xsi_set_current_line(44, ng0);
    t16 = (t0 + 2608);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t20 = (t0 + 2608);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t23 = ((char*)((ng2)));
    xsi_vlog_generic_get_index_select_value(t19, 32, t18, t22, 2, t23, 32, 1);
    t24 = ((char*)((ng3)));
    memset(t25, 0, 8);
    t26 = (t19 + 4);
    t27 = (t24 + 4);
    t28 = *((unsigned int *)t19);
    t29 = *((unsigned int *)t24);
    t30 = (t28 ^ t29);
    t31 = *((unsigned int *)t26);
    t32 = *((unsigned int *)t27);
    t33 = (t31 ^ t32);
    t34 = (t30 | t33);
    t35 = *((unsigned int *)t26);
    t36 = *((unsigned int *)t27);
    t37 = (t35 | t36);
    t38 = (~(t37));
    t39 = (t34 & t38);
    if (t39 != 0)
        goto LAB28;

LAB25:    if (t37 != 0)
        goto LAB27;

LAB26:    *((unsigned int *)t25) = 1;

LAB28:    t41 = (t25 + 4);
    t42 = *((unsigned int *)t41);
    t43 = (~(t42));
    t44 = *((unsigned int *)t25);
    t45 = (t44 & t43);
    t46 = (t45 != 0);
    if (t46 > 0)
        goto LAB29;

LAB30:
LAB31:    goto LAB23;

LAB13:    xsi_set_current_line(46, ng0);

LAB32:    xsi_set_current_line(47, ng0);
    t3 = (t0 + 2608);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 2608);
    t7 = (t6 + 72U);
    t14 = *((char **)t7);
    t16 = ((char*)((ng2)));
    xsi_vlog_generic_get_index_select_value(t19, 32, t5, t14, 2, t16, 32, 1);
    t17 = ((char*)((ng2)));
    memset(t25, 0, 8);
    t18 = (t19 + 4);
    t20 = (t17 + 4);
    t8 = *((unsigned int *)t19);
    t9 = *((unsigned int *)t17);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t18);
    t12 = *((unsigned int *)t20);
    t28 = (t11 ^ t12);
    t29 = (t10 | t28);
    t30 = *((unsigned int *)t18);
    t31 = *((unsigned int *)t20);
    t32 = (t30 | t31);
    t33 = (~(t32));
    t34 = (t29 & t33);
    if (t34 != 0)
        goto LAB36;

LAB33:    if (t32 != 0)
        goto LAB35;

LAB34:    *((unsigned int *)t25) = 1;

LAB36:    t22 = (t25 + 4);
    t35 = *((unsigned int *)t22);
    t36 = (~(t35));
    t37 = *((unsigned int *)t25);
    t38 = (t37 & t36);
    t39 = (t38 != 0);
    if (t39 > 0)
        goto LAB37;

LAB38:
LAB39:    goto LAB23;

LAB15:    xsi_set_current_line(49, ng0);

LAB40:    xsi_set_current_line(50, ng0);
    t3 = (t0 + 2608);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 2608);
    t7 = (t6 + 72U);
    t14 = *((char **)t7);
    t16 = ((char*)((ng2)));
    xsi_vlog_generic_get_index_select_value(t19, 32, t5, t14, 2, t16, 32, 1);
    t17 = ((char*)((ng3)));
    memset(t25, 0, 8);
    t18 = (t19 + 4);
    t20 = (t17 + 4);
    t8 = *((unsigned int *)t19);
    t9 = *((unsigned int *)t17);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t18);
    t12 = *((unsigned int *)t20);
    t28 = (t11 ^ t12);
    t29 = (t10 | t28);
    t30 = *((unsigned int *)t18);
    t31 = *((unsigned int *)t20);
    t32 = (t30 | t31);
    t33 = (~(t32));
    t34 = (t29 & t33);
    if (t34 != 0)
        goto LAB44;

LAB41:    if (t32 != 0)
        goto LAB43;

LAB42:    *((unsigned int *)t25) = 1;

LAB44:    t22 = (t25 + 4);
    t35 = *((unsigned int *)t22);
    t36 = (~(t35));
    t37 = *((unsigned int *)t25);
    t38 = (t37 & t36);
    t39 = (t38 != 0);
    if (t39 > 0)
        goto LAB45;

LAB46:    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB47:    goto LAB23;

LAB17:    xsi_set_current_line(53, ng0);

LAB48:    xsi_set_current_line(54, ng0);
    t3 = (t0 + 2608);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 2608);
    t7 = (t6 + 72U);
    t14 = *((char **)t7);
    t16 = ((char*)((ng2)));
    xsi_vlog_generic_get_index_select_value(t19, 32, t5, t14, 2, t16, 32, 1);
    t17 = ((char*)((ng3)));
    memset(t25, 0, 8);
    t18 = (t19 + 4);
    t20 = (t17 + 4);
    t8 = *((unsigned int *)t19);
    t9 = *((unsigned int *)t17);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t18);
    t12 = *((unsigned int *)t20);
    t28 = (t11 ^ t12);
    t29 = (t10 | t28);
    t30 = *((unsigned int *)t18);
    t31 = *((unsigned int *)t20);
    t32 = (t30 | t31);
    t33 = (~(t32));
    t34 = (t29 & t33);
    if (t34 != 0)
        goto LAB52;

LAB49:    if (t32 != 0)
        goto LAB51;

LAB50:    *((unsigned int *)t25) = 1;

LAB52:    t22 = (t25 + 4);
    t35 = *((unsigned int *)t22);
    t36 = (~(t35));
    t37 = *((unsigned int *)t25);
    t38 = (t37 & t36);
    t39 = (t38 != 0);
    if (t39 > 0)
        goto LAB53;

LAB54:    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB55:    goto LAB23;

LAB19:    xsi_set_current_line(57, ng0);

LAB56:    xsi_set_current_line(58, ng0);
    t3 = (t0 + 2608);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 2608);
    t7 = (t6 + 72U);
    t14 = *((char **)t7);
    t16 = ((char*)((ng2)));
    xsi_vlog_generic_get_index_select_value(t19, 32, t5, t14, 2, t16, 32, 1);
    t17 = ((char*)((ng2)));
    memset(t25, 0, 8);
    t18 = (t19 + 4);
    t20 = (t17 + 4);
    t8 = *((unsigned int *)t19);
    t9 = *((unsigned int *)t17);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t18);
    t12 = *((unsigned int *)t20);
    t28 = (t11 ^ t12);
    t29 = (t10 | t28);
    t30 = *((unsigned int *)t18);
    t31 = *((unsigned int *)t20);
    t32 = (t30 | t31);
    t33 = (~(t32));
    t34 = (t29 & t33);
    if (t34 != 0)
        goto LAB60;

LAB57:    if (t32 != 0)
        goto LAB59;

LAB58:    *((unsigned int *)t25) = 1;

LAB60:    t22 = (t25 + 4);
    t35 = *((unsigned int *)t22);
    t36 = (~(t35));
    t37 = *((unsigned int *)t25);
    t38 = (t37 & t36);
    t39 = (t38 != 0);
    if (t39 > 0)
        goto LAB61;

LAB62:    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB63:    goto LAB23;

LAB27:    t40 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB28;

LAB29:    xsi_set_current_line(44, ng0);
    t47 = ((char*)((ng4)));
    t48 = (t0 + 2928);
    xsi_vlogvar_assign_value(t48, t47, 0, 0, 3);
    goto LAB31;

LAB35:    t21 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB36;

LAB37:    xsi_set_current_line(47, ng0);
    t23 = ((char*)((ng5)));
    t24 = (t0 + 2928);
    xsi_vlogvar_assign_value(t24, t23, 0, 0, 3);
    goto LAB39;

LAB43:    t21 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB44;

LAB45:    xsi_set_current_line(50, ng0);
    t23 = ((char*)((ng6)));
    t24 = (t0 + 2928);
    xsi_vlogvar_assign_value(t24, t23, 0, 0, 3);
    goto LAB47;

LAB51:    t21 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB52;

LAB53:    xsi_set_current_line(54, ng0);
    t23 = ((char*)((ng7)));
    t24 = (t0 + 2928);
    xsi_vlogvar_assign_value(t24, t23, 0, 0, 3);
    goto LAB55;

LAB59:    t21 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB60;

LAB61:    xsi_set_current_line(58, ng0);
    t23 = ((char*)((ng5)));
    t24 = (t0 + 2928);
    xsi_vlogvar_assign_value(t24, t23, 0, 0, 3);
    goto LAB63;

}

static void Always_68_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 4896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 5728);
    *((int *)t2) = 1;
    t3 = (t0 + 4928);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(68, ng0);

LAB5:    xsi_set_current_line(69, ng0);
    t4 = (t0 + 2928);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 2768);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 3, 0LL);
    goto LAB2;

}

static void Always_75_2(char *t0)
{
    char t4[8];
    char t43[8];
    char t45[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
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
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t44;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;

LAB0:    t1 = (t0 + 5144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 5744);
    *((int *)t2) = 1;
    t3 = (t0 + 5176);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(75, ng0);

LAB5:    xsi_set_current_line(76, ng0);
    t5 = (t0 + 1888U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    *((unsigned int *)t4) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB11;

LAB10:    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = (t0 + 3248);
    xsi_vlogvar_wait_assign_value(t23, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 1888U);
    t3 = *((char **)t2);
    t2 = (t0 + 3248);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t6);
    t9 = (t7 & t8);
    *((unsigned int *)t4) = t9;
    t12 = (t3 + 4);
    t13 = (t6 + 4);
    t14 = (t4 + 4);
    t10 = *((unsigned int *)t12);
    t11 = *((unsigned int *)t13);
    t15 = (t10 | t11);
    *((unsigned int *)t14) = t15;
    t16 = *((unsigned int *)t14);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB12;

LAB13:
LAB14:    t38 = (t0 + 3568);
    xsi_vlogvar_wait_assign_value(t38, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 2048U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB18;

LAB16:    if (*((unsigned int *)t2) == 0)
        goto LAB15;

LAB17:    t5 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t5) = 1;

LAB18:    t6 = (t4 + 4);
    t12 = (t3 + 4);
    t15 = *((unsigned int *)t3);
    t16 = (~(t15));
    *((unsigned int *)t4) = t16;
    *((unsigned int *)t6) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB20;

LAB19:    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 1U);
    t22 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t22 & 1U);
    t13 = (t0 + 3408);
    xsi_vlogvar_wait_assign_value(t13, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 2048U);
    t3 = *((char **)t2);
    t2 = (t0 + 3408);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t6);
    t9 = (t7 & t8);
    *((unsigned int *)t4) = t9;
    t12 = (t3 + 4);
    t13 = (t6 + 4);
    t14 = (t4 + 4);
    t10 = *((unsigned int *)t12);
    t11 = *((unsigned int *)t13);
    t15 = (t10 | t11);
    *((unsigned int *)t14) = t15;
    t16 = *((unsigned int *)t14);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB21;

LAB22:
LAB23:    t38 = (t0 + 3728);
    xsi_vlogvar_wait_assign_value(t38, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 3568);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3728);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t13);
    t9 = (t7 ^ t8);
    *((unsigned int *)t4) = t9;
    t14 = (t5 + 4);
    t23 = (t13 + 4);
    t24 = (t4 + 4);
    t10 = *((unsigned int *)t14);
    t11 = *((unsigned int *)t23);
    t15 = (t10 | t11);
    *((unsigned int *)t24) = t15;
    t16 = *((unsigned int *)t24);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB24;

LAB25:
LAB26:    t38 = (t4 + 4);
    t20 = *((unsigned int *)t38);
    t21 = (~(t20));
    t22 = *((unsigned int *)t4);
    t25 = (t22 & t21);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB27;

LAB28:
LAB29:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB11:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB10;

LAB12:    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t14);
    *((unsigned int *)t4) = (t18 | t19);
    t23 = (t3 + 4);
    t24 = (t6 + 4);
    t20 = *((unsigned int *)t3);
    t21 = (~(t20));
    t22 = *((unsigned int *)t23);
    t25 = (~(t22));
    t26 = *((unsigned int *)t6);
    t27 = (~(t26));
    t28 = *((unsigned int *)t24);
    t29 = (~(t28));
    t30 = (t21 & t25);
    t31 = (t27 & t29);
    t32 = (~(t30));
    t33 = (~(t31));
    t34 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t34 & t32);
    t35 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t35 & t33);
    t36 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t36 & t32);
    t37 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t37 & t33);
    goto LAB14;

LAB15:    *((unsigned int *)t4) = 1;
    goto LAB18;

LAB20:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t12);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t6);
    t20 = *((unsigned int *)t12);
    *((unsigned int *)t6) = (t19 | t20);
    goto LAB19;

LAB21:    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t14);
    *((unsigned int *)t4) = (t18 | t19);
    t23 = (t3 + 4);
    t24 = (t6 + 4);
    t20 = *((unsigned int *)t3);
    t21 = (~(t20));
    t22 = *((unsigned int *)t23);
    t25 = (~(t22));
    t26 = *((unsigned int *)t6);
    t27 = (~(t26));
    t28 = *((unsigned int *)t24);
    t29 = (~(t28));
    t30 = (t21 & t25);
    t31 = (t27 & t29);
    t32 = (~(t30));
    t33 = (~(t31));
    t34 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t34 & t32);
    t35 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t35 & t33);
    t36 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t36 & t32);
    t37 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t37 & t33);
    goto LAB23;

LAB24:    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t24);
    *((unsigned int *)t4) = (t18 | t19);
    goto LAB26;

LAB27:    xsi_set_current_line(79, ng0);

LAB30:    xsi_set_current_line(80, ng0);
    t39 = (t0 + 3568);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    t42 = (t41 + 4);
    t27 = *((unsigned int *)t42);
    t28 = (~(t27));
    t29 = *((unsigned int *)t41);
    t32 = (t29 & t28);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB31;

LAB32:    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2608);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t43, 0, 8);
    t12 = (t43 + 4);
    t13 = (t6 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (t7 >> 0);
    *((unsigned int *)t43) = t8;
    t9 = *((unsigned int *)t13);
    t10 = (t9 >> 0);
    *((unsigned int *)t12) = t10;
    t11 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t11 & 7U);
    t15 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t15 & 7U);
    xsi_vlogtype_concat(t4, 4, 4, 2U, t43, 3, t2, 1);
    t14 = (t0 + 2608);
    xsi_vlogvar_wait_assign_value(t14, t4, 0, 0, 4, 0LL);

LAB33:    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB29;

LAB31:    xsi_set_current_line(80, ng0);
    t44 = ((char*)((ng4)));
    t46 = (t0 + 2608);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    memset(t45, 0, 8);
    t49 = (t45 + 4);
    t50 = (t48 + 4);
    t34 = *((unsigned int *)t48);
    t35 = (t34 >> 0);
    *((unsigned int *)t45) = t35;
    t36 = *((unsigned int *)t50);
    t37 = (t36 >> 0);
    *((unsigned int *)t49) = t37;
    t51 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t51 & 7U);
    t52 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t52 & 7U);
    xsi_vlogtype_concat(t43, 4, 4, 2U, t45, 3, t44, 1);
    t53 = (t0 + 2608);
    xsi_vlogvar_wait_assign_value(t53, t43, 0, 0, 4, 0LL);
    goto LAB33;

}

static void Always_87_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 5392U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 5760);
    *((int *)t2) = 1;
    t3 = (t0 + 5424);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(87, ng0);

LAB5:    xsi_set_current_line(88, ng0);
    t4 = (t0 + 2768);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t7, 3);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB15;

LAB16:
LAB18:
LAB17:    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB19:    goto LAB2;

LAB7:    xsi_set_current_line(89, ng0);

LAB20:    xsi_set_current_line(90, ng0);
    t9 = ((char*)((ng2)));
    t10 = (t0 + 2448);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 1);
    goto LAB19;

LAB9:    xsi_set_current_line(92, ng0);

LAB21:    xsi_set_current_line(93, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB19;

LAB11:    xsi_set_current_line(95, ng0);

LAB22:    xsi_set_current_line(96, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB19;

LAB13:    xsi_set_current_line(98, ng0);

LAB23:    xsi_set_current_line(99, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB19;

LAB15:    xsi_set_current_line(101, ng0);

LAB24:    xsi_set_current_line(102, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 2448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB19;

}


extern void work_m_00000000000055660995_0468872081_init()
{
	static char *pe[] = {(void *)Always_38_0,(void *)Always_68_1,(void *)Always_75_2,(void *)Always_87_3};
	xsi_register_didat("work_m_00000000000055660995_0468872081", "isim/tb_isim_beh.exe.sim/work/m_00000000000055660995_0468872081.didat");
	xsi_register_executes(pe);
}
