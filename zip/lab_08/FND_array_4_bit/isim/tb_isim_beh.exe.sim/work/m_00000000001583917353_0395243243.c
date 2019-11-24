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
static const char *ng0 = "D:/Xilinx/zip/lab_08/FND_array_4_bit/FND_array.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {4, 0};
static unsigned int ng4[] = {7U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {252U, 0U};
static unsigned int ng7[] = {11U, 0U};
static int ng8[] = {2, 0};
static unsigned int ng9[] = {13U, 0U};
static int ng10[] = {3, 0};
static unsigned int ng11[] = {14U, 0U};



static void Always_74_0(char *t0)
{
    char t4[8];
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
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    int t31;

LAB0:    t1 = (t0 + 3968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 4288);
    *((int *)t2) = 1;
    t3 = (t0 + 4000);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(74, ng0);

LAB5:    xsi_set_current_line(75, ng0);
    t5 = (t0 + 1208U);
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
    t23 = (t4 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(78, ng0);

LAB16:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng2)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t6, 32);
    t12 = (t0 + 3048);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 32);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_signed_greatereq(t4, 32, t5, 32, t6, 32);
    t12 = (t4 + 4);
    t7 = *((unsigned int *)t12);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB17;

LAB18:
LAB19:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);

LAB20:    t6 = ((char*)((ng1)));
    t31 = xsi_vlog_signed_case_compare(t5, 32, t6, 32);
    if (t31 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng2)));
    t31 = xsi_vlog_signed_case_compare(t5, 32, t2, 32);
    if (t31 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng8)));
    t31 = xsi_vlog_signed_case_compare(t5, 32, t2, 32);
    if (t31 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng10)));
    t31 = xsi_vlog_signed_case_compare(t5, 32, t2, 32);
    if (t31 == 1)
        goto LAB27;

LAB28:
LAB29:
LAB14:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB11:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB10;

LAB12:    xsi_set_current_line(75, ng0);

LAB15:    xsi_set_current_line(76, ng0);
    t29 = ((char*)((ng1)));
    t30 = (t0 + 3048);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 32);
    goto LAB14;

LAB17:    xsi_set_current_line(80, ng0);
    t13 = ((char*)((ng1)));
    t14 = (t0 + 3048);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 32);
    goto LAB19;

LAB21:    xsi_set_current_line(82, ng0);

LAB30:    xsi_set_current_line(83, ng0);
    t12 = ((char*)((ng4)));
    t13 = (t0 + 2248);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 4);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t6 + 4);
    t7 = *((unsigned int *)t12);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB31;

LAB32:    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);

LAB33:    goto LAB29;

LAB23:    xsi_set_current_line(87, ng0);

LAB34:    xsi_set_current_line(88, ng0);
    t3 = ((char*)((ng7)));
    t6 = (t0 + 2248);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 4);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 2088);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);
    goto LAB29;

LAB25:    xsi_set_current_line(91, ng0);

LAB35:    xsi_set_current_line(92, ng0);
    t3 = ((char*)((ng9)));
    t6 = (t0 + 2248);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 4);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 2088);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);
    goto LAB29;

LAB27:    xsi_set_current_line(95, ng0);

LAB36:    xsi_set_current_line(96, ng0);
    t3 = ((char*)((ng11)));
    t6 = (t0 + 2248);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 4);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t0 + 2088);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);
    goto LAB29;

LAB31:    xsi_set_current_line(84, ng0);
    t13 = ((char*)((ng5)));
    t14 = (t0 + 2088);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 8);
    goto LAB33;

}


extern void work_m_00000000001583917353_0395243243_init()
{
	static char *pe[] = {(void *)Always_74_0};
	xsi_register_didat("work_m_00000000001583917353_0395243243", "isim/tb_isim_beh.exe.sim/work/m_00000000001583917353_0395243243.didat");
	xsi_register_executes(pe);
}
