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
static const char *ng0 = "/home/ise/xilinx/TwentyFortyEight/board_to_string.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {48, 0};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {49, 0};
static unsigned int ng5[] = {2U, 0U};
static int ng6[] = {50, 0};
static unsigned int ng7[] = {3U, 0U};
static int ng8[] = {51, 0};
static unsigned int ng9[] = {4U, 0U};
static int ng10[] = {52, 0};
static unsigned int ng11[] = {5U, 0U};
static int ng12[] = {53, 0};
static unsigned int ng13[] = {6U, 0U};
static int ng14[] = {54, 0};
static unsigned int ng15[] = {7U, 0U};
static int ng16[] = {55, 0};
static unsigned int ng17[] = {8U, 0U};
static int ng18[] = {56, 0};
static unsigned int ng19[] = {9U, 0U};
static int ng20[] = {57, 0};
static int ng21[] = {0, 0};
static int ng22[] = {0, 0, 0, 0};
static int ng23[] = {1, 0};
static int ng24[] = {31, 0, 0, 0};
static int ng25[] = {62, 0};
static int ng26[] = {8, 0};
static int ng27[] = {124, 0};
static int ng28[] = {2, 0};
static int ng29[] = {7, 0};
static int ng30[] = {29, 0};
static int ng31[] = {10, 0};
static int ng32[] = {30, 0};
static int ng33[] = {13, 0};
static int ng34[] = {17, 0};
static int ng35[] = {4, 0};
static int ng36[] = {45, 0};
static int ng37[] = {3, 0};
static int ng38[] = {32, 0};
static int ng39[] = {20, 0};
static int ng40[] = {1000, 0};
static int ng41[] = {100, 0};
static int ng42[] = {18, 0};
static int ng43[] = {1, 0, 0, 0};



static int sp_numToChar(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;

LAB0:    t0 = 1;
    xsi_set_current_line(40, ng0);

LAB2:    xsi_set_current_line(41, ng0);
    t3 = (t1 + 3800);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);

LAB3:    t6 = ((char*)((ng1)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 5, t6, 8);
    if (t7 == 1)
        goto LAB4;

LAB5:    t3 = ((char*)((ng3)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 5, t3, 8);
    if (t7 == 1)
        goto LAB6;

LAB7:    t3 = ((char*)((ng5)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 5, t3, 8);
    if (t7 == 1)
        goto LAB8;

LAB9:    t3 = ((char*)((ng7)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 5, t3, 8);
    if (t7 == 1)
        goto LAB10;

LAB11:    t3 = ((char*)((ng9)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 5, t3, 8);
    if (t7 == 1)
        goto LAB12;

LAB13:    t3 = ((char*)((ng11)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 5, t3, 8);
    if (t7 == 1)
        goto LAB14;

LAB15:    t3 = ((char*)((ng13)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 5, t3, 8);
    if (t7 == 1)
        goto LAB16;

LAB17:    t3 = ((char*)((ng15)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 5, t3, 8);
    if (t7 == 1)
        goto LAB18;

LAB19:    t3 = ((char*)((ng17)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 5, t3, 8);
    if (t7 == 1)
        goto LAB20;

LAB21:    t3 = ((char*)((ng19)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 5, t3, 8);
    if (t7 == 1)
        goto LAB22;

LAB23:
LAB24:    t0 = 0;

LAB1:    return t0;
LAB4:    xsi_set_current_line(42, ng0);
    t8 = ((char*)((ng2)));
    t9 = (t1 + 3640);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 9);
    goto LAB24;

LAB6:    xsi_set_current_line(43, ng0);
    t4 = ((char*)((ng4)));
    t6 = (t1 + 3640);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 9);
    goto LAB24;

LAB8:    xsi_set_current_line(44, ng0);
    t4 = ((char*)((ng6)));
    t6 = (t1 + 3640);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 9);
    goto LAB24;

LAB10:    xsi_set_current_line(45, ng0);
    t4 = ((char*)((ng8)));
    t6 = (t1 + 3640);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 9);
    goto LAB24;

LAB12:    xsi_set_current_line(46, ng0);
    t4 = ((char*)((ng10)));
    t6 = (t1 + 3640);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 9);
    goto LAB24;

LAB14:    xsi_set_current_line(47, ng0);
    t4 = ((char*)((ng12)));
    t6 = (t1 + 3640);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 9);
    goto LAB24;

LAB16:    xsi_set_current_line(48, ng0);
    t4 = ((char*)((ng14)));
    t6 = (t1 + 3640);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 9);
    goto LAB24;

LAB18:    xsi_set_current_line(49, ng0);
    t4 = ((char*)((ng16)));
    t6 = (t1 + 3640);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 9);
    goto LAB24;

LAB20:    xsi_set_current_line(50, ng0);
    t4 = ((char*)((ng18)));
    t6 = (t1 + 3640);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 9);
    goto LAB24;

LAB22:    xsi_set_current_line(51, ng0);
    t4 = ((char*)((ng20)));
    t6 = (t1 + 3640);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 9);
    goto LAB24;

}

static void Always_57_0(char *t0)
{
    char t6[8];
    char t30[16];
    char t32[8];
    char t33[8];
    char t34[8];
    char t35[8];
    char t36[8];
    char t39[8];
    char t41[8];
    char t42[8];
    char t136[8];
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
    char *t37;
    char *t38;
    char *t40;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    char *t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    char *t105;
    char *t106;
    char *t107;
    char *t108;
    char *t109;
    char *t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    char *t123;
    char *t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    char *t130;
    char *t131;
    char *t132;
    char *t133;
    char *t134;
    char *t135;
    char *t137;
    char *t138;

LAB0:    t1 = (t0 + 4712U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 5032);
    *((int *)t2) = 1;
    t3 = (t0 + 4744);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(57, ng0);

LAB5:    xsi_set_current_line(58, ng0);
    t4 = (t0 + 1640U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng21)));
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

LAB11:    xsi_set_current_line(63, ng0);

LAB14:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 1960U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng23)));
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
        goto LAB18;

LAB15:    if (t18 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t6) = 1;

LAB18:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB19;

LAB20:
LAB21:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(58, ng0);

LAB13:    xsi_set_current_line(59, ng0);
    t28 = ((char*)((ng21)));
    t29 = (t0 + 2680);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 3, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng21)));
    t3 = (t0 + 2840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng22)));
    t3 = (t0 + 2520);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 41, 0LL);
    goto LAB12;

LAB17:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(64, ng0);

LAB22:    xsi_set_current_line(65, ng0);
    t21 = (t0 + 2520);
    t22 = (t21 + 56U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng24)));
    xsi_vlog_unsigned_divide(t30, 41, t28, 41, t29, 32);
    t31 = (t0 + 3160);
    xsi_vlogvar_wait_assign_value(t31, t30, 0, 0, 6, 0LL);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 2520);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng24)));
    xsi_vlog_unsigned_mod(t30, 41, t4, 41, t5, 32);
    t7 = (t0 + 3320);
    xsi_vlogvar_wait_assign_value(t7, t30, 0, 0, 7, 0LL);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng25)));
    t3 = ((char*)((ng26)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_multiply(t6, 32, t2, 32, t3, 32);
    t4 = ((char*)((ng27)));
    t5 = ((char*)((ng26)));
    memset(t32, 0, 8);
    xsi_vlog_unsigned_multiply(t32, 32, t4, 32, t5, 32);
    t7 = (t0 + 2680);
    t8 = (t7 + 56U);
    t21 = *((char **)t8);
    memset(t33, 0, 8);
    xsi_vlog_unsigned_multiply(t33, 32, t32, 32, t21, 3);
    memset(t34, 0, 8);
    xsi_vlog_unsigned_add(t34, 32, t6, 32, t33, 32);
    t22 = ((char*)((ng28)));
    t28 = ((char*)((ng26)));
    memset(t35, 0, 8);
    xsi_vlog_unsigned_multiply(t35, 32, t22, 32, t28, 32);
    memset(t36, 0, 8);
    xsi_vlog_unsigned_add(t36, 32, t34, 32, t35, 32);
    t29 = (t0 + 2840);
    t31 = (t29 + 56U);
    t37 = *((char **)t31);
    t38 = ((char*)((ng29)));
    memset(t39, 0, 8);
    xsi_vlog_unsigned_multiply(t39, 32, t37, 3, t38, 32);
    t40 = ((char*)((ng26)));
    memset(t41, 0, 8);
    xsi_vlog_unsigned_multiply(t41, 32, t39, 32, t40, 32);
    memset(t42, 0, 8);
    xsi_vlog_unsigned_add(t42, 32, t36, 32, t41, 32);
    t43 = (t0 + 3000);
    xsi_vlogvar_wait_assign_value(t43, t42, 0, 0, 16, 0LL);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 3320);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng30)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
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
        goto LAB26;

LAB23:    if (t18 != 0)
        goto LAB25;

LAB24:    *((unsigned int *)t6) = 1;

LAB26:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB27;

LAB28:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 3320);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng32)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
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
        goto LAB33;

LAB30:    if (t18 != 0)
        goto LAB32;

LAB31:    *((unsigned int *)t6) = 1;

LAB33:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB34;

LAB35:    xsi_set_current_line(70, ng0);

LAB37:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 3160);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng34)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB39;

LAB38:    t8 = (t5 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB39;

LAB42:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB40;

LAB41:    t22 = (t6 + 4);
    t9 = *((unsigned int *)t22);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB43;

LAB44:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 3160);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng42)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
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
        goto LAB202;

LAB199:    if (t18 != 0)
        goto LAB201;

LAB200:    *((unsigned int *)t6) = 1;

LAB202:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB203;

LAB204:
LAB205:
LAB45:
LAB36:
LAB29:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 2520);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng43)));
    xsi_vlog_unsigned_add(t30, 41, t4, 41, t5, 32);
    t7 = (t0 + 2520);
    xsi_vlogvar_wait_assign_value(t7, t30, 0, 0, 41, 0LL);
    goto LAB21;

LAB25:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB26;

LAB27:    xsi_set_current_line(68, ng0);
    t28 = ((char*)((ng31)));
    t29 = (t0 + 2360);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 8, 0LL);
    goto LAB29;

LAB32:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB33;

LAB34:    xsi_set_current_line(69, ng0);
    t28 = ((char*)((ng33)));
    t29 = (t0 + 2360);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 8, 0LL);
    goto LAB36;

LAB39:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB41;

LAB40:    *((unsigned int *)t6) = 1;
    goto LAB41;

LAB43:    xsi_set_current_line(71, ng0);

LAB46:    xsi_set_current_line(72, ng0);
    t28 = (t0 + 3160);
    t29 = (t28 + 56U);
    t31 = *((char **)t29);
    t37 = ((char*)((ng35)));
    memset(t32, 0, 8);
    xsi_vlog_unsigned_mod(t32, 32, t31, 6, t37, 32);
    t38 = ((char*)((ng21)));
    memset(t33, 0, 8);
    t40 = (t32 + 4);
    t43 = (t38 + 4);
    t14 = *((unsigned int *)t32);
    t15 = *((unsigned int *)t38);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t40);
    t18 = *((unsigned int *)t43);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t23 = *((unsigned int *)t40);
    t24 = *((unsigned int *)t43);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t20 & t26);
    if (t27 != 0)
        goto LAB50;

LAB47:    if (t25 != 0)
        goto LAB49;

LAB48:    *((unsigned int *)t33) = 1;

LAB50:    t45 = (t33 + 4);
    t46 = *((unsigned int *)t45);
    t47 = (~(t46));
    t48 = *((unsigned int *)t33);
    t49 = (t48 & t47);
    t50 = (t49 != 0);
    if (t50 > 0)
        goto LAB51;

LAB52:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 3160);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng35)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_mod(t6, 32, t4, 6, t5, 32);
    t7 = ((char*)((ng23)));
    memset(t32, 0, 8);
    t8 = (t6 + 4);
    t21 = (t7 + 4);
    t9 = *((unsigned int *)t6);
    t10 = *((unsigned int *)t7);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t21);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t8);
    t17 = *((unsigned int *)t21);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB57;

LAB54:    if (t18 != 0)
        goto LAB56;

LAB55:    *((unsigned int *)t32) = 1;

LAB57:    memset(t33, 0, 8);
    t28 = (t32 + 4);
    t23 = *((unsigned int *)t28);
    t24 = (~(t23));
    t25 = *((unsigned int *)t32);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB58;

LAB59:    if (*((unsigned int *)t28) != 0)
        goto LAB60;

LAB61:    t31 = (t33 + 4);
    t46 = *((unsigned int *)t33);
    t47 = (!(t46));
    t48 = *((unsigned int *)t31);
    t49 = (t47 || t48);
    if (t49 > 0)
        goto LAB62;

LAB63:    memcpy(t39, t33, 8);

LAB64:    t98 = (t39 + 4);
    t99 = *((unsigned int *)t98);
    t100 = (~(t99));
    t101 = *((unsigned int *)t39);
    t102 = (t101 & t100);
    t103 = (t102 != 0);
    if (t103 > 0)
        goto LAB76;

LAB77:    xsi_set_current_line(77, ng0);

LAB87:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 3320);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng29)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_mod(t6, 32, t4, 7, t5, 32);
    t7 = ((char*)((ng21)));
    memset(t32, 0, 8);
    t8 = (t6 + 4);
    t21 = (t7 + 4);
    t9 = *((unsigned int *)t6);
    t10 = *((unsigned int *)t7);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t21);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t8);
    t17 = *((unsigned int *)t21);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB91;

LAB88:    if (t18 != 0)
        goto LAB90;

LAB89:    *((unsigned int *)t32) = 1;

LAB91:    t28 = (t32 + 4);
    t23 = *((unsigned int *)t28);
    t24 = (~(t23));
    t25 = *((unsigned int *)t32);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB92;

LAB93:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 3320);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3000);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    memset(t6, 0, 8);
    t21 = (t4 + 4);
    if (*((unsigned int *)t21) != 0)
        goto LAB96;

LAB95:    t22 = (t8 + 4);
    if (*((unsigned int *)t22) != 0)
        goto LAB96;

LAB99:    if (*((unsigned int *)t4) < *((unsigned int *)t8))
        goto LAB98;

LAB97:    *((unsigned int *)t6) = 1;

LAB98:    memset(t32, 0, 8);
    t29 = (t6 + 4);
    t9 = *((unsigned int *)t29);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB100;

LAB101:    if (*((unsigned int *)t29) != 0)
        goto LAB102;

LAB103:    t37 = (t32 + 4);
    t14 = *((unsigned int *)t32);
    t15 = *((unsigned int *)t37);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB104;

LAB105:    memcpy(t36, t32, 8);

LAB106:    t106 = (t36 + 4);
    t69 = *((unsigned int *)t106);
    t71 = (~(t69));
    t72 = *((unsigned int *)t36);
    t73 = (t72 & t71);
    t77 = (t73 != 0);
    if (t77 > 0)
        goto LAB119;

LAB120:    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng38)));
    t3 = (t0 + 2360);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);

LAB121:
LAB94:
LAB78:
LAB53:    goto LAB45;

LAB49:    t44 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB50;

LAB51:    xsi_set_current_line(72, ng0);
    t51 = ((char*)((ng36)));
    t52 = (t0 + 2360);
    xsi_vlogvar_wait_assign_value(t52, t51, 0, 0, 8, 0LL);
    goto LAB53;

LAB56:    t22 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB57;

LAB58:    *((unsigned int *)t33) = 1;
    goto LAB61;

LAB60:    t29 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB61;

LAB62:    t37 = (t0 + 3160);
    t38 = (t37 + 56U);
    t40 = *((char **)t38);
    t43 = ((char*)((ng35)));
    memset(t34, 0, 8);
    xsi_vlog_unsigned_mod(t34, 32, t40, 6, t43, 32);
    t44 = ((char*)((ng37)));
    memset(t35, 0, 8);
    t45 = (t34 + 4);
    t51 = (t44 + 4);
    t50 = *((unsigned int *)t34);
    t53 = *((unsigned int *)t44);
    t54 = (t50 ^ t53);
    t55 = *((unsigned int *)t45);
    t56 = *((unsigned int *)t51);
    t57 = (t55 ^ t56);
    t58 = (t54 | t57);
    t59 = *((unsigned int *)t45);
    t60 = *((unsigned int *)t51);
    t61 = (t59 | t60);
    t62 = (~(t61));
    t63 = (t58 & t62);
    if (t63 != 0)
        goto LAB68;

LAB65:    if (t61 != 0)
        goto LAB67;

LAB66:    *((unsigned int *)t35) = 1;

LAB68:    memset(t36, 0, 8);
    t64 = (t35 + 4);
    t65 = *((unsigned int *)t64);
    t66 = (~(t65));
    t67 = *((unsigned int *)t35);
    t68 = (t67 & t66);
    t69 = (t68 & 1U);
    if (t69 != 0)
        goto LAB69;

LAB70:    if (*((unsigned int *)t64) != 0)
        goto LAB71;

LAB72:    t71 = *((unsigned int *)t33);
    t72 = *((unsigned int *)t36);
    t73 = (t71 | t72);
    *((unsigned int *)t39) = t73;
    t74 = (t33 + 4);
    t75 = (t36 + 4);
    t76 = (t39 + 4);
    t77 = *((unsigned int *)t74);
    t78 = *((unsigned int *)t75);
    t79 = (t77 | t78);
    *((unsigned int *)t76) = t79;
    t80 = *((unsigned int *)t76);
    t81 = (t80 != 0);
    if (t81 == 1)
        goto LAB73;

LAB74:
LAB75:    goto LAB64;

LAB67:    t52 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB68;

LAB69:    *((unsigned int *)t36) = 1;
    goto LAB72;

LAB71:    t70 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t70) = 1;
    goto LAB72;

LAB73:    t82 = *((unsigned int *)t39);
    t83 = *((unsigned int *)t76);
    *((unsigned int *)t39) = (t82 | t83);
    t84 = (t33 + 4);
    t85 = (t36 + 4);
    t86 = *((unsigned int *)t84);
    t87 = (~(t86));
    t88 = *((unsigned int *)t33);
    t89 = (t88 & t87);
    t90 = *((unsigned int *)t85);
    t91 = (~(t90));
    t92 = *((unsigned int *)t36);
    t93 = (t92 & t91);
    t94 = (~(t89));
    t95 = (~(t93));
    t96 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t96 & t94);
    t97 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t97 & t95);
    goto LAB75;

LAB76:    xsi_set_current_line(73, ng0);

LAB79:    xsi_set_current_line(74, ng0);
    t104 = (t0 + 3320);
    t105 = (t104 + 56U);
    t106 = *((char **)t105);
    t107 = ((char*)((ng29)));
    memset(t41, 0, 8);
    xsi_vlog_unsigned_mod(t41, 32, t106, 7, t107, 32);
    t108 = ((char*)((ng21)));
    memset(t42, 0, 8);
    t109 = (t41 + 4);
    t110 = (t108 + 4);
    t111 = *((unsigned int *)t41);
    t112 = *((unsigned int *)t108);
    t113 = (t111 ^ t112);
    t114 = *((unsigned int *)t109);
    t115 = *((unsigned int *)t110);
    t116 = (t114 ^ t115);
    t117 = (t113 | t116);
    t118 = *((unsigned int *)t109);
    t119 = *((unsigned int *)t110);
    t120 = (t118 | t119);
    t121 = (~(t120));
    t122 = (t117 & t121);
    if (t122 != 0)
        goto LAB83;

LAB80:    if (t120 != 0)
        goto LAB82;

LAB81:    *((unsigned int *)t42) = 1;

LAB83:    t124 = (t42 + 4);
    t125 = *((unsigned int *)t124);
    t126 = (~(t125));
    t127 = *((unsigned int *)t42);
    t128 = (t127 & t126);
    t129 = (t128 != 0);
    if (t129 > 0)
        goto LAB84;

LAB85:    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng38)));
    t3 = (t0 + 2360);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);

LAB86:    goto LAB78;

LAB82:    t123 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t123) = 1;
    goto LAB83;

LAB84:    xsi_set_current_line(74, ng0);
    t130 = ((char*)((ng27)));
    t131 = (t0 + 2360);
    xsi_vlogvar_wait_assign_value(t131, t130, 0, 0, 8, 0LL);
    goto LAB86;

LAB90:    t22 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB91;

LAB92:    xsi_set_current_line(78, ng0);
    t29 = ((char*)((ng27)));
    t31 = (t0 + 2360);
    xsi_vlogvar_wait_assign_value(t31, t29, 0, 0, 8, 0LL);
    goto LAB94;

LAB96:    t28 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB98;

LAB100:    *((unsigned int *)t32) = 1;
    goto LAB103;

LAB102:    t31 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB103;

LAB104:    t38 = (t0 + 3320);
    t40 = (t38 + 56U);
    t43 = *((char **)t40);
    t44 = (t0 + 3000);
    t45 = (t44 + 56U);
    t51 = *((char **)t45);
    t52 = ((char*)((ng37)));
    memset(t33, 0, 8);
    xsi_vlog_unsigned_add(t33, 32, t51, 16, t52, 32);
    memset(t34, 0, 8);
    t64 = (t43 + 4);
    if (*((unsigned int *)t64) != 0)
        goto LAB108;

LAB107:    t70 = (t33 + 4);
    if (*((unsigned int *)t70) != 0)
        goto LAB108;

LAB111:    if (*((unsigned int *)t43) > *((unsigned int *)t33))
        goto LAB110;

LAB109:    *((unsigned int *)t34) = 1;

LAB110:    memset(t35, 0, 8);
    t75 = (t34 + 4);
    t17 = *((unsigned int *)t75);
    t18 = (~(t17));
    t19 = *((unsigned int *)t34);
    t20 = (t19 & t18);
    t23 = (t20 & 1U);
    if (t23 != 0)
        goto LAB112;

LAB113:    if (*((unsigned int *)t75) != 0)
        goto LAB114;

LAB115:    t24 = *((unsigned int *)t32);
    t25 = *((unsigned int *)t35);
    t26 = (t24 & t25);
    *((unsigned int *)t36) = t26;
    t84 = (t32 + 4);
    t85 = (t35 + 4);
    t98 = (t36 + 4);
    t27 = *((unsigned int *)t84);
    t46 = *((unsigned int *)t85);
    t47 = (t27 | t46);
    *((unsigned int *)t98) = t47;
    t48 = *((unsigned int *)t98);
    t49 = (t48 != 0);
    if (t49 == 1)
        goto LAB116;

LAB117:
LAB118:    goto LAB106;

LAB108:    t74 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t74) = 1;
    goto LAB110;

LAB112:    *((unsigned int *)t35) = 1;
    goto LAB115;

LAB114:    t76 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t76) = 1;
    goto LAB115;

LAB116:    t50 = *((unsigned int *)t36);
    t53 = *((unsigned int *)t98);
    *((unsigned int *)t36) = (t50 | t53);
    t104 = (t32 + 4);
    t105 = (t35 + 4);
    t54 = *((unsigned int *)t32);
    t55 = (~(t54));
    t56 = *((unsigned int *)t104);
    t57 = (~(t56));
    t58 = *((unsigned int *)t35);
    t59 = (~(t58));
    t60 = *((unsigned int *)t105);
    t61 = (~(t60));
    t89 = (t55 & t57);
    t93 = (t59 & t61);
    t62 = (~(t89));
    t63 = (~(t93));
    t65 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t65 & t62);
    t66 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t66 & t63);
    t67 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t67 & t62);
    t68 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t68 & t63);
    goto LAB118;

LAB119:    xsi_set_current_line(79, ng0);

LAB122:    xsi_set_current_line(80, ng0);
    t107 = (t0 + 1480U);
    t108 = *((char **)t107);
    t107 = (t0 + 1440U);
    t109 = (t107 + 72U);
    t110 = *((char **)t109);
    t123 = (t0 + 2680);
    t124 = (t123 + 56U);
    t130 = *((char **)t124);
    t131 = ((char*)((ng35)));
    memset(t41, 0, 8);
    xsi_vlog_unsigned_multiply(t41, 32, t130, 3, t131, 32);
    t132 = (t0 + 2840);
    t133 = (t132 + 56U);
    t134 = *((char **)t133);
    memset(t42, 0, 8);
    xsi_vlog_unsigned_add(t42, 32, t41, 32, t134, 3);
    t135 = ((char*)((ng39)));
    memset(t136, 0, 8);
    xsi_vlog_unsigned_multiply(t136, 32, t42, 32, t135, 32);
    t137 = ((char*)((ng39)));
    xsi_vlog_get_indexed_partselect(t39, 21, t108, ((int*)(t110)), 2, t136, 32, 2, t137, 32, 1, 1);
    t138 = (t0 + 3480);
    xsi_vlogvar_wait_assign_value(t138, t39, 0, 0, 21, 0LL);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 3320);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3000);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    memset(t6, 0, 8);
    t21 = (t4 + 4);
    t22 = (t8 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t8);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t21);
    t13 = *((unsigned int *)t22);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t21);
    t17 = *((unsigned int *)t22);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB126;

LAB123:    if (t18 != 0)
        goto LAB125;

LAB124:    *((unsigned int *)t6) = 1;

LAB126:    t29 = (t6 + 4);
    t23 = *((unsigned int *)t29);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB127;

LAB128:
LAB129:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 3320);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3000);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t21 = ((char*)((ng23)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t8, 16, t21, 32);
    memset(t32, 0, 8);
    t22 = (t4 + 4);
    t28 = (t6 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t6);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t22);
    t13 = *((unsigned int *)t28);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t22);
    t17 = *((unsigned int *)t28);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB136;

LAB133:    if (t18 != 0)
        goto LAB135;

LAB134:    *((unsigned int *)t32) = 1;

LAB136:    t31 = (t32 + 4);
    t23 = *((unsigned int *)t31);
    t24 = (~(t23));
    t25 = *((unsigned int *)t32);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB137;

LAB138:
LAB139:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 3320);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3000);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t21 = ((char*)((ng28)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t8, 16, t21, 32);
    memset(t32, 0, 8);
    t22 = (t4 + 4);
    t28 = (t6 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t6);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t22);
    t13 = *((unsigned int *)t28);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t22);
    t17 = *((unsigned int *)t28);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB146;

LAB143:    if (t18 != 0)
        goto LAB145;

LAB144:    *((unsigned int *)t32) = 1;

LAB146:    t31 = (t32 + 4);
    t23 = *((unsigned int *)t31);
    t24 = (~(t23));
    t25 = *((unsigned int *)t32);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB147;

LAB148:
LAB149:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 3320);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3000);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t21 = ((char*)((ng37)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t8, 16, t21, 32);
    memset(t32, 0, 8);
    t22 = (t4 + 4);
    t28 = (t6 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t6);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t22);
    t13 = *((unsigned int *)t28);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t22);
    t17 = *((unsigned int *)t28);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB156;

LAB153:    if (t18 != 0)
        goto LAB155;

LAB154:    *((unsigned int *)t32) = 1;

LAB156:    t31 = (t32 + 4);
    t23 = *((unsigned int *)t31);
    t24 = (~(t23));
    t25 = *((unsigned int *)t32);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB157;

LAB158:
LAB159:    goto LAB121;

LAB125:    t28 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB126;

LAB127:    xsi_set_current_line(81, ng0);
    t31 = (t0 + 3480);
    t37 = (t31 + 56U);
    t38 = *((char **)t37);
    t40 = ((char*)((ng40)));
    memset(t32, 0, 8);
    xsi_vlog_unsigned_divide(t32, 32, t38, 21, t40, 32);
    t43 = ((char*)((ng31)));
    memset(t33, 0, 8);
    xsi_vlog_unsigned_mod(t33, 32, t32, 32, t43, 32);
    t44 = (t0 + 4520);
    t45 = (t0 + 848);
    t51 = xsi_create_subprogram_invocation(t44, 0, t0, t45, 0, 0);
    t52 = (t0 + 3800);
    xsi_vlogvar_assign_value(t52, t33, 0, 0, 5);

LAB130:    t64 = (t0 + 4616);
    t70 = *((char **)t64);
    t74 = (t70 + 80U);
    t75 = *((char **)t74);
    t76 = (t75 + 272U);
    t84 = *((char **)t76);
    t85 = (t84 + 0U);
    t98 = *((char **)t85);
    t89 = ((int  (*)(char *, char *))t98)(t0, t70);
    if (t89 != 0)
        goto LAB132;

LAB131:    t70 = (t0 + 4616);
    t104 = *((char **)t70);
    t70 = (t0 + 3640);
    t105 = (t70 + 56U);
    t106 = *((char **)t105);
    memcpy(t34, t106, 8);
    t107 = (t0 + 848);
    t108 = (t0 + 4520);
    t109 = 0;
    xsi_delete_subprogram_invocation(t107, t104, t0, t108, t109);
    t110 = (t0 + 2360);
    xsi_vlogvar_wait_assign_value(t110, t34, 0, 0, 8, 0LL);
    goto LAB129;

LAB132:    t64 = (t0 + 4712U);
    *((char **)t64) = &&LAB130;
    goto LAB1;

LAB135:    t29 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB136;

LAB137:    xsi_set_current_line(82, ng0);
    t37 = (t0 + 3480);
    t38 = (t37 + 56U);
    t40 = *((char **)t38);
    t43 = ((char*)((ng41)));
    memset(t33, 0, 8);
    xsi_vlog_unsigned_divide(t33, 32, t40, 21, t43, 32);
    t44 = ((char*)((ng31)));
    memset(t34, 0, 8);
    xsi_vlog_unsigned_mod(t34, 32, t33, 32, t44, 32);
    t45 = (t0 + 4520);
    t51 = (t0 + 848);
    t52 = xsi_create_subprogram_invocation(t45, 0, t0, t51, 0, 0);
    t64 = (t0 + 3800);
    xsi_vlogvar_assign_value(t64, t34, 0, 0, 5);

LAB140:    t70 = (t0 + 4616);
    t74 = *((char **)t70);
    t75 = (t74 + 80U);
    t76 = *((char **)t75);
    t84 = (t76 + 272U);
    t85 = *((char **)t84);
    t98 = (t85 + 0U);
    t104 = *((char **)t98);
    t89 = ((int  (*)(char *, char *))t104)(t0, t74);
    if (t89 != 0)
        goto LAB142;

LAB141:    t74 = (t0 + 4616);
    t105 = *((char **)t74);
    t74 = (t0 + 3640);
    t106 = (t74 + 56U);
    t107 = *((char **)t106);
    memcpy(t35, t107, 8);
    t108 = (t0 + 848);
    t109 = (t0 + 4520);
    t110 = 0;
    xsi_delete_subprogram_invocation(t108, t105, t0, t109, t110);
    t123 = (t0 + 2360);
    xsi_vlogvar_wait_assign_value(t123, t35, 0, 0, 8, 0LL);
    goto LAB139;

LAB142:    t70 = (t0 + 4712U);
    *((char **)t70) = &&LAB140;
    goto LAB1;

LAB145:    t29 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB146;

LAB147:    xsi_set_current_line(83, ng0);
    t37 = (t0 + 3480);
    t38 = (t37 + 56U);
    t40 = *((char **)t38);
    t43 = ((char*)((ng31)));
    memset(t33, 0, 8);
    xsi_vlog_unsigned_divide(t33, 32, t40, 21, t43, 32);
    t44 = ((char*)((ng31)));
    memset(t34, 0, 8);
    xsi_vlog_unsigned_mod(t34, 32, t33, 32, t44, 32);
    t45 = (t0 + 4520);
    t51 = (t0 + 848);
    t52 = xsi_create_subprogram_invocation(t45, 0, t0, t51, 0, 0);
    t64 = (t0 + 3800);
    xsi_vlogvar_assign_value(t64, t34, 0, 0, 5);

LAB150:    t70 = (t0 + 4616);
    t74 = *((char **)t70);
    t75 = (t74 + 80U);
    t76 = *((char **)t75);
    t84 = (t76 + 272U);
    t85 = *((char **)t84);
    t98 = (t85 + 0U);
    t104 = *((char **)t98);
    t89 = ((int  (*)(char *, char *))t104)(t0, t74);
    if (t89 != 0)
        goto LAB152;

LAB151:    t74 = (t0 + 4616);
    t105 = *((char **)t74);
    t74 = (t0 + 3640);
    t106 = (t74 + 56U);
    t107 = *((char **)t106);
    memcpy(t35, t107, 8);
    t108 = (t0 + 848);
    t109 = (t0 + 4520);
    t110 = 0;
    xsi_delete_subprogram_invocation(t108, t105, t0, t109, t110);
    t123 = (t0 + 2360);
    xsi_vlogvar_wait_assign_value(t123, t35, 0, 0, 8, 0LL);
    goto LAB149;

LAB152:    t70 = (t0 + 4712U);
    *((char **)t70) = &&LAB150;
    goto LAB1;

LAB155:    t29 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB156;

LAB157:    xsi_set_current_line(84, ng0);

LAB160:    xsi_set_current_line(85, ng0);
    t37 = (t0 + 3480);
    t38 = (t37 + 56U);
    t40 = *((char **)t38);
    t43 = ((char*)((ng23)));
    memset(t33, 0, 8);
    xsi_vlog_unsigned_divide(t33, 32, t40, 21, t43, 32);
    t44 = ((char*)((ng31)));
    memset(t34, 0, 8);
    xsi_vlog_unsigned_mod(t34, 32, t33, 32, t44, 32);
    t45 = (t0 + 4520);
    t51 = (t0 + 848);
    t52 = xsi_create_subprogram_invocation(t45, 0, t0, t51, 0, 0);
    t64 = (t0 + 3800);
    xsi_vlogvar_assign_value(t64, t34, 0, 0, 5);

LAB161:    t70 = (t0 + 4616);
    t74 = *((char **)t70);
    t75 = (t74 + 80U);
    t76 = *((char **)t75);
    t84 = (t76 + 272U);
    t85 = *((char **)t84);
    t98 = (t85 + 0U);
    t104 = *((char **)t98);
    t89 = ((int  (*)(char *, char *))t104)(t0, t74);
    if (t89 != 0)
        goto LAB163;

LAB162:    t74 = (t0 + 4616);
    t105 = *((char **)t74);
    t74 = (t0 + 3640);
    t106 = (t74 + 56U);
    t107 = *((char **)t106);
    memcpy(t35, t107, 8);
    t108 = (t0 + 848);
    t109 = (t0 + 4520);
    t110 = 0;
    xsi_delete_subprogram_invocation(t108, t105, t0, t109, t110);
    t123 = (t0 + 2360);
    xsi_vlogvar_wait_assign_value(t123, t35, 0, 0, 8, 0LL);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 2680);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng37)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
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
        goto LAB167;

LAB164:    if (t18 != 0)
        goto LAB166;

LAB165:    *((unsigned int *)t6) = 1;

LAB167:    memset(t32, 0, 8);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB168;

LAB169:    if (*((unsigned int *)t22) != 0)
        goto LAB170;

LAB171:    t29 = (t32 + 4);
    t46 = *((unsigned int *)t32);
    t47 = *((unsigned int *)t29);
    t48 = (t46 || t47);
    if (t48 > 0)
        goto LAB172;

LAB173:    memcpy(t35, t32, 8);

LAB174:    t84 = (t35 + 4);
    t102 = *((unsigned int *)t84);
    t103 = (~(t102));
    t111 = *((unsigned int *)t35);
    t112 = (t111 & t103);
    t113 = (t112 != 0);
    if (t113 > 0)
        goto LAB186;

LAB187:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 2840);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng37)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
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
        goto LAB193;

LAB190:    if (t18 != 0)
        goto LAB192;

LAB191:    *((unsigned int *)t6) = 1;

LAB193:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB194;

LAB195:    xsi_set_current_line(94, ng0);

LAB198:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 2840);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng23)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 3, t5, 32);
    t7 = (t0 + 2840);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 3, 0LL);

LAB196:
LAB188:    goto LAB159;

LAB163:    t70 = (t0 + 4712U);
    *((char **)t70) = &&LAB161;
    goto LAB1;

LAB166:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB167;

LAB168:    *((unsigned int *)t32) = 1;
    goto LAB171;

LAB170:    t28 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB171;

LAB172:    t31 = (t0 + 2840);
    t37 = (t31 + 56U);
    t38 = *((char **)t37);
    t40 = ((char*)((ng37)));
    memset(t33, 0, 8);
    t43 = (t38 + 4);
    t44 = (t40 + 4);
    t49 = *((unsigned int *)t38);
    t50 = *((unsigned int *)t40);
    t53 = (t49 ^ t50);
    t54 = *((unsigned int *)t43);
    t55 = *((unsigned int *)t44);
    t56 = (t54 ^ t55);
    t57 = (t53 | t56);
    t58 = *((unsigned int *)t43);
    t59 = *((unsigned int *)t44);
    t60 = (t58 | t59);
    t61 = (~(t60));
    t62 = (t57 & t61);
    if (t62 != 0)
        goto LAB178;

LAB175:    if (t60 != 0)
        goto LAB177;

LAB176:    *((unsigned int *)t33) = 1;

LAB178:    memset(t34, 0, 8);
    t51 = (t33 + 4);
    t63 = *((unsigned int *)t51);
    t65 = (~(t63));
    t66 = *((unsigned int *)t33);
    t67 = (t66 & t65);
    t68 = (t67 & 1U);
    if (t68 != 0)
        goto LAB179;

LAB180:    if (*((unsigned int *)t51) != 0)
        goto LAB181;

LAB182:    t69 = *((unsigned int *)t32);
    t71 = *((unsigned int *)t34);
    t72 = (t69 & t71);
    *((unsigned int *)t35) = t72;
    t64 = (t32 + 4);
    t70 = (t34 + 4);
    t74 = (t35 + 4);
    t73 = *((unsigned int *)t64);
    t77 = *((unsigned int *)t70);
    t78 = (t73 | t77);
    *((unsigned int *)t74) = t78;
    t79 = *((unsigned int *)t74);
    t80 = (t79 != 0);
    if (t80 == 1)
        goto LAB183;

LAB184:
LAB185:    goto LAB174;

LAB177:    t45 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB178;

LAB179:    *((unsigned int *)t34) = 1;
    goto LAB182;

LAB181:    t52 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB182;

LAB183:    t81 = *((unsigned int *)t35);
    t82 = *((unsigned int *)t74);
    *((unsigned int *)t35) = (t81 | t82);
    t75 = (t32 + 4);
    t76 = (t34 + 4);
    t83 = *((unsigned int *)t32);
    t86 = (~(t83));
    t87 = *((unsigned int *)t75);
    t88 = (~(t87));
    t90 = *((unsigned int *)t34);
    t91 = (~(t90));
    t92 = *((unsigned int *)t76);
    t94 = (~(t92));
    t89 = (t86 & t88);
    t93 = (t91 & t94);
    t95 = (~(t89));
    t96 = (~(t93));
    t97 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t97 & t95);
    t99 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t99 & t96);
    t100 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t100 & t95);
    t101 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t101 & t96);
    goto LAB185;

LAB186:    xsi_set_current_line(86, ng0);

LAB189:    xsi_set_current_line(87, ng0);
    t85 = ((char*)((ng21)));
    t98 = (t0 + 2680);
    xsi_vlogvar_wait_assign_value(t98, t85, 0, 0, 3, 0LL);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng21)));
    t3 = (t0 + 2840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB188;

LAB192:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB193;

LAB194:    xsi_set_current_line(90, ng0);

LAB197:    xsi_set_current_line(91, ng0);
    t28 = (t0 + 2680);
    t29 = (t28 + 56U);
    t31 = *((char **)t29);
    t37 = ((char*)((ng23)));
    memset(t32, 0, 8);
    xsi_vlog_unsigned_add(t32, 32, t31, 3, t37, 32);
    t38 = (t0 + 2680);
    xsi_vlogvar_wait_assign_value(t38, t32, 0, 0, 3, 0LL);
    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng21)));
    t3 = (t0 + 2840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB196;

LAB201:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB202;

LAB203:    xsi_set_current_line(102, ng0);

LAB206:    xsi_set_current_line(103, ng0);
    t28 = (t0 + 3320);
    t29 = (t28 + 56U);
    t31 = *((char **)t29);
    t37 = ((char*)((ng21)));
    memset(t32, 0, 8);
    t38 = (t31 + 4);
    t40 = (t37 + 4);
    t46 = *((unsigned int *)t31);
    t47 = *((unsigned int *)t37);
    t48 = (t46 ^ t47);
    t49 = *((unsigned int *)t38);
    t50 = *((unsigned int *)t40);
    t53 = (t49 ^ t50);
    t54 = (t48 | t53);
    t55 = *((unsigned int *)t38);
    t56 = *((unsigned int *)t40);
    t57 = (t55 | t56);
    t58 = (~(t57));
    t59 = (t54 & t58);
    if (t59 != 0)
        goto LAB210;

LAB207:    if (t57 != 0)
        goto LAB209;

LAB208:    *((unsigned int *)t32) = 1;

LAB210:    t44 = (t32 + 4);
    t60 = *((unsigned int *)t44);
    t61 = (~(t60));
    t62 = *((unsigned int *)t32);
    t63 = (t62 & t61);
    t65 = (t63 != 0);
    if (t65 > 0)
        goto LAB211;

LAB212:
LAB213:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 3320);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng23)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
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
        goto LAB217;

LAB214:    if (t18 != 0)
        goto LAB216;

LAB215:    *((unsigned int *)t6) = 1;

LAB217:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB218;

LAB219:
LAB220:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 3320);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng28)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
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
        goto LAB224;

LAB221:    if (t18 != 0)
        goto LAB223;

LAB222:    *((unsigned int *)t6) = 1;

LAB224:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB225;

LAB226:
LAB227:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 3320);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng37)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
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
        goto LAB231;

LAB228:    if (t18 != 0)
        goto LAB230;

LAB229:    *((unsigned int *)t6) = 1;

LAB231:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB232;

LAB233:
LAB234:    goto LAB205;

LAB209:    t43 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB210;

LAB211:    xsi_set_current_line(103, ng0);
    t45 = ((char*)((ng31)));
    t51 = (t0 + 2360);
    xsi_vlogvar_wait_assign_value(t51, t45, 0, 0, 8, 0LL);
    goto LAB213;

LAB216:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB217;

LAB218:    xsi_set_current_line(104, ng0);
    t28 = ((char*)((ng33)));
    t29 = (t0 + 2360);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 8, 0LL);
    goto LAB220;

LAB223:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB224;

LAB225:    xsi_set_current_line(105, ng0);
    t28 = ((char*)((ng31)));
    t29 = (t0 + 2360);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 8, 0LL);
    goto LAB227;

LAB230:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB231;

LAB232:    xsi_set_current_line(106, ng0);
    t28 = ((char*)((ng33)));
    t29 = (t0 + 2360);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 8, 0LL);
    goto LAB234;

}


extern void work_m_13162058850210216427_2300215909_init()
{
	static char *pe[] = {(void *)Always_57_0};
	static char *se[] = {(void *)sp_numToChar};
	xsi_register_didat("work_m_13162058850210216427_2300215909", "isim/board_to_string_test_isim_beh.exe.sim/work/m_13162058850210216427_2300215909.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
