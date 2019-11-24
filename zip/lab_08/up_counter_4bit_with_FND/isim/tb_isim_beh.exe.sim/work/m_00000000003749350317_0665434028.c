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
static const char *ng0 = "D:/Xilinx/zip/lab_08/up_counter_4bit_with_FND/up_counter.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {252U, 0U};
static unsigned int ng5[] = {1U, 0U};
static unsigned int ng6[] = {96U, 0U};
static unsigned int ng7[] = {2U, 0U};
static unsigned int ng8[] = {218U, 0U};
static unsigned int ng9[] = {3U, 0U};
static unsigned int ng10[] = {242U, 0U};
static unsigned int ng11[] = {4U, 0U};
static unsigned int ng12[] = {102U, 0U};
static unsigned int ng13[] = {5U, 0U};
static unsigned int ng14[] = {182U, 0U};
static unsigned int ng15[] = {6U, 0U};
static unsigned int ng16[] = {190U, 0U};
static unsigned int ng17[] = {7U, 0U};
static unsigned int ng18[] = {224U, 0U};
static unsigned int ng19[] = {8U, 0U};
static unsigned int ng20[] = {254U, 0U};
static unsigned int ng21[] = {9U, 0U};
static unsigned int ng22[] = {246U, 0U};
static unsigned int ng23[] = {10U, 0U};
static unsigned int ng24[] = {238U, 0U};
static unsigned int ng25[] = {11U, 0U};
static unsigned int ng26[] = {62U, 0U};
static unsigned int ng27[] = {12U, 0U};
static unsigned int ng28[] = {26U, 0U};
static unsigned int ng29[] = {13U, 0U};
static unsigned int ng30[] = {122U, 0U};
static unsigned int ng31[] = {14U, 0U};
static unsigned int ng32[] = {158U, 0U};
static unsigned int ng33[] = {15U, 0U};
static unsigned int ng34[] = {142U, 0U};



static void Always_27_0(char *t0)
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

LAB0:    t1 = (t0 + 2688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 3008);
    *((int *)t2) = 1;
    t3 = (t0 + 2720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(27, ng0);

LAB5:    xsi_set_current_line(28, ng0);
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

LAB13:    xsi_set_current_line(30, ng0);

LAB15:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng2)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 4, t6, 32);
    t12 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 4, 0LL);
    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);

LAB16:    t6 = ((char*)((ng3)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 4, t6, 4);
    if (t31 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng5)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t31 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng7)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t31 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng9)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t31 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng11)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t31 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng13)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t31 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng15)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t31 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng17)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t31 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng19)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t31 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng21)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t31 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng23)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t31 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng25)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t31 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng27)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t31 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng29)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t31 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng31)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t31 == 1)
        goto LAB45;

LAB46:    t2 = ((char*)((ng33)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t31 == 1)
        goto LAB47;

LAB48:
LAB50:
LAB49:    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);

LAB51:
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

LAB12:    xsi_set_current_line(29, ng0);
    t29 = ((char*)((ng1)));
    t30 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 4, 0LL);
    goto LAB14;

LAB17:    xsi_set_current_line(33, ng0);
    t12 = ((char*)((ng4)));
    t13 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 8, 0LL);
    goto LAB51;

LAB19:    xsi_set_current_line(34, ng0);
    t3 = ((char*)((ng6)));
    t6 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 8, 0LL);
    goto LAB51;

LAB21:    xsi_set_current_line(35, ng0);
    t3 = ((char*)((ng8)));
    t6 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 8, 0LL);
    goto LAB51;

LAB23:    xsi_set_current_line(36, ng0);
    t3 = ((char*)((ng10)));
    t6 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 8, 0LL);
    goto LAB51;

LAB25:    xsi_set_current_line(37, ng0);
    t3 = ((char*)((ng12)));
    t6 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 8, 0LL);
    goto LAB51;

LAB27:    xsi_set_current_line(38, ng0);
    t3 = ((char*)((ng14)));
    t6 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 8, 0LL);
    goto LAB51;

LAB29:    xsi_set_current_line(39, ng0);
    t3 = ((char*)((ng16)));
    t6 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 8, 0LL);
    goto LAB51;

LAB31:    xsi_set_current_line(40, ng0);
    t3 = ((char*)((ng18)));
    t6 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 8, 0LL);
    goto LAB51;

LAB33:    xsi_set_current_line(41, ng0);
    t3 = ((char*)((ng20)));
    t6 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 8, 0LL);
    goto LAB51;

LAB35:    xsi_set_current_line(42, ng0);
    t3 = ((char*)((ng22)));
    t6 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 8, 0LL);
    goto LAB51;

LAB37:    xsi_set_current_line(43, ng0);
    t3 = ((char*)((ng24)));
    t6 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 8, 0LL);
    goto LAB51;

LAB39:    xsi_set_current_line(44, ng0);
    t3 = ((char*)((ng26)));
    t6 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 8, 0LL);
    goto LAB51;

LAB41:    xsi_set_current_line(45, ng0);
    t3 = ((char*)((ng28)));
    t6 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 8, 0LL);
    goto LAB51;

LAB43:    xsi_set_current_line(46, ng0);
    t3 = ((char*)((ng30)));
    t6 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 8, 0LL);
    goto LAB51;

LAB45:    xsi_set_current_line(47, ng0);
    t3 = ((char*)((ng32)));
    t6 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 8, 0LL);
    goto LAB51;

LAB47:    xsi_set_current_line(48, ng0);
    t3 = ((char*)((ng34)));
    t6 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 8, 0LL);
    goto LAB51;

}


extern void work_m_00000000003749350317_0665434028_init()
{
	static char *pe[] = {(void *)Always_27_0};
	xsi_register_didat("work_m_00000000003749350317_0665434028", "isim/tb_isim_beh.exe.sim/work/m_00000000003749350317_0665434028.didat");
	xsi_register_executes(pe);
}
