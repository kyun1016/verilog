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
static const char *ng0 = "C:/Xilinx/zip/lab_07/my_application_new_moore/my_app.v";
static unsigned int ng1[] = {11U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {0U, 0U};



static void Always_28_0(char *t0)
{
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
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
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;

LAB0:    t1 = (t0 + 3488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 4056);
    *((int *)t2) = 1;
    t3 = (t0 + 3520);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(28, ng0);

LAB5:    xsi_set_current_line(29, ng0);
    t4 = (t0 + 1928);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB9;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB9:    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB12:    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(30, ng0);
    t30 = ((char*)((ng2)));
    t31 = (t0 + 1768);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 1);
    goto LAB12;

}

static void Always_37_1(char *t0)
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

LAB0:    t1 = (t0 + 3736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 4072);
    *((int *)t2) = 1;
    t3 = (t0 + 3768);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(37, ng0);

LAB5:    xsi_set_current_line(38, ng0);
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
    t23 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t23, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 2088);
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
LAB14:    t38 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t38, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1368U);
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
    t13 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t13, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 2248);
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
LAB23:    t38 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t38, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2568);
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

LAB27:    xsi_set_current_line(41, ng0);

LAB30:    xsi_set_current_line(42, ng0);
    t39 = (t0 + 2408);
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

LAB32:    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1928);
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
    t14 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t14, t4, 0, 0, 4, 0LL);

LAB33:    goto LAB29;

LAB31:    xsi_set_current_line(42, ng0);
    t44 = ((char*)((ng2)));
    t46 = (t0 + 1928);
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
    t53 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t53, t43, 0, 0, 4, 0LL);
    goto LAB33;

}


extern void work_m_00000000002842942162_0468872081_init()
{
	static char *pe[] = {(void *)Always_28_0,(void *)Always_37_1};
	xsi_register_didat("work_m_00000000002842942162_0468872081", "isim/tb_isim_beh.exe.sim/work/m_00000000002842942162_0468872081.didat");
	xsi_register_executes(pe);
}
