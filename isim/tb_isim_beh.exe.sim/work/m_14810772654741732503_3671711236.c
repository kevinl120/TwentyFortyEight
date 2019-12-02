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
static const char *ng0 = "/home/ise/VirtualBox_Shared/TwentyFortyEight/tb.v";
static int ng1[] = {0, 0};
static int ng2[] = {16, 0};
static const char *ng3 = "%d %d %d %d";
static int ng4[] = {20, 0};
static int ng5[] = {40, 0};
static int ng6[] = {60, 0};
static int ng7[] = {4, 0};
static int ng8[] = {1, 0};
static int ng9[] = {500, 0};
static const char *ng10 = "starting board";
static int ng11[] = {8, 0};
static const char *ng12 = "move %d";
static int ng13[] = {50, 0};
static const char *ng14 = "score: %d";
static const char *ng15 = "------------------------------";
static int ng16[] = {200, 0};
static int ng17[] = {7, 0};



static int sp_displayBoard(char *t1, char *t2)
{
    char t7[8];
    char t14[8];
    char t25[8];
    char t27[8];
    char t38[8];
    char t40[8];
    char t42[8];
    char t53[8];
    char t55[8];
    char t57[8];
    char t68[8];
    char t70[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t39;
    char *t41;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t54;
    char *t56;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    char *t69;
    char *t71;
    char *t72;

LAB0:    t0 = 1;
    xsi_set_current_line(42, ng0);

LAB2:    xsi_set_current_line(43, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t1 + 3000);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(44, ng0);
    xsi_set_current_line(44, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t1 + 2680);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);

LAB3:    t3 = (t1 + 2680);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng2)));
    memset(t7, 0, 8);
    xsi_vlog_signed_less(t7, 32, t5, 32, t6, 32);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB4;

LAB5:    t0 = 0;

LAB1:    return t0;
LAB4:    xsi_set_current_line(44, ng0);

LAB6:    xsi_set_current_line(45, ng0);
    t15 = (t1 + 3160);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t1 + 3160);
    t19 = (t18 + 72U);
    t20 = *((char **)t19);
    t21 = (t1 + 2680);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = ((char*)((ng4)));
    memset(t25, 0, 8);
    xsi_vlog_signed_multiply(t25, 32, t23, 32, t24, 32);
    t26 = ((char*)((ng4)));
    xsi_vlog_get_indexed_partselect(t14, 20, t17, ((int*)(t20)), 2, t25, 32, 1, t26, 32, 1, 1);
    t28 = (t1 + 3160);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t31 = (t1 + 3160);
    t32 = (t31 + 72U);
    t33 = *((char **)t32);
    t34 = (t1 + 2680);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t37 = ((char*)((ng4)));
    memset(t38, 0, 8);
    xsi_vlog_signed_multiply(t38, 32, t36, 32, t37, 32);
    t39 = ((char*)((ng4)));
    memset(t40, 0, 8);
    xsi_vlog_signed_add(t40, 32, t38, 32, t39, 32);
    t41 = ((char*)((ng4)));
    xsi_vlog_get_indexed_partselect(t27, 20, t30, ((int*)(t33)), 2, t40, 32, 1, t41, 32, 1, 1);
    t43 = (t1 + 3160);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    t46 = (t1 + 3160);
    t47 = (t46 + 72U);
    t48 = *((char **)t47);
    t49 = (t1 + 2680);
    t50 = (t49 + 56U);
    t51 = *((char **)t50);
    t52 = ((char*)((ng4)));
    memset(t53, 0, 8);
    xsi_vlog_signed_multiply(t53, 32, t51, 32, t52, 32);
    t54 = ((char*)((ng5)));
    memset(t55, 0, 8);
    xsi_vlog_signed_add(t55, 32, t53, 32, t54, 32);
    t56 = ((char*)((ng4)));
    xsi_vlog_get_indexed_partselect(t42, 20, t45, ((int*)(t48)), 2, t55, 32, 1, t56, 32, 1, 1);
    t58 = (t1 + 3160);
    t59 = (t58 + 56U);
    t60 = *((char **)t59);
    t61 = (t1 + 3160);
    t62 = (t61 + 72U);
    t63 = *((char **)t62);
    t64 = (t1 + 2680);
    t65 = (t64 + 56U);
    t66 = *((char **)t65);
    t67 = ((char*)((ng4)));
    memset(t68, 0, 8);
    xsi_vlog_signed_multiply(t68, 32, t66, 32, t67, 32);
    t69 = ((char*)((ng6)));
    memset(t70, 0, 8);
    xsi_vlog_signed_add(t70, 32, t68, 32, t69, 32);
    t71 = ((char*)((ng4)));
    xsi_vlog_get_indexed_partselect(t57, 20, t60, ((int*)(t63)), 2, t70, 32, 1, t71, 32, 1, 1);
    t72 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng3, 5, t72, (char)118, t14, 20, (char)118, t27, 20, (char)118, t42, 20, (char)118, t57, 20);
    xsi_set_current_line(44, ng0);
    t3 = (t1 + 2680);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng7)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t5, 32, t6, 32);
    t8 = (t1 + 2680);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 32);
    goto LAB3;

}

static void Initial_60_0(char *t0)
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

LAB0:    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(60, ng0);

LAB4:    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 3880);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 6368);
    *((int *)t8) = t7;

LAB6:    t9 = (t0 + 6368);
    if (*((int *)t9) > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(72, ng0);

LAB16:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 3880);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB17;
    goto LAB1;

LAB7:    xsi_set_current_line(70, ng0);
    t10 = (t0 + 3880);
    xsi_process_wait(t10, 10000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(70, ng0);
    t12 = (t0 + 2200);
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
    t32 = (t0 + 2200);
    xsi_vlogvar_assign_value(t32, t11, 0, 0, 1);
    t2 = (t0 + 6368);
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

LAB17:    xsi_set_current_line(72, ng0);
    t3 = (t0 + 2200);
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
    t15 = (t0 + 2200);
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

static void Initial_75_1(char *t0)
{
    char t23[8];
    char t26[8];
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
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t24;
    unsigned int t25;

LAB0:    t1 = (t0 + 4320U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(75, ng0);

LAB4:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 4640);
    *((int *)t2) = 1;
    t3 = (t0 + 4352);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 6372);
    *((int *)t8) = t7;

LAB6:    t9 = (t0 + 6372);
    if (*((int *)t9) > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(78, ng0);
    xsi_vlogfile_write(1, 0, 0, ng10, 1, t0);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    t2 = (t0 + 4128);
    t8 = (t0 + 848);
    t9 = xsi_create_subprogram_invocation(t2, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t9);
    t10 = (t0 + 3160);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 320);

LAB12:    t11 = (t0 + 4224);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t7 = ((int  (*)(char *, char *))t18)(t0, t12);

LAB14:    if (t7 != 0)
        goto LAB15;

LAB10:    t12 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t12);

LAB11:    t19 = (t0 + 4224);
    t20 = *((char **)t19);
    t19 = (t0 + 848);
    t21 = (t0 + 4128);
    t22 = 0;
    xsi_delete_subprogram_invocation(t19, t20, t0, t21, t22);
    xsi_set_current_line(81, ng0);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB16:    t2 = (t0 + 2840);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = ((char*)((ng11)));
    memset(t23, 0, 8);
    xsi_vlog_signed_leq(t23, 32, t8, 32, t9, 32);
    t10 = (t23 + 4);
    t4 = *((unsigned int *)t10);
    t5 = (~(t4));
    t6 = *((unsigned int *)t23);
    t24 = (t6 & t5);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(91, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

LAB7:    xsi_set_current_line(77, ng0);
    t10 = (t0 + 4656);
    *((int *)t10) = 1;
    t11 = (t0 + 4352);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    t2 = (t0 + 6372);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB6;

LAB13:;
LAB15:    t11 = (t0 + 4320U);
    *((char **)t11) = &&LAB12;
    goto LAB1;

LAB17:    xsi_set_current_line(81, ng0);

LAB19:    xsi_set_current_line(82, ng0);
    t11 = (t0 + 2840);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng7)));
    memset(t26, 0, 8);
    xsi_vlog_signed_mod(t26, 32, t13, 32, t14, 32);
    t15 = (t0 + 2360);
    xsi_vlogvar_assign_value(t15, t26, 0, 0, 2);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 2840);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = ((char*)((ng7)));
    memset(t23, 0, 8);
    xsi_vlog_signed_mod(t23, 32, t8, 32, t9, 32);
    xsi_vlogfile_write(1, 0, 0, ng12, 2, t0, (char)119, t23, 32);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 6376);
    *((int *)t8) = t7;

LAB20:    t9 = (t0 + 6376);
    if (*((int *)t9) > 0)
        goto LAB21;

LAB22:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    t2 = (t0 + 4128);
    t8 = (t0 + 848);
    t9 = xsi_create_subprogram_invocation(t2, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t9);
    t10 = (t0 + 3160);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 320);

LAB26:    t11 = (t0 + 4224);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t7 = ((int  (*)(char *, char *))t18)(t0, t12);

LAB28:    if (t7 != 0)
        goto LAB29;

LAB24:    t12 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t12);

LAB25:    t19 = (t0 + 4224);
    t20 = *((char **)t19);
    t19 = (t0 + 848);
    t21 = (t0 + 4128);
    t22 = 0;
    xsi_delete_subprogram_invocation(t19, t20, t0, t21, t22);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 1640U);
    t3 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng14, 2, t0, (char)118, t3, 21);
    xsi_set_current_line(87, ng0);
    xsi_vlogfile_write(1, 0, 0, ng15, 1, t0);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 2840);
    t8 = (t3 + 56U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng17)));
    memset(t23, 0, 8);
    xsi_vlog_signed_multiply(t23, 32, t9, 32, t10, 32);
    memset(t26, 0, 8);
    xsi_vlog_signed_add(t26, 32, t2, 32, t23, 32);
    t11 = (t26 + 4);
    t4 = *((unsigned int *)t11);
    t5 = (~(t4));
    t6 = *((unsigned int *)t26);
    t7 = (t6 & t5);
    t12 = (t0 + 6380);
    *((int *)t12) = t7;

LAB30:    t13 = (t0 + 6380);
    if (*((int *)t13) > 0)
        goto LAB31;

LAB32:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 2840);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = ((char*)((ng8)));
    memset(t23, 0, 8);
    xsi_vlog_signed_add(t23, 32, t8, 32, t9, 32);
    t10 = (t0 + 2840);
    xsi_vlogvar_assign_value(t10, t23, 0, 0, 32);
    goto LAB16;

LAB21:    xsi_set_current_line(84, ng0);
    t10 = (t0 + 4672);
    *((int *)t10) = 1;
    t11 = (t0 + 4352);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB23:    t2 = (t0 + 6376);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB20;

LAB27:;
LAB29:    t11 = (t0 + 4320U);
    *((char **)t11) = &&LAB26;
    goto LAB1;

LAB31:    xsi_set_current_line(88, ng0);
    t14 = (t0 + 4688);
    *((int *)t14) = 1;
    t15 = (t0 + 4352);
    *((char **)t15) = t14;
    *((char **)t1) = &&LAB33;
    goto LAB1;

LAB33:    t2 = (t0 + 6380);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB30;

}


extern void work_m_14810772654741732503_3671711236_init()
{
	static char *pe[] = {(void *)Initial_60_0,(void *)Initial_75_1};
	static char *se[] = {(void *)sp_displayBoard};
	xsi_register_didat("work_m_14810772654741732503_3671711236", "isim/tb_isim_beh.exe.sim/work/m_14810772654741732503_3671711236.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
