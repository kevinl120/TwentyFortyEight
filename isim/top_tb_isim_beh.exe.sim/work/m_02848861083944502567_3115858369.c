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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/ise/VirtualBox_Shared/TwentyFortyEight/top_tb.v";
static int ng1[] = {0, 0};
static int ng2[] = {4, 0};
static int ng3[] = {1, 0};
static int ng4[] = {500, 0};
static int ng5[] = {8, 0};
static int ng6[] = {30, 0};
static int ng7[] = {50, 0};
static int ng8[] = {227, 0};
static int ng9[] = {7, 0};
static int ng10[] = {32, 0};



static void Initial_51_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;

LAB0:    t1 = (t0 + 3640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(51, ng0);

LAB4:    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 3448);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    goto LAB1;

}

static void Initial_69_1(char *t0)
{
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    int t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;

LAB0:    t1 = (t0 + 3888U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(69, ng0);

LAB4:    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 3696);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 6192);
    *((int *)t8) = t7;

LAB6:    t9 = (t0 + 6192);
    if (*((int *)t9) > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(81, ng0);

LAB16:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 3696);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB17;
    goto LAB1;

LAB7:    xsi_set_current_line(79, ng0);
    t10 = (t0 + 3696);
    xsi_process_wait(t10, 10000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(79, ng0);
    t12 = (t0 + 1288);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memset(t11, 0, 8);
    t15 = (t14 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t14);
    t19 = (t18 & t17);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB13;

LAB11:    if (*((unsigned int *)t15) == 0)
        goto LAB10;

LAB12:    t21 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t21) = 1;

LAB13:    t22 = (t11 + 4);
    t23 = (t14 + 4);
    t24 = *((unsigned int *)t14);
    t25 = (~(t24));
    *((unsigned int *)t11) = t25;
    *((unsigned int *)t22) = 0;
    if (*((unsigned int *)t23) != 0)
        goto LAB15;

LAB14:    t30 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t30 & 1U);
    t31 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t31 & 1U);
    t32 = (t0 + 1288);
    xsi_vlogvar_assign_value(t32, t11, 0, 0, 1);
    t2 = (t0 + 6192);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB6;

LAB10:    *((unsigned int *)t11) = 1;
    goto LAB13;

LAB15:    t26 = *((unsigned int *)t11);
    t27 = *((unsigned int *)t23);
    *((unsigned int *)t11) = (t26 | t27);
    t28 = *((unsigned int *)t22);
    t29 = *((unsigned int *)t23);
    *((unsigned int *)t22) = (t28 | t29);
    goto LAB14;

LAB17:    xsi_set_current_line(81, ng0);
    t3 = (t0 + 1288);
    t8 = (t3 + 56U);
    t9 = *((char **)t8);
    memset(t11, 0, 8);
    t10 = (t9 + 4);
    t4 = *((unsigned int *)t10);
    t5 = (~(t4));
    t6 = *((unsigned int *)t9);
    t16 = (t6 & t5);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB21;

LAB19:    if (*((unsigned int *)t10) == 0)
        goto LAB18;

LAB20:    t12 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t12) = 1;

LAB21:    t13 = (t11 + 4);
    t14 = (t9 + 4);
    t18 = *((unsigned int *)t9);
    t19 = (~(t18));
    *((unsigned int *)t11) = t19;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB23;

LAB22:    t27 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t27 & 1U);
    t28 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t28 & 1U);
    t15 = (t0 + 1288);
    xsi_vlogvar_assign_value(t15, t11, 0, 0, 1);
    goto LAB16;

LAB18:    *((unsigned int *)t11) = 1;
    goto LAB21;

LAB23:    t20 = *((unsigned int *)t11);
    t24 = *((unsigned int *)t14);
    *((unsigned int *)t11) = (t20 | t24);
    t25 = *((unsigned int *)t13);
    t26 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t25 | t26);
    goto LAB22;

LAB24:    goto LAB1;

}

static void Initial_84_2(char *t0)
{
    char t12[8];
    char t16[8];
    char *t1;
    char *t2;
    char *t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    int t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t17;
    char *t18;
    char *t19;

LAB0:    t1 = (t0 + 4136U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(84, ng0);

LAB4:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 4456);
    *((int *)t2) = 1;
    t3 = (t0 + 4168);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 6196);
    *((int *)t8) = t7;

LAB6:    t9 = (t0 + 6196);
    if (*((int *)t9) > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(88, ng0);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB10:    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = ((char*)((ng5)));
    memset(t12, 0, 8);
    xsi_vlog_signed_leq(t12, 32, t8, 32, t9, 32);
    t10 = (t12 + 4);
    t4 = *((unsigned int *)t10);
    t5 = (~(t4));
    t6 = *((unsigned int *)t12);
    t13 = (t6 & t5);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 6212);
    *((int *)t8) = t7;

LAB26:    t9 = (t0 + 6212);
    if (*((int *)t9) > 0)
        goto LAB27;

LAB28:    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 6216);
    *((int *)t8) = t7;

LAB30:    t9 = (t0 + 6216);
    if (*((int *)t9) > 0)
        goto LAB31;

LAB32:    xsi_set_current_line(101, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

LAB7:    xsi_set_current_line(86, ng0);
    t10 = (t0 + 4472);
    *((int *)t10) = 1;
    t11 = (t0 + 4168);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    t2 = (t0 + 6196);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB6;

LAB11:    xsi_set_current_line(88, ng0);

LAB13:    xsi_set_current_line(89, ng0);
    t11 = ((char*)((ng3)));
    t15 = (t0 + 2088);
    xsi_vlogvar_assign_value(t15, t11, 0, 0, 1);
    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 6200);
    *((int *)t8) = t7;

LAB14:    t9 = (t0 + 6200);
    if (*((int *)t9) > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 6204);
    *((int *)t8) = t7;

LAB18:    t9 = (t0 + 6204);
    if (*((int *)t9) > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2728);
    t8 = (t3 + 56U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng9)));
    memset(t12, 0, 8);
    xsi_vlog_signed_multiply(t12, 32, t9, 32, t10, 32);
    memset(t16, 0, 8);
    xsi_vlog_signed_add(t16, 32, t2, 32, t12, 32);
    t11 = (t16 + 4);
    t4 = *((unsigned int *)t11);
    t5 = (~(t4));
    t6 = *((unsigned int *)t16);
    t7 = (t6 & t5);
    t15 = (t0 + 6208);
    *((int *)t15) = t7;

LAB22:    t17 = (t0 + 6208);
    if (*((int *)t17) > 0)
        goto LAB23;

LAB24:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = ((char*)((ng3)));
    memset(t12, 0, 8);
    xsi_vlog_signed_add(t12, 32, t8, 32, t9, 32);
    t10 = (t0 + 2728);
    xsi_vlogvar_assign_value(t10, t12, 0, 0, 32);
    goto LAB10;

LAB15:    xsi_set_current_line(90, ng0);
    t10 = (t0 + 4488);
    *((int *)t10) = 1;
    t11 = (t0 + 4168);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB17;
    goto LAB1;

LAB17:    t2 = (t0 + 6200);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB14;

LAB19:    xsi_set_current_line(92, ng0);
    t10 = (t0 + 4504);
    *((int *)t10) = 1;
    t11 = (t0 + 4168);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB21;
    goto LAB1;

LAB21:    t2 = (t0 + 6204);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB18;

LAB23:    xsi_set_current_line(93, ng0);
    t18 = (t0 + 4520);
    *((int *)t18) = 1;
    t19 = (t0 + 4168);
    *((char **)t19) = t18;
    *((char **)t1) = &&LAB25;
    goto LAB1;

LAB25:    t2 = (t0 + 6208);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB22;

LAB27:    xsi_set_current_line(97, ng0);
    t10 = (t0 + 4536);
    *((int *)t10) = 1;
    t11 = (t0 + 4168);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB29;
    goto LAB1;

LAB29:    t2 = (t0 + 6212);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB26;

LAB31:    xsi_set_current_line(99, ng0);
    t10 = (t0 + 4552);
    *((int *)t10) = 1;
    t11 = (t0 + 4168);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB33;
    goto LAB1;

LAB33:    t2 = (t0 + 6216);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB30;

}


extern void work_m_02848861083944502567_3115858369_init()
{
	static char *pe[] = {(void *)Initial_51_0,(void *)Initial_69_1,(void *)Initial_84_2};
	xsi_register_didat("work_m_02848861083944502567_3115858369", "isim/top_tb_isim_beh.exe.sim/work/m_02848861083944502567_3115858369.didat");
	xsi_register_executes(pe);
}
