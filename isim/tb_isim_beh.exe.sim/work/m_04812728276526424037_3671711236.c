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
static const char *ng8 = "------------------------------";
static int ng9[] = {1, 0};
static int ng10[] = {500, 0};
static const char *ng11 = "starting board";
static const char *ng12 = "move 1";
static int ng13[] = {233, 0};
static int ng14[] = {2, 0};
static const char *ng15 = "move 2";
static int ng16[] = {212, 0};
static int ng17[] = {3, 0};
static const char *ng18 = "move 3";
static int ng19[] = {255, 0};
static const char *ng20 = "move 0";
static int ng21[] = {256, 0};
static int ng22[] = {523, 0};
static int ng23[] = {257, 0};
static int ng24[] = {355, 0};



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
    xsi_set_current_line(41, ng0);

LAB2:    xsi_set_current_line(42, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t1 + 2840);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(43, ng0);
    xsi_set_current_line(43, ng0);
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

LAB5:    xsi_set_current_line(46, ng0);
    t3 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng8, 1, t3);
    t0 = 0;

LAB1:    return t0;
LAB4:    xsi_set_current_line(43, ng0);

LAB6:    xsi_set_current_line(44, ng0);
    t15 = (t1 + 3000);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t1 + 3000);
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
    t28 = (t1 + 3000);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t31 = (t1 + 3000);
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
    t43 = (t1 + 3000);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    t46 = (t1 + 3000);
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
    t58 = (t1 + 3000);
    t59 = (t58 + 56U);
    t60 = *((char **)t59);
    t61 = (t1 + 3000);
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
    xsi_set_current_line(43, ng0);
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

LAB0:    t1 = (t0 + 3912U);
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
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 3720);
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
    t8 = (t0 + 6384);
    *((int *)t8) = t7;

LAB6:    t9 = (t0 + 6384);
    if (*((int *)t9) > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(72, ng0);

LAB16:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 3720);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB17;
    goto LAB1;

LAB7:    xsi_set_current_line(70, ng0);
    t10 = (t0 + 3720);
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
    t2 = (t0 + 6384);
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

LAB0:    t1 = (t0 + 4160U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(75, ng0);

LAB4:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 4480);
    *((int *)t2) = 1;
    t3 = (t0 + 4192);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 6388);
    *((int *)t8) = t7;

LAB6:    t9 = (t0 + 6388);
    if (*((int *)t9) > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(78, ng0);
    xsi_vlogfile_write(1, 0, 0, ng11, 1, t0);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    t2 = (t0 + 3968);
    t8 = (t0 + 848);
    t9 = xsi_create_subprogram_invocation(t2, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t9);
    t10 = (t0 + 3000);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 320);

LAB12:    t11 = (t0 + 4064);
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

LAB11:    t19 = (t0 + 4064);
    t20 = *((char **)t19);
    t19 = (t0 + 848);
    t21 = (t0 + 3968);
    t22 = 0;
    xsi_delete_subprogram_invocation(t19, t20, t0, t21, t22);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(81, ng0);
    xsi_vlogfile_write(1, 0, 0, ng12, 1, t0);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    t2 = (t0 + 3968);
    t8 = (t0 + 848);
    t9 = xsi_create_subprogram_invocation(t2, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t9);
    t10 = (t0 + 3000);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 320);

LAB18:    t11 = (t0 + 4064);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t7 = ((int  (*)(char *, char *))t18)(t0, t12);

LAB20:    if (t7 != 0)
        goto LAB21;

LAB16:    t12 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t12);

LAB17:    t19 = (t0 + 4064);
    t20 = *((char **)t19);
    t19 = (t0 + 848);
    t21 = (t0 + 3968);
    t22 = 0;
    xsi_delete_subprogram_invocation(t19, t20, t0, t21, t22);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 6392);
    *((int *)t8) = t7;

LAB22:    t9 = (t0 + 6392);
    if (*((int *)t9) > 0)
        goto LAB23;

LAB24:    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 2360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(85, ng0);
    xsi_vlogfile_write(1, 0, 0, ng15, 1, t0);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    t2 = (t0 + 3968);
    t8 = (t0 + 848);
    t9 = xsi_create_subprogram_invocation(t2, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t9);
    t10 = (t0 + 3000);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 320);

LAB28:    t11 = (t0 + 4064);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t7 = ((int  (*)(char *, char *))t18)(t0, t12);

LAB30:    if (t7 != 0)
        goto LAB31;

LAB26:    t12 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t12);

LAB27:    t19 = (t0 + 4064);
    t20 = *((char **)t19);
    t19 = (t0 + 848);
    t21 = (t0 + 3968);
    t22 = 0;
    xsi_delete_subprogram_invocation(t19, t20, t0, t21, t22);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 6396);
    *((int *)t8) = t7;

LAB32:    t9 = (t0 + 6396);
    if (*((int *)t9) > 0)
        goto LAB33;

LAB34:    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 2360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(89, ng0);
    xsi_vlogfile_write(1, 0, 0, ng18, 1, t0);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    t2 = (t0 + 3968);
    t8 = (t0 + 848);
    t9 = xsi_create_subprogram_invocation(t2, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t9);
    t10 = (t0 + 3000);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 320);

LAB38:    t11 = (t0 + 4064);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t7 = ((int  (*)(char *, char *))t18)(t0, t12);

LAB40:    if (t7 != 0)
        goto LAB41;

LAB36:    t12 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t12);

LAB37:    t19 = (t0 + 4064);
    t20 = *((char **)t19);
    t19 = (t0 + 848);
    t21 = (t0 + 3968);
    t22 = 0;
    xsi_delete_subprogram_invocation(t19, t20, t0, t21, t22);
    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 6400);
    *((int *)t8) = t7;

LAB42:    t9 = (t0 + 6400);
    if (*((int *)t9) > 0)
        goto LAB43;

LAB44:    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(93, ng0);
    xsi_vlogfile_write(1, 0, 0, ng20, 1, t0);
    xsi_set_current_line(94, ng0);
    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    t2 = (t0 + 3968);
    t8 = (t0 + 848);
    t9 = xsi_create_subprogram_invocation(t2, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t9);
    t10 = (t0 + 3000);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 320);

LAB48:    t11 = (t0 + 4064);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t7 = ((int  (*)(char *, char *))t18)(t0, t12);

LAB50:    if (t7 != 0)
        goto LAB51;

LAB46:    t12 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t12);

LAB47:    t19 = (t0 + 4064);
    t20 = *((char **)t19);
    t19 = (t0 + 848);
    t21 = (t0 + 3968);
    t22 = 0;
    xsi_delete_subprogram_invocation(t19, t20, t0, t21, t22);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng21)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 6404);
    *((int *)t8) = t7;

LAB52:    t9 = (t0 + 6404);
    if (*((int *)t9) > 0)
        goto LAB53;

LAB54:    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(97, ng0);
    xsi_vlogfile_write(1, 0, 0, ng12, 1, t0);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    t2 = (t0 + 3968);
    t8 = (t0 + 848);
    t9 = xsi_create_subprogram_invocation(t2, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t9);
    t10 = (t0 + 3000);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 320);

LAB58:    t11 = (t0 + 4064);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t7 = ((int  (*)(char *, char *))t18)(t0, t12);

LAB60:    if (t7 != 0)
        goto LAB61;

LAB56:    t12 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t12);

LAB57:    t19 = (t0 + 4064);
    t20 = *((char **)t19);
    t19 = (t0 + 848);
    t21 = (t0 + 3968);
    t22 = 0;
    xsi_delete_subprogram_invocation(t19, t20, t0, t21, t22);
    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng22)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 6408);
    *((int *)t8) = t7;

LAB62:    t9 = (t0 + 6408);
    if (*((int *)t9) > 0)
        goto LAB63;

LAB64:    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 2360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(101, ng0);
    xsi_vlogfile_write(1, 0, 0, ng15, 1, t0);
    xsi_set_current_line(102, ng0);
    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    t2 = (t0 + 3968);
    t8 = (t0 + 848);
    t9 = xsi_create_subprogram_invocation(t2, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t9);
    t10 = (t0 + 3000);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 320);

LAB68:    t11 = (t0 + 4064);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t7 = ((int  (*)(char *, char *))t18)(t0, t12);

LAB70:    if (t7 != 0)
        goto LAB71;

LAB66:    t12 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t12);

LAB67:    t19 = (t0 + 4064);
    t20 = *((char **)t19);
    t19 = (t0 + 848);
    t21 = (t0 + 3968);
    t22 = 0;
    xsi_delete_subprogram_invocation(t19, t20, t0, t21, t22);
    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng23)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 6412);
    *((int *)t8) = t7;

LAB72:    t9 = (t0 + 6412);
    if (*((int *)t9) > 0)
        goto LAB73;

LAB74:    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 2360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(105, ng0);
    xsi_vlogfile_write(1, 0, 0, ng18, 1, t0);
    xsi_set_current_line(106, ng0);
    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    t2 = (t0 + 3968);
    t8 = (t0 + 848);
    t9 = xsi_create_subprogram_invocation(t2, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t9);
    t10 = (t0 + 3000);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 320);

LAB78:    t11 = (t0 + 4064);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t7 = ((int  (*)(char *, char *))t18)(t0, t12);

LAB80:    if (t7 != 0)
        goto LAB81;

LAB76:    t12 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t12);

LAB77:    t19 = (t0 + 4064);
    t20 = *((char **)t19);
    t19 = (t0 + 848);
    t21 = (t0 + 3968);
    t22 = 0;
    xsi_delete_subprogram_invocation(t19, t20, t0, t21, t22);
    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng24)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 6416);
    *((int *)t8) = t7;

LAB82:    t9 = (t0 + 6416);
    if (*((int *)t9) > 0)
        goto LAB83;

LAB84:    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(109, ng0);
    xsi_vlogfile_write(1, 0, 0, ng20, 1, t0);
    xsi_set_current_line(110, ng0);
    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    t2 = (t0 + 3968);
    t8 = (t0 + 848);
    t9 = xsi_create_subprogram_invocation(t2, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t9);
    t10 = (t0 + 3000);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 320);

LAB88:    t11 = (t0 + 4064);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t7 = ((int  (*)(char *, char *))t18)(t0, t12);

LAB90:    if (t7 != 0)
        goto LAB91;

LAB86:    t12 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t12);

LAB87:    t19 = (t0 + 4064);
    t20 = *((char **)t19);
    t19 = (t0 + 848);
    t21 = (t0 + 3968);
    t22 = 0;
    xsi_delete_subprogram_invocation(t19, t20, t0, t21, t22);
    xsi_set_current_line(111, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

LAB7:    xsi_set_current_line(77, ng0);
    t10 = (t0 + 4496);
    *((int *)t10) = 1;
    t11 = (t0 + 4192);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    t2 = (t0 + 6388);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB6;

LAB13:;
LAB15:    t11 = (t0 + 4160U);
    *((char **)t11) = &&LAB12;
    goto LAB1;

LAB19:;
LAB21:    t11 = (t0 + 4160U);
    *((char **)t11) = &&LAB18;
    goto LAB1;

LAB23:    xsi_set_current_line(83, ng0);
    t10 = (t0 + 4512);
    *((int *)t10) = 1;
    t11 = (t0 + 4192);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB25;
    goto LAB1;

LAB25:    t2 = (t0 + 6392);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB22;

LAB29:;
LAB31:    t11 = (t0 + 4160U);
    *((char **)t11) = &&LAB28;
    goto LAB1;

LAB33:    xsi_set_current_line(87, ng0);
    t10 = (t0 + 4528);
    *((int *)t10) = 1;
    t11 = (t0 + 4192);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB35;
    goto LAB1;

LAB35:    t2 = (t0 + 6396);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB32;

LAB39:;
LAB41:    t11 = (t0 + 4160U);
    *((char **)t11) = &&LAB38;
    goto LAB1;

LAB43:    xsi_set_current_line(91, ng0);
    t10 = (t0 + 4544);
    *((int *)t10) = 1;
    t11 = (t0 + 4192);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB45;
    goto LAB1;

LAB45:    t2 = (t0 + 6400);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB42;

LAB49:;
LAB51:    t11 = (t0 + 4160U);
    *((char **)t11) = &&LAB48;
    goto LAB1;

LAB53:    xsi_set_current_line(95, ng0);
    t10 = (t0 + 4560);
    *((int *)t10) = 1;
    t11 = (t0 + 4192);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB55;
    goto LAB1;

LAB55:    t2 = (t0 + 6404);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB52;

LAB59:;
LAB61:    t11 = (t0 + 4160U);
    *((char **)t11) = &&LAB58;
    goto LAB1;

LAB63:    xsi_set_current_line(99, ng0);
    t10 = (t0 + 4576);
    *((int *)t10) = 1;
    t11 = (t0 + 4192);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB65;
    goto LAB1;

LAB65:    t2 = (t0 + 6408);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB62;

LAB69:;
LAB71:    t11 = (t0 + 4160U);
    *((char **)t11) = &&LAB68;
    goto LAB1;

LAB73:    xsi_set_current_line(103, ng0);
    t10 = (t0 + 4592);
    *((int *)t10) = 1;
    t11 = (t0 + 4192);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB75;
    goto LAB1;

LAB75:    t2 = (t0 + 6412);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB72;

LAB79:;
LAB81:    t11 = (t0 + 4160U);
    *((char **)t11) = &&LAB78;
    goto LAB1;

LAB83:    xsi_set_current_line(107, ng0);
    t10 = (t0 + 4608);
    *((int *)t10) = 1;
    t11 = (t0 + 4192);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB85;
    goto LAB1;

LAB85:    t2 = (t0 + 6416);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB82;

LAB89:;
LAB91:    t11 = (t0 + 4160U);
    *((char **)t11) = &&LAB88;
    goto LAB1;

}


extern void work_m_04812728276526424037_3671711236_init()
{
	static char *pe[] = {(void *)Initial_60_0,(void *)Initial_75_1};
	static char *se[] = {(void *)sp_displayBoard};
	xsi_register_didat("work_m_04812728276526424037_3671711236", "isim/tb_isim_beh.exe.sim/work/m_04812728276526424037_3671711236.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
