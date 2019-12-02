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
static const char *ng0 = "/home/ise/VirtualBox_Shared/TwentyFortyEight/gameController.v";
static int ng1[] = {20, 0};
static int ng2[] = {0, 0};
static int ng3[] = {16, 0};
static int ng4[] = {1, 0};
static int ng5[] = {4, 0};
static int ng6[] = {5, 0};
static int ng7[] = {10, 0};
static int ng8[] = {2, 0};
static int ng9[] = {192, 0};
static int ng10[] = {80, 0};
static int ng11[] = {8, 0};



static int sp_getSplice(char *t1, char *t2)
{
    char t7[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;

LAB0:    t0 = 1;
    xsi_set_current_line(39, ng0);

LAB2:    xsi_set_current_line(40, ng0);
    t3 = (t1 + 5960);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng1)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_multiply(t7, 32, t5, 6, t6, 32);
    t8 = (t1 + 5800);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 11);
    t0 = 0;

LAB1:    return t0;
}

static int sp_resetBoard(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
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
    int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1280);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(46, ng0);

LAB5:    xsi_set_current_line(48, ng0);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t8, &&LAB6);
    t9 = (t2 + 56U);
    t10 = *((char **)t9);
    t11 = (t1 + 2144);
    t12 = xsi_create_subprogram_invocation(t10, 0, t1, t11, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t11, t12);

LAB8:    t13 = (t2 + 64U);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t17 = (t16 + 272U);
    t18 = *((char **)t17);
    t19 = (t18 + 0U);
    t20 = *((char **)t19);
    t21 = ((int  (*)(char *, char *))t20)(t1, t14);
    if (t21 == -1)
        goto LAB9;

LAB10:    if (t21 != 0)
        goto LAB11;

LAB6:    t14 = (t1 + 2144);
    xsi_vlog_subprogram_popinvocation(t14);

LAB7:    t22 = (t2 + 64U);
    t23 = *((char **)t22);
    t22 = (t1 + 2144);
    t24 = (t2 + 56U);
    t25 = *((char **)t24);
    xsi_delete_subprogram_invocation(t22, t23, t1, t25, t2);
    xsi_set_current_line(49, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t7, &&LAB12);
    t8 = (t2 + 56U);
    t9 = *((char **)t8);
    t10 = (t1 + 2144);
    t11 = xsi_create_subprogram_invocation(t9, 0, t1, t10, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t10, t11);

LAB14:    t12 = (t2 + 64U);
    t13 = *((char **)t12);
    t14 = (t13 + 80U);
    t15 = *((char **)t14);
    t16 = (t15 + 272U);
    t17 = *((char **)t16);
    t18 = (t17 + 0U);
    t19 = *((char **)t18);
    t21 = ((int  (*)(char *, char *))t19)(t1, t13);
    if (t21 == -1)
        goto LAB15;

LAB16:    if (t21 != 0)
        goto LAB17;

LAB12:    t13 = (t1 + 2144);
    xsi_vlog_subprogram_popinvocation(t13);

LAB13:    t20 = (t2 + 64U);
    t22 = *((char **)t20);
    t20 = (t1 + 2144);
    t23 = (t2 + 56U);
    t24 = *((char **)t23);
    xsi_delete_subprogram_invocation(t20, t22, t1, t24, t2);
    xsi_set_current_line(50, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 4520);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 21);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB9:    t0 = -1;
    goto LAB1;

LAB11:    t13 = (t2 + 48U);
    *((char **)t13) = &&LAB8;
    goto LAB1;

LAB15:    t0 = -1;
    goto LAB1;

LAB17:    t12 = (t2 + 48U);
    *((char **)t12) = &&LAB14;
    goto LAB1;

}

static int sp_emptyCellExists(char *t1, char *t2)
{
    char t7[8];
    char t14[8];
    char t41[8];
    char t47[8];
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
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    int t37;
    char *t38;
    char *t39;
    char *t40;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;

LAB0:    t0 = 1;
    xsi_set_current_line(56, ng0);

LAB2:    xsi_set_current_line(57, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t1 + 6120);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(58, ng0);
    xsi_set_current_line(58, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t1 + 5160);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);

LAB3:    t3 = (t1 + 5160);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng3)));
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
LAB4:    xsi_set_current_line(58, ng0);

LAB6:    xsi_set_current_line(59, ng0);
    t15 = (t1 + 6280);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t1 + 6280);
    t19 = (t18 + 72U);
    t20 = *((char **)t19);
    t21 = (t1 + 5160);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t2 + 56U);
    t25 = *((char **)t24);
    t26 = (t1 + 848);
    t27 = xsi_create_subprogram_invocation(t25, 0, t1, t26, 0, t2);
    t28 = (t1 + 5960);
    xsi_vlogvar_assign_value(t28, t23, 0, 0, 6);

LAB7:    t29 = (t2 + 64U);
    t30 = *((char **)t29);
    t31 = (t30 + 80U);
    t32 = *((char **)t31);
    t33 = (t32 + 272U);
    t34 = *((char **)t33);
    t35 = (t34 + 0U);
    t36 = *((char **)t35);
    t37 = ((int  (*)(char *, char *))t36)(t1, t30);
    if (t37 != 0)
        goto LAB9;

LAB8:    t30 = (t2 + 64U);
    t38 = *((char **)t30);
    t30 = (t1 + 5800);
    t39 = (t30 + 56U);
    t40 = *((char **)t39);
    memcpy(t41, t40, 8);
    t42 = (t1 + 848);
    t43 = (t2 + 56U);
    t44 = *((char **)t43);
    xsi_delete_subprogram_invocation(t42, t38, t1, t44, t2);
    t45 = ((char*)((ng1)));
    xsi_vlog_get_indexed_partselect(t14, 32, t17, ((int*)(t20)), 2, t41, 11, 2, t45, 32, 1, 1);
    t46 = ((char*)((ng2)));
    memset(t47, 0, 8);
    t48 = (t14 + 4);
    t49 = (t46 + 4);
    t50 = *((unsigned int *)t14);
    t51 = *((unsigned int *)t46);
    t52 = (t50 ^ t51);
    t53 = *((unsigned int *)t48);
    t54 = *((unsigned int *)t49);
    t55 = (t53 ^ t54);
    t56 = (t52 | t55);
    t57 = *((unsigned int *)t48);
    t58 = *((unsigned int *)t49);
    t59 = (t57 | t58);
    t60 = (~(t59));
    t61 = (t56 & t60);
    if (t61 != 0)
        goto LAB13;

LAB10:    if (t59 != 0)
        goto LAB12;

LAB11:    *((unsigned int *)t47) = 1;

LAB13:    t63 = (t47 + 4);
    t64 = *((unsigned int *)t63);
    t65 = (~(t64));
    t66 = *((unsigned int *)t47);
    t67 = (t66 & t65);
    t68 = (t67 != 0);
    if (t68 > 0)
        goto LAB14;

LAB15:
LAB16:    xsi_set_current_line(58, ng0);
    t3 = (t1 + 5160);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng4)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t5, 32, t6, 32);
    t8 = (t1 + 5160);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 32);
    goto LAB3;

LAB9:    t29 = (t2 + 48U);
    *((char **)t29) = &&LAB7;
    goto LAB1;

LAB12:    t62 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t62) = 1;
    goto LAB13;

LAB14:    xsi_set_current_line(59, ng0);

LAB17:    xsi_set_current_line(60, ng0);
    t69 = ((char*)((ng4)));
    t70 = (t1 + 6120);
    xsi_vlogvar_assign_value(t70, t69, 0, 0, 1);
    goto LAB16;

}

static int sp_addNewCell(char *t1, char *t2)
{
    char t8[8];
    char t19[8];
    char t45[8];
    char t60[8];
    char t65[8];
    char t75[8];
    char t77[8];
    char t96[8];
    char t97[8];
    char t98[8];
    char t105[8];
    char t123[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    int t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    char *t76;
    char *t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    char *t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    char *t95;
    char *t99;
    char *t100;
    char *t101;
    char *t102;
    char *t103;
    char *t104;
    char *t106;
    char *t107;
    char *t108;
    char *t109;
    char *t110;
    char *t111;
    char *t112;
    char *t113;
    char *t114;
    char *t115;
    char *t116;
    char *t117;
    char *t118;
    int t119;
    char *t120;
    char *t121;
    char *t122;
    char *t124;
    char *t125;
    char *t126;
    char *t127;
    char *t128;
    unsigned int t129;
    int t130;
    char *t131;
    unsigned int t132;
    int t133;
    int t134;
    char *t135;
    unsigned int t136;
    int t137;
    int t138;
    unsigned int t139;
    int t140;
    unsigned int t141;
    unsigned int t142;
    int t143;
    int t144;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 2144);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(69, ng0);

LAB5:    xsi_set_current_line(70, ng0);
    t5 = ((char*)((ng2)));
    t6 = (t1 + 6600);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);
    xsi_set_current_line(71, ng0);
    xsi_set_current_line(71, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 5160);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB6:    t4 = (t1 + 5160);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t6, 32, t7, 32);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB7;

LAB8:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB7:    xsi_set_current_line(71, ng0);

LAB9:    xsi_set_current_line(72, ng0);
    t15 = (t1 + 6600);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng2)));
    memset(t19, 0, 8);
    t20 = (t17 + 4);
    t21 = (t18 + 4);
    t22 = *((unsigned int *)t17);
    t23 = *((unsigned int *)t18);
    t24 = (t22 ^ t23);
    t25 = *((unsigned int *)t20);
    t26 = *((unsigned int *)t21);
    t27 = (t25 ^ t26);
    t28 = (t24 | t27);
    t29 = *((unsigned int *)t20);
    t30 = *((unsigned int *)t21);
    t31 = (t29 | t30);
    t32 = (~(t31));
    t33 = (t28 & t32);
    if (t33 != 0)
        goto LAB13;

LAB10:    if (t31 != 0)
        goto LAB12;

LAB11:    *((unsigned int *)t19) = 1;

LAB13:    t35 = (t19 + 4);
    t36 = *((unsigned int *)t35);
    t37 = (~(t36));
    t38 = *((unsigned int *)t19);
    t39 = (t38 & t37);
    t40 = (t39 != 0);
    if (t40 > 0)
        goto LAB14;

LAB15:
LAB16:    xsi_set_current_line(71, ng0);
    t4 = (t1 + 5160);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t6, 32, t7, 32);
    t9 = (t1 + 5160);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 32);
    goto LAB6;

LAB12:    t34 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB13;

LAB14:    xsi_set_current_line(72, ng0);

LAB17:    xsi_set_current_line(73, ng0);
    t41 = (t1 + 4840);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    t44 = ((char*)((ng3)));
    memset(t45, 0, 8);
    xsi_vlog_unsigned_mod(t45, 32, t43, 17, t44, 32);
    t46 = (t1 + 6440);
    xsi_vlogvar_wait_assign_value(t46, t45, 0, 0, 4, 0LL);
    xsi_set_current_line(74, ng0);
    t4 = (t1 + 4360);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 4360);
    t9 = (t7 + 72U);
    t15 = *((char **)t9);
    t16 = (t1 + 6440);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t19, t18, 8);
    t20 = (t2 + 56U);
    t21 = *((char **)t20);
    t34 = (t1 + 848);
    t35 = xsi_create_subprogram_invocation(t21, 0, t1, t34, 0, t2);
    t41 = (t1 + 5960);
    xsi_vlogvar_assign_value(t41, t19, 0, 0, 6);

LAB18:    t42 = (t2 + 64U);
    t43 = *((char **)t42);
    t44 = (t43 + 80U);
    t46 = *((char **)t44);
    t47 = (t46 + 272U);
    t48 = *((char **)t47);
    t49 = (t48 + 0U);
    t50 = *((char **)t49);
    t51 = ((int  (*)(char *, char *))t50)(t1, t43);
    if (t51 != 0)
        goto LAB20;

LAB19:    t43 = (t2 + 64U);
    t52 = *((char **)t43);
    t43 = (t1 + 5800);
    t53 = (t43 + 56U);
    t54 = *((char **)t53);
    memcpy(t45, t54, 8);
    t55 = (t1 + 848);
    t56 = (t2 + 56U);
    t57 = *((char **)t56);
    xsi_delete_subprogram_invocation(t55, t52, t1, t57, t2);
    t58 = ((char*)((ng1)));
    xsi_vlog_get_indexed_partselect(t8, 32, t6, ((int*)(t15)), 2, t45, 11, 2, t58, 32, 1, 1);
    t59 = ((char*)((ng2)));
    memset(t60, 0, 8);
    t61 = (t8 + 4);
    t62 = (t59 + 4);
    t10 = *((unsigned int *)t8);
    t11 = *((unsigned int *)t59);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t61);
    t14 = *((unsigned int *)t62);
    t22 = (t13 ^ t14);
    t23 = (t12 | t22);
    t24 = *((unsigned int *)t61);
    t25 = *((unsigned int *)t62);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t23 & t27);
    if (t28 != 0)
        goto LAB24;

LAB21:    if (t26 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t60) = 1;

LAB24:    t64 = (t60 + 4);
    t29 = *((unsigned int *)t64);
    t30 = (~(t29));
    t31 = *((unsigned int *)t60);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB25;

LAB26:
LAB27:    goto LAB16;

LAB20:    t42 = (t2 + 48U);
    *((char **)t42) = &&LAB18;
    goto LAB1;

LAB23:    t63 = (t60 + 4);
    *((unsigned int *)t60) = 1;
    *((unsigned int *)t63) = 1;
    goto LAB24;

LAB25:    xsi_set_current_line(74, ng0);

LAB28:    xsi_set_current_line(75, ng0);
    t66 = (t1 + 4840);
    t67 = (t66 + 56U);
    t68 = *((char **)t67);
    t69 = (t1 + 4840);
    t70 = (t69 + 72U);
    t71 = *((char **)t70);
    t72 = ((char*)((ng5)));
    t73 = ((char*)((ng6)));
    xsi_vlog_get_indexed_partselect(t65, 32, t68, ((int*)(t71)), 2, t72, 32, 1, t73, 32, 1, 1);
    t74 = ((char*)((ng7)));
    memset(t75, 0, 8);
    xsi_vlog_unsigned_mod(t75, 32, t65, 32, t74, 32);
    t76 = ((char*)((ng2)));
    memset(t77, 0, 8);
    t78 = (t75 + 4);
    t79 = (t76 + 4);
    t36 = *((unsigned int *)t75);
    t37 = *((unsigned int *)t76);
    t38 = (t36 ^ t37);
    t39 = *((unsigned int *)t78);
    t40 = *((unsigned int *)t79);
    t80 = (t39 ^ t40);
    t81 = (t38 | t80);
    t82 = *((unsigned int *)t78);
    t83 = *((unsigned int *)t79);
    t84 = (t82 | t83);
    t85 = (~(t84));
    t86 = (t81 & t85);
    if (t86 != 0)
        goto LAB32;

LAB29:    if (t84 != 0)
        goto LAB31;

LAB30:    *((unsigned int *)t77) = 1;

LAB32:    t88 = (t77 + 4);
    t89 = *((unsigned int *)t88);
    t90 = (~(t89));
    t91 = *((unsigned int *)t77);
    t92 = (t91 & t90);
    t93 = (t92 != 0);
    if (t93 > 0)
        goto LAB33;

LAB34:    xsi_set_current_line(76, ng0);
    t4 = ((char*)((ng8)));
    t5 = (t1 + 4360);
    t6 = (t1 + 4360);
    t7 = (t6 + 72U);
    t9 = *((char **)t7);
    t15 = (t1 + 6440);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t60, t17, 8);
    t18 = (t2 + 56U);
    t20 = *((char **)t18);
    t21 = (t1 + 848);
    t34 = xsi_create_subprogram_invocation(t20, 0, t1, t21, 0, t2);
    t35 = (t1 + 5960);
    xsi_vlogvar_assign_value(t35, t60, 0, 0, 6);

LAB41:    t41 = (t2 + 64U);
    t42 = *((char **)t41);
    t43 = (t42 + 80U);
    t44 = *((char **)t43);
    t46 = (t44 + 272U);
    t47 = *((char **)t46);
    t48 = (t47 + 0U);
    t49 = *((char **)t48);
    t51 = ((int  (*)(char *, char *))t49)(t1, t42);
    if (t51 != 0)
        goto LAB43;

LAB42:    t42 = (t2 + 64U);
    t50 = *((char **)t42);
    t42 = (t1 + 5800);
    t52 = (t42 + 56U);
    t53 = *((char **)t52);
    memcpy(t65, t53, 8);
    t54 = (t1 + 848);
    t55 = (t2 + 56U);
    t56 = *((char **)t55);
    xsi_delete_subprogram_invocation(t54, t50, t1, t56, t2);
    t57 = ((char*)((ng1)));
    xsi_vlog_convert_indexed_partindices(t8, t19, t45, ((int*)(t9)), 2, t65, 11, 2, t57, 32, 1, 1);
    t58 = (t8 + 4);
    t10 = *((unsigned int *)t58);
    t119 = (!(t10));
    t59 = (t19 + 4);
    t11 = *((unsigned int *)t59);
    t130 = (!(t11));
    t133 = (t119 && t130);
    t61 = (t45 + 4);
    t12 = *((unsigned int *)t61);
    t134 = (!(t12));
    t137 = (t133 && t134);
    if (t137 == 1)
        goto LAB44;

LAB45:
LAB35:    xsi_set_current_line(77, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 6600);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB27;

LAB31:    t87 = (t77 + 4);
    *((unsigned int *)t77) = 1;
    *((unsigned int *)t87) = 1;
    goto LAB32;

LAB33:    xsi_set_current_line(75, ng0);
    t94 = ((char*)((ng5)));
    t95 = (t1 + 4360);
    t99 = (t1 + 4360);
    t100 = (t99 + 72U);
    t101 = *((char **)t100);
    t102 = (t1 + 6440);
    t103 = (t102 + 56U);
    t104 = *((char **)t103);
    memcpy(t105, t104, 8);
    t106 = (t2 + 56U);
    t107 = *((char **)t106);
    t108 = (t1 + 848);
    t109 = xsi_create_subprogram_invocation(t107, 0, t1, t108, 0, t2);
    t110 = (t1 + 5960);
    xsi_vlogvar_assign_value(t110, t105, 0, 0, 6);

LAB36:    t111 = (t2 + 64U);
    t112 = *((char **)t111);
    t113 = (t112 + 80U);
    t114 = *((char **)t113);
    t115 = (t114 + 272U);
    t116 = *((char **)t115);
    t117 = (t116 + 0U);
    t118 = *((char **)t117);
    t119 = ((int  (*)(char *, char *))t118)(t1, t112);
    if (t119 != 0)
        goto LAB38;

LAB37:    t112 = (t2 + 64U);
    t120 = *((char **)t112);
    t112 = (t1 + 5800);
    t121 = (t112 + 56U);
    t122 = *((char **)t121);
    memcpy(t123, t122, 8);
    t124 = (t1 + 848);
    t125 = (t2 + 56U);
    t126 = *((char **)t125);
    xsi_delete_subprogram_invocation(t124, t120, t1, t126, t2);
    t127 = ((char*)((ng1)));
    xsi_vlog_convert_indexed_partindices(t96, t97, t98, ((int*)(t101)), 2, t123, 11, 2, t127, 32, 1, 1);
    t128 = (t96 + 4);
    t129 = *((unsigned int *)t128);
    t130 = (!(t129));
    t131 = (t97 + 4);
    t132 = *((unsigned int *)t131);
    t133 = (!(t132));
    t134 = (t130 && t133);
    t135 = (t98 + 4);
    t136 = *((unsigned int *)t135);
    t137 = (!(t136));
    t138 = (t134 && t137);
    if (t138 == 1)
        goto LAB39;

LAB40:    goto LAB35;

LAB38:    t111 = (t2 + 48U);
    *((char **)t111) = &&LAB36;
    goto LAB1;

LAB39:    t139 = *((unsigned int *)t98);
    t140 = (t139 + 0);
    t141 = *((unsigned int *)t96);
    t142 = *((unsigned int *)t97);
    t143 = (t141 - t142);
    t144 = (t143 + 1);
    xsi_vlogvar_assign_value(t95, t94, t140, *((unsigned int *)t97), t144);
    goto LAB40;

LAB43:    t41 = (t2 + 48U);
    *((char **)t41) = &&LAB41;
    goto LAB1;

LAB44:    t13 = *((unsigned int *)t45);
    t138 = (t13 + 0);
    t14 = *((unsigned int *)t8);
    t22 = *((unsigned int *)t19);
    t140 = (t14 - t22);
    t143 = (t140 + 1);
    xsi_vlogvar_assign_value(t5, t4, t138, *((unsigned int *)t19), t143);
    goto LAB45;

}

static int sp_max(char *t1, char *t2)
{
    char t9[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    t0 = 1;
    xsi_set_current_line(87, ng0);

LAB2:    xsi_set_current_line(88, ng0);
    t3 = (t1 + 6920);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t1 + 7080);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memset(t9, 0, 8);
    t10 = (t5 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB4;

LAB3:    t11 = (t8 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB4;

LAB7:    if (*((unsigned int *)t5) > *((unsigned int *)t8))
        goto LAB5;

LAB6:    t13 = (t9 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t9);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB8;

LAB9:    xsi_set_current_line(89, ng0);
    t3 = (t1 + 7080);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t1 + 6760);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 3);

LAB10:    t0 = 0;

LAB1:    return t0;
LAB4:    t12 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB6;

LAB5:    *((unsigned int *)t9) = 1;
    goto LAB6;

LAB8:    xsi_set_current_line(88, ng0);
    t19 = (t1 + 6920);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t1 + 6760);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 3);
    goto LAB10;

}

static int sp_move(char *t1, char *t2)
{
    char t7[8];
    char t15[8];
    char t28[8];
    char t47[8];
    char t81[8];
    char t85[8];
    char t86[8];
    char t87[8];
    char t111[8];
    char t160[8];
    char t162[8];
    char t163[8];
    char t164[8];
    char t187[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    int t43;
    char *t44;
    char *t45;
    char *t46;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    unsigned int t52;
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
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t82;
    char *t83;
    char *t84;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t92;
    char *t93;
    char *t94;
    char *t95;
    unsigned int t96;
    char *t97;
    unsigned int t98;
    int t99;
    int t100;
    char *t101;
    unsigned int t102;
    int t103;
    int t104;
    unsigned int t105;
    int t106;
    unsigned int t107;
    unsigned int t108;
    int t109;
    int t110;
    int t112;
    char *t113;
    char *t114;
    char *t115;
    char *t116;
    char *t117;
    char *t118;
    char *t119;
    char *t120;
    char *t121;
    char *t122;
    char *t123;
    char *t124;
    char *t125;
    char *t126;
    char *t127;
    char *t128;
    char *t129;
    char *t130;
    char *t131;
    char *t132;
    char *t133;
    char *t134;
    char *t135;
    char *t136;
    char *t137;
    char *t138;
    char *t139;
    char *t140;
    char *t141;
    char *t142;
    char *t143;
    char *t144;
    char *t145;
    char *t146;
    char *t147;
    char *t148;
    char *t149;
    char *t150;
    char *t151;
    char *t152;
    char *t153;
    char *t154;
    char *t155;
    char *t156;
    char *t157;
    char *t158;
    char *t159;
    char *t161;
    char *t165;
    char *t166;
    char *t167;
    char *t168;
    char *t169;
    char *t170;
    char *t171;
    char *t172;
    char *t173;
    char *t174;
    char *t175;
    char *t176;
    char *t177;
    char *t178;
    char *t179;
    char *t180;
    char *t181;
    char *t182;
    char *t183;
    char *t184;
    char *t185;
    char *t186;
    char *t188;
    char *t189;
    char *t190;
    char *t191;
    char *t192;
    char *t193;
    char *t194;
    int t195;
    int t196;
    int t197;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 3008);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(97, ng0);

LAB5:    xsi_set_current_line(98, ng0);
    t5 = ((char*)((ng2)));
    t6 = (t1 + 7240);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);
    xsi_set_current_line(99, ng0);
    t4 = (t1 + 3800U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng9)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_multiply(t7, 32, t5, 2, t4, 32);
    t6 = (t1 + 7400);
    xsi_vlogvar_assign_value(t6, t7, 0, 0, 11);
    xsi_set_current_line(100, ng0);
    xsi_set_current_line(100, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 5160);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB6:    t4 = (t1 + 5160);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng9)));
    memset(t7, 0, 8);
    xsi_vlog_signed_less(t7, 32, t6, 32, t8, 32);
    t9 = (t7 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t7);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(124, ng0);
    xsi_set_current_line(124, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 5160);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB53:    t4 = (t1 + 5160);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng3)));
    memset(t7, 0, 8);
    xsi_vlog_signed_less(t7, 32, t6, 32, t8, 32);
    t9 = (t7 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t7);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB54;

LAB55:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB7:    xsi_set_current_line(100, ng0);

LAB9:    xsi_set_current_line(102, ng0);
    t16 = (t1 + 5640);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t1 + 5640);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t22 = (t1 + 7400);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t1 + 5160);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    memset(t28, 0, 8);
    xsi_vlog_unsigned_add(t28, 32, t24, 11, t27, 32);
    t29 = ((char*)((ng5)));
    xsi_vlog_get_indexed_partselect(t15, 6, t18, ((int*)(t21)), 2, t28, 32, 2, t29, 32, 1, 1);
    t30 = (t2 + 56U);
    t31 = *((char **)t30);
    t32 = (t1 + 848);
    t33 = xsi_create_subprogram_invocation(t31, 0, t1, t32, 0, t2);
    t34 = (t1 + 5960);
    xsi_vlogvar_assign_value(t34, t15, 0, 0, 6);

LAB10:    t35 = (t2 + 64U);
    t36 = *((char **)t35);
    t37 = (t36 + 80U);
    t38 = *((char **)t37);
    t39 = (t38 + 272U);
    t40 = *((char **)t39);
    t41 = (t40 + 0U);
    t42 = *((char **)t41);
    t43 = ((int  (*)(char *, char *))t42)(t1, t36);
    if (t43 != 0)
        goto LAB12;

LAB11:    t36 = (t2 + 64U);
    t44 = *((char **)t36);
    t36 = (t1 + 5800);
    t45 = (t36 + 56U);
    t46 = *((char **)t45);
    memcpy(t47, t46, 8);
    t48 = (t1 + 848);
    t49 = (t2 + 56U);
    t50 = *((char **)t49);
    xsi_delete_subprogram_invocation(t48, t44, t1, t50, t2);
    t51 = (t1 + 7560);
    xsi_vlogvar_assign_value(t51, t47, 0, 0, 11);
    xsi_set_current_line(103, ng0);
    t4 = (t1 + 5640);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 5640);
    t9 = (t8 + 72U);
    t16 = *((char **)t9);
    t17 = (t1 + 7400);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t1 + 5160);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_add(t15, 32, t19, 11, t22, 32);
    t23 = ((char*)((ng5)));
    memset(t28, 0, 8);
    xsi_vlog_unsigned_add(t28, 32, t15, 32, t23, 32);
    t24 = ((char*)((ng5)));
    xsi_vlog_get_indexed_partselect(t7, 6, t6, ((int*)(t16)), 2, t28, 32, 2, t24, 32, 1, 1);
    t25 = (t2 + 56U);
    t26 = *((char **)t25);
    t27 = (t1 + 848);
    t29 = xsi_create_subprogram_invocation(t26, 0, t1, t27, 0, t2);
    t30 = (t1 + 5960);
    xsi_vlogvar_assign_value(t30, t7, 0, 0, 6);

LAB13:    t31 = (t2 + 64U);
    t32 = *((char **)t31);
    t33 = (t32 + 80U);
    t34 = *((char **)t33);
    t35 = (t34 + 272U);
    t36 = *((char **)t35);
    t37 = (t36 + 0U);
    t38 = *((char **)t37);
    t43 = ((int  (*)(char *, char *))t38)(t1, t32);
    if (t43 != 0)
        goto LAB15;

LAB14:    t32 = (t2 + 64U);
    t39 = *((char **)t32);
    t32 = (t1 + 5800);
    t40 = (t32 + 56U);
    t41 = *((char **)t40);
    memcpy(t47, t41, 8);
    t42 = (t1 + 848);
    t44 = (t2 + 56U);
    t45 = *((char **)t44);
    xsi_delete_subprogram_invocation(t42, t39, t1, t45, t2);
    t46 = (t1 + 7720);
    xsi_vlogvar_assign_value(t46, t47, 0, 0, 11);
    xsi_set_current_line(105, ng0);
    t4 = (t1 + 4360);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 4360);
    t9 = (t8 + 72U);
    t16 = *((char **)t9);
    t17 = (t1 + 7720);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = ((char*)((ng1)));
    xsi_vlog_get_indexed_partselect(t7, 32, t6, ((int*)(t16)), 2, t19, 11, 2, t20, 32, 1, 1);
    t21 = ((char*)((ng2)));
    memset(t15, 0, 8);
    t22 = (t7 + 4);
    t23 = (t21 + 4);
    t10 = *((unsigned int *)t7);
    t11 = *((unsigned int *)t21);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t22);
    t14 = *((unsigned int *)t23);
    t52 = (t13 ^ t14);
    t53 = (t12 | t52);
    t54 = *((unsigned int *)t22);
    t55 = *((unsigned int *)t23);
    t56 = (t54 | t55);
    t57 = (~(t56));
    t58 = (t53 & t57);
    if (t58 != 0)
        goto LAB17;

LAB16:    if (t56 != 0)
        goto LAB18;

LAB19:    t25 = (t15 + 4);
    t59 = *((unsigned int *)t25);
    t60 = (~(t59));
    t61 = *((unsigned int *)t15);
    t62 = (t61 & t60);
    t63 = (t62 != 0);
    if (t63 > 0)
        goto LAB20;

LAB21:
LAB22:    xsi_set_current_line(100, ng0);
    t4 = (t1 + 5160);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng11)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t6, 32, t8, 32);
    t9 = (t1 + 5160);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 32);
    goto LAB6;

LAB12:    t35 = (t2 + 48U);
    *((char **)t35) = &&LAB10;
    goto LAB1;

LAB15:    t31 = (t2 + 48U);
    *((char **)t31) = &&LAB13;
    goto LAB1;

LAB17:    *((unsigned int *)t15) = 1;
    goto LAB19;

LAB18:    t24 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB19;

LAB20:    xsi_set_current_line(105, ng0);

LAB23:    xsi_set_current_line(107, ng0);
    t26 = (t1 + 4360);
    t27 = (t26 + 56U);
    t29 = *((char **)t27);
    t30 = (t1 + 4360);
    t31 = (t30 + 72U);
    t32 = *((char **)t31);
    t33 = (t1 + 7560);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng1)));
    xsi_vlog_get_indexed_partselect(t28, 32, t29, ((int*)(t32)), 2, t35, 11, 2, t36, 32, 1, 1);
    t37 = ((char*)((ng2)));
    memset(t47, 0, 8);
    t38 = (t28 + 4);
    t39 = (t37 + 4);
    t64 = *((unsigned int *)t28);
    t65 = *((unsigned int *)t37);
    t66 = (t64 ^ t65);
    t67 = *((unsigned int *)t38);
    t68 = *((unsigned int *)t39);
    t69 = (t67 ^ t68);
    t70 = (t66 | t69);
    t71 = *((unsigned int *)t38);
    t72 = *((unsigned int *)t39);
    t73 = (t71 | t72);
    t74 = (~(t73));
    t75 = (t70 & t74);
    if (t75 != 0)
        goto LAB27;

LAB24:    if (t73 != 0)
        goto LAB26;

LAB25:    *((unsigned int *)t47) = 1;

LAB27:    t41 = (t47 + 4);
    t76 = *((unsigned int *)t41);
    t77 = (~(t76));
    t78 = *((unsigned int *)t47);
    t79 = (t78 & t77);
    t80 = (t79 != 0);
    if (t80 > 0)
        goto LAB28;

LAB29:    xsi_set_current_line(113, ng0);
    t4 = (t1 + 4360);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 4360);
    t9 = (t8 + 72U);
    t16 = *((char **)t9);
    t17 = (t1 + 7560);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = ((char*)((ng1)));
    xsi_vlog_get_indexed_partselect(t7, 20, t6, ((int*)(t16)), 2, t19, 11, 2, t20, 32, 1, 1);
    t21 = (t1 + 4360);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t1 + 4360);
    t25 = (t24 + 72U);
    t26 = *((char **)t25);
    t27 = (t1 + 7720);
    t29 = (t27 + 56U);
    t30 = *((char **)t29);
    t31 = ((char*)((ng1)));
    xsi_vlog_get_indexed_partselect(t15, 20, t23, ((int*)(t26)), 2, t30, 11, 2, t31, 32, 1, 1);
    memset(t28, 0, 8);
    t32 = (t7 + 4);
    t33 = (t15 + 4);
    t10 = *((unsigned int *)t7);
    t11 = *((unsigned int *)t15);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t32);
    t14 = *((unsigned int *)t33);
    t52 = (t13 ^ t14);
    t53 = (t12 | t52);
    t54 = *((unsigned int *)t32);
    t55 = *((unsigned int *)t33);
    t56 = (t54 | t55);
    t57 = (~(t56));
    t58 = (t53 & t57);
    if (t58 != 0)
        goto LAB39;

LAB36:    if (t56 != 0)
        goto LAB38;

LAB37:    *((unsigned int *)t28) = 1;

LAB39:    t35 = (t28 + 4);
    t59 = *((unsigned int *)t35);
    t60 = (~(t59));
    t61 = *((unsigned int *)t28);
    t62 = (t61 & t60);
    t63 = (t62 != 0);
    if (t63 > 0)
        goto LAB40;

LAB41:
LAB42:
LAB30:    goto LAB22;

LAB26:    t40 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB27;

LAB28:    xsi_set_current_line(107, ng0);

LAB31:    xsi_set_current_line(108, ng0);
    t42 = (t1 + 4360);
    t44 = (t42 + 56U);
    t45 = *((char **)t44);
    t46 = (t1 + 4360);
    t48 = (t46 + 72U);
    t49 = *((char **)t48);
    t50 = (t1 + 7720);
    t51 = (t50 + 56U);
    t82 = *((char **)t51);
    t83 = ((char*)((ng1)));
    xsi_vlog_get_indexed_partselect(t81, 20, t45, ((int*)(t49)), 2, t82, 11, 2, t83, 32, 1, 1);
    t84 = (t1 + 4360);
    t88 = (t1 + 4360);
    t89 = (t88 + 72U);
    t90 = *((char **)t89);
    t91 = (t1 + 7560);
    t92 = (t91 + 56U);
    t93 = *((char **)t92);
    t94 = ((char*)((ng1)));
    xsi_vlog_convert_indexed_partindices(t85, t86, t87, ((int*)(t90)), 2, t93, 11, 2, t94, 32, 1, 1);
    t95 = (t85 + 4);
    t96 = *((unsigned int *)t95);
    t43 = (!(t96));
    t97 = (t86 + 4);
    t98 = *((unsigned int *)t97);
    t99 = (!(t98));
    t100 = (t43 && t99);
    t101 = (t87 + 4);
    t102 = *((unsigned int *)t101);
    t103 = (!(t102));
    t104 = (t100 && t103);
    if (t104 == 1)
        goto LAB32;

LAB33:    xsi_set_current_line(109, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 4360);
    t6 = (t1 + 4360);
    t8 = (t6 + 72U);
    t9 = *((char **)t8);
    t16 = (t1 + 7720);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng1)));
    xsi_vlog_convert_indexed_partindices(t7, t15, t28, ((int*)(t9)), 2, t18, 11, 2, t19, 32, 1, 1);
    t20 = (t7 + 4);
    t10 = *((unsigned int *)t20);
    t43 = (!(t10));
    t21 = (t15 + 4);
    t11 = *((unsigned int *)t21);
    t99 = (!(t11));
    t100 = (t43 && t99);
    t22 = (t28 + 4);
    t12 = *((unsigned int *)t22);
    t103 = (!(t12));
    t104 = (t100 && t103);
    if (t104 == 1)
        goto LAB34;

LAB35:    xsi_set_current_line(110, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 7240);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB30;

LAB32:    t105 = *((unsigned int *)t87);
    t106 = (t105 + 0);
    t107 = *((unsigned int *)t85);
    t108 = *((unsigned int *)t86);
    t109 = (t107 - t108);
    t110 = (t109 + 1);
    xsi_vlogvar_assign_value(t84, t81, t106, *((unsigned int *)t86), t110);
    goto LAB33;

LAB34:    t13 = *((unsigned int *)t28);
    t106 = (t13 + 0);
    t14 = *((unsigned int *)t7);
    t52 = *((unsigned int *)t15);
    t109 = (t14 - t52);
    t110 = (t109 + 1);
    xsi_vlogvar_assign_value(t5, t4, t106, *((unsigned int *)t15), t110);
    goto LAB35;

LAB38:    t34 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB39;

LAB40:    xsi_set_current_line(113, ng0);

LAB43:    xsi_set_current_line(114, ng0);
    t36 = (t1 + 4360);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    t39 = (t1 + 4360);
    t40 = (t39 + 72U);
    t41 = *((char **)t40);
    t42 = (t1 + 7560);
    t44 = (t42 + 56U);
    t45 = *((char **)t44);
    t46 = ((char*)((ng1)));
    xsi_vlog_get_indexed_partselect(t47, 32, t38, ((int*)(t41)), 2, t45, 11, 2, t46, 32, 1, 1);
    t48 = ((char*)((ng8)));
    memset(t81, 0, 8);
    xsi_vlog_unsigned_multiply(t81, 32, t47, 32, t48, 32);
    t49 = (t1 + 4360);
    t50 = (t1 + 4360);
    t51 = (t50 + 72U);
    t82 = *((char **)t51);
    t83 = (t1 + 7560);
    t84 = (t83 + 56U);
    t88 = *((char **)t84);
    t89 = ((char*)((ng1)));
    xsi_vlog_convert_indexed_partindices(t85, t86, t87, ((int*)(t82)), 2, t88, 11, 2, t89, 32, 1, 1);
    t90 = (t85 + 4);
    t64 = *((unsigned int *)t90);
    t43 = (!(t64));
    t91 = (t86 + 4);
    t65 = *((unsigned int *)t91);
    t99 = (!(t65));
    t100 = (t43 && t99);
    t92 = (t87 + 4);
    t66 = *((unsigned int *)t92);
    t103 = (!(t66));
    t104 = (t100 && t103);
    if (t104 == 1)
        goto LAB44;

LAB45:    xsi_set_current_line(115, ng0);
    t4 = (t1 + 4520);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 4360);
    t9 = (t8 + 56U);
    t16 = *((char **)t9);
    t17 = (t1 + 4360);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t1 + 7560);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = ((char*)((ng1)));
    xsi_vlog_get_indexed_partselect(t7, 21, t16, ((int*)(t19)), 2, t22, 11, 2, t23, 32, 1, 1);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_add(t15, 21, t6, 21, t7, 21);
    t24 = (t1 + 4520);
    xsi_vlogvar_assign_value(t24, t15, 0, 0, 21);
    xsi_set_current_line(116, ng0);
    t4 = (t1 + 4360);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 4360);
    t9 = (t8 + 72U);
    t16 = *((char **)t9);
    t17 = (t1 + 7560);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = ((char*)((ng1)));
    xsi_vlog_get_indexed_partselect(t7, 20, t6, ((int*)(t16)), 2, t19, 11, 2, t20, 32, 1, 1);
    t21 = (t1 + 7560);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = ((char*)((ng10)));
    memset(t15, 0, 8);
    xsi_vlog_unsigned_divide(t15, 32, t23, 11, t24, 32);
    t25 = (t1 + 7560);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t29 = ((char*)((ng1)));
    memset(t28, 0, 8);
    xsi_vlog_unsigned_divide(t28, 32, t27, 11, t29, 32);
    t30 = ((char*)((ng5)));
    memset(t47, 0, 8);
    xsi_vlog_unsigned_mod(t47, 32, t28, 32, t30, 32);
    t31 = (t2 + 56U);
    t32 = *((char **)t31);
    t33 = (t1 + 2576);
    t34 = xsi_create_subprogram_invocation(t32, 0, t1, t33, 0, t2);
    t35 = (t1 + 6920);
    xsi_vlogvar_assign_value(t35, t15, 0, 0, 3);
    t36 = (t1 + 7080);
    xsi_vlogvar_assign_value(t36, t47, 0, 0, 3);

LAB46:    t37 = (t2 + 64U);
    t38 = *((char **)t37);
    t39 = (t38 + 80U);
    t40 = *((char **)t39);
    t41 = (t40 + 272U);
    t42 = *((char **)t41);
    t44 = (t42 + 0U);
    t45 = *((char **)t44);
    t43 = ((int  (*)(char *, char *))t45)(t1, t38);
    if (t43 != 0)
        goto LAB48;

LAB47:    t38 = (t2 + 64U);
    t46 = *((char **)t38);
    t38 = (t1 + 6760);
    t48 = (t38 + 56U);
    t49 = *((char **)t48);
    memcpy(t81, t49, 8);
    t50 = (t1 + 2576);
    t51 = (t2 + 56U);
    t82 = *((char **)t51);
    xsi_delete_subprogram_invocation(t50, t46, t1, t82, t2);
    memset(t85, 0, 8);
    xsi_vlog_unsigned_add(t85, 20, t7, 20, t81, 3);
    t83 = (t1 + 4360);
    t84 = (t1 + 4360);
    t88 = (t84 + 72U);
    t89 = *((char **)t88);
    t90 = (t1 + 7560);
    t91 = (t90 + 56U);
    t92 = *((char **)t91);
    t93 = ((char*)((ng1)));
    xsi_vlog_convert_indexed_partindices(t86, t87, t111, ((int*)(t89)), 2, t92, 11, 2, t93, 32, 1, 1);
    t94 = (t86 + 4);
    t10 = *((unsigned int *)t94);
    t99 = (!(t10));
    t95 = (t87 + 4);
    t11 = *((unsigned int *)t95);
    t100 = (!(t11));
    t103 = (t99 && t100);
    t97 = (t111 + 4);
    t12 = *((unsigned int *)t97);
    t104 = (!(t12));
    t106 = (t103 && t104);
    if (t106 == 1)
        goto LAB49;

LAB50:    xsi_set_current_line(117, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 4360);
    t6 = (t1 + 4360);
    t8 = (t6 + 72U);
    t9 = *((char **)t8);
    t16 = (t1 + 7720);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng1)));
    xsi_vlog_convert_indexed_partindices(t7, t15, t28, ((int*)(t9)), 2, t18, 11, 2, t19, 32, 1, 1);
    t20 = (t7 + 4);
    t10 = *((unsigned int *)t20);
    t43 = (!(t10));
    t21 = (t15 + 4);
    t11 = *((unsigned int *)t21);
    t99 = (!(t11));
    t100 = (t43 && t99);
    t22 = (t28 + 4);
    t12 = *((unsigned int *)t22);
    t103 = (!(t12));
    t104 = (t100 && t103);
    if (t104 == 1)
        goto LAB51;

LAB52:    xsi_set_current_line(118, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 7240);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB42;

LAB44:    t67 = *((unsigned int *)t87);
    t106 = (t67 + 0);
    t68 = *((unsigned int *)t85);
    t69 = *((unsigned int *)t86);
    t109 = (t68 - t69);
    t110 = (t109 + 1);
    xsi_vlogvar_assign_value(t49, t81, t106, *((unsigned int *)t86), t110);
    goto LAB45;

LAB48:    t37 = (t2 + 48U);
    *((char **)t37) = &&LAB46;
    goto LAB1;

LAB49:    t13 = *((unsigned int *)t111);
    t109 = (t13 + 0);
    t14 = *((unsigned int *)t86);
    t52 = *((unsigned int *)t87);
    t110 = (t14 - t52);
    t112 = (t110 + 1);
    xsi_vlogvar_assign_value(t83, t85, t109, *((unsigned int *)t87), t112);
    goto LAB50;

LAB51:    t13 = *((unsigned int *)t28);
    t106 = (t13 + 0);
    t14 = *((unsigned int *)t7);
    t52 = *((unsigned int *)t15);
    t109 = (t14 - t52);
    t110 = (t109 + 1);
    xsi_vlogvar_assign_value(t5, t4, t106, *((unsigned int *)t15), t110);
    goto LAB52;

LAB54:    xsi_set_current_line(124, ng0);

LAB56:    xsi_set_current_line(125, ng0);
    t16 = (t1 + 4360);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t1 + 4360);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t22 = (t1 + 5160);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t2 + 56U);
    t26 = *((char **)t25);
    t27 = (t1 + 848);
    t29 = xsi_create_subprogram_invocation(t26, 0, t1, t27, 0, t2);
    t30 = (t1 + 5960);
    xsi_vlogvar_assign_value(t30, t24, 0, 0, 6);

LAB57:    t31 = (t2 + 64U);
    t32 = *((char **)t31);
    t33 = (t32 + 80U);
    t34 = *((char **)t33);
    t35 = (t34 + 272U);
    t36 = *((char **)t35);
    t37 = (t36 + 0U);
    t38 = *((char **)t37);
    t43 = ((int  (*)(char *, char *))t38)(t1, t32);
    if (t43 != 0)
        goto LAB59;

LAB58:    t32 = (t2 + 64U);
    t39 = *((char **)t32);
    t32 = (t1 + 5800);
    t40 = (t32 + 56U);
    t41 = *((char **)t40);
    memcpy(t28, t41, 8);
    t42 = (t1 + 848);
    t44 = (t2 + 56U);
    t45 = *((char **)t44);
    xsi_delete_subprogram_invocation(t42, t39, t1, t45, t2);
    t46 = ((char*)((ng1)));
    xsi_vlog_get_indexed_partselect(t15, 32, t18, ((int*)(t21)), 2, t28, 11, 2, t46, 32, 1, 1);
    t48 = ((char*)((ng8)));
    memset(t47, 0, 8);
    t49 = (t15 + 4);
    if (*((unsigned int *)t49) != 0)
        goto LAB61;

LAB60:    t50 = (t48 + 4);
    if (*((unsigned int *)t50) != 0)
        goto LAB61;

LAB64:    if (*((unsigned int *)t15) > *((unsigned int *)t48))
        goto LAB62;

LAB63:    t82 = (t47 + 4);
    t52 = *((unsigned int *)t82);
    t53 = (~(t52));
    t54 = *((unsigned int *)t47);
    t55 = (t54 & t53);
    t56 = (t55 != 0);
    if (t56 > 0)
        goto LAB65;

LAB66:
LAB67:    xsi_set_current_line(124, ng0);
    t4 = (t1 + 5160);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng4)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t6, 32, t8, 32);
    t9 = (t1 + 5160);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 32);
    goto LAB53;

LAB59:    t31 = (t2 + 48U);
    *((char **)t31) = &&LAB57;
    goto LAB1;

LAB61:    t51 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB63;

LAB62:    *((unsigned int *)t47) = 1;
    goto LAB63;

LAB65:    xsi_set_current_line(125, ng0);

LAB68:    xsi_set_current_line(126, ng0);
    t83 = (t1 + 4360);
    t84 = (t83 + 56U);
    t88 = *((char **)t84);
    t89 = (t1 + 4360);
    t90 = (t89 + 72U);
    t91 = *((char **)t90);
    t92 = (t1 + 5160);
    t93 = (t92 + 56U);
    t94 = *((char **)t93);
    t95 = (t2 + 56U);
    t97 = *((char **)t95);
    t101 = (t1 + 848);
    t113 = xsi_create_subprogram_invocation(t97, 0, t1, t101, 0, t2);
    t114 = (t1 + 5960);
    xsi_vlogvar_assign_value(t114, t94, 0, 0, 6);

LAB69:    t115 = (t2 + 64U);
    t116 = *((char **)t115);
    t117 = (t116 + 80U);
    t118 = *((char **)t117);
    t119 = (t118 + 272U);
    t120 = *((char **)t119);
    t121 = (t120 + 0U);
    t122 = *((char **)t121);
    t99 = ((int  (*)(char *, char *))t122)(t1, t116);
    if (t99 != 0)
        goto LAB71;

LAB70:    t116 = (t2 + 64U);
    t123 = *((char **)t116);
    t116 = (t1 + 5800);
    t124 = (t116 + 56U);
    t125 = *((char **)t124);
    memcpy(t85, t125, 8);
    t126 = (t1 + 848);
    t127 = (t2 + 56U);
    t128 = *((char **)t127);
    xsi_delete_subprogram_invocation(t126, t123, t1, t128, t2);
    t129 = ((char*)((ng1)));
    xsi_vlog_get_indexed_partselect(t81, 32, t88, ((int*)(t91)), 2, t85, 11, 2, t129, 32, 1, 1);
    t130 = (t1 + 4360);
    t131 = (t130 + 56U);
    t132 = *((char **)t131);
    t133 = (t1 + 4360);
    t134 = (t133 + 72U);
    t135 = *((char **)t134);
    t136 = (t1 + 5160);
    t137 = (t136 + 56U);
    t138 = *((char **)t137);
    t139 = (t2 + 56U);
    t140 = *((char **)t139);
    t141 = (t1 + 848);
    t142 = xsi_create_subprogram_invocation(t140, 0, t1, t141, 0, t2);
    t143 = (t1 + 5960);
    xsi_vlogvar_assign_value(t143, t138, 0, 0, 6);

LAB72:    t144 = (t2 + 64U);
    t145 = *((char **)t144);
    t146 = (t145 + 80U);
    t147 = *((char **)t146);
    t148 = (t147 + 272U);
    t149 = *((char **)t148);
    t150 = (t149 + 0U);
    t151 = *((char **)t150);
    t100 = ((int  (*)(char *, char *))t151)(t1, t145);
    if (t100 != 0)
        goto LAB74;

LAB73:    t145 = (t2 + 64U);
    t152 = *((char **)t145);
    t145 = (t1 + 5800);
    t153 = (t145 + 56U);
    t154 = *((char **)t153);
    memcpy(t87, t154, 8);
    t155 = (t1 + 848);
    t156 = (t2 + 56U);
    t157 = *((char **)t156);
    xsi_delete_subprogram_invocation(t155, t152, t1, t157, t2);
    t158 = ((char*)((ng1)));
    xsi_vlog_get_indexed_partselect(t86, 32, t132, ((int*)(t135)), 2, t87, 11, 2, t158, 32, 1, 1);
    t159 = ((char*)((ng5)));
    memset(t111, 0, 8);
    xsi_vlog_unsigned_mod(t111, 32, t86, 32, t159, 32);
    memset(t160, 0, 8);
    xsi_vlog_unsigned_minus(t160, 32, t81, 32, t111, 32);
    t161 = (t1 + 4360);
    t165 = (t1 + 4360);
    t166 = (t165 + 72U);
    t167 = *((char **)t166);
    t168 = (t1 + 5160);
    t169 = (t168 + 56U);
    t170 = *((char **)t169);
    t171 = (t2 + 56U);
    t172 = *((char **)t171);
    t173 = (t1 + 848);
    t174 = xsi_create_subprogram_invocation(t172, 0, t1, t173, 0, t2);
    t175 = (t1 + 5960);
    xsi_vlogvar_assign_value(t175, t170, 0, 0, 6);

LAB75:    t176 = (t2 + 64U);
    t177 = *((char **)t176);
    t178 = (t177 + 80U);
    t179 = *((char **)t178);
    t180 = (t179 + 272U);
    t181 = *((char **)t180);
    t182 = (t181 + 0U);
    t183 = *((char **)t182);
    t103 = ((int  (*)(char *, char *))t183)(t1, t177);
    if (t103 != 0)
        goto LAB77;

LAB76:    t177 = (t2 + 64U);
    t184 = *((char **)t177);
    t177 = (t1 + 5800);
    t185 = (t177 + 56U);
    t186 = *((char **)t185);
    memcpy(t187, t186, 8);
    t188 = (t1 + 848);
    t189 = (t2 + 56U);
    t190 = *((char **)t189);
    xsi_delete_subprogram_invocation(t188, t184, t1, t190, t2);
    t191 = ((char*)((ng1)));
    xsi_vlog_convert_indexed_partindices(t162, t163, t164, ((int*)(t167)), 2, t187, 11, 2, t191, 32, 1, 1);
    t192 = (t162 + 4);
    t57 = *((unsigned int *)t192);
    t104 = (!(t57));
    t193 = (t163 + 4);
    t58 = *((unsigned int *)t193);
    t106 = (!(t58));
    t109 = (t104 && t106);
    t194 = (t164 + 4);
    t59 = *((unsigned int *)t194);
    t110 = (!(t59));
    t112 = (t109 && t110);
    if (t112 == 1)
        goto LAB78;

LAB79:    goto LAB67;

LAB71:    t115 = (t2 + 48U);
    *((char **)t115) = &&LAB69;
    goto LAB1;

LAB74:    t144 = (t2 + 48U);
    *((char **)t144) = &&LAB72;
    goto LAB1;

LAB77:    t176 = (t2 + 48U);
    *((char **)t176) = &&LAB75;
    goto LAB1;

LAB78:    t60 = *((unsigned int *)t164);
    t195 = (t60 + 0);
    t61 = *((unsigned int *)t162);
    t62 = *((unsigned int *)t163);
    t196 = (t61 - t62);
    t197 = (t196 + 1);
    xsi_vlogvar_assign_value(t161, t160, t195, *((unsigned int *)t163), t197);
    goto LAB79;

}

static void Initial_132_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    t1 = (t0 + 8632U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(132, ng0);

LAB4:    xsi_set_current_line(133, ng0);
    t2 = (t0 + 8440);
    t3 = (t0 + 1280);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB7:    t5 = (t0 + 8536);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB9:    if (t13 != 0)
        goto LAB10;

LAB5:    t6 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t6);

LAB6:    t14 = (t0 + 8536);
    t15 = *((char **)t14);
    t14 = (t0 + 1280);
    t16 = (t0 + 8440);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);

LAB1:    return;
LAB8:;
LAB10:    t5 = (t0 + 8632U);
    *((char **)t5) = &&LAB7;
    goto LAB1;

}

static void Always_136_1(char *t0)
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

LAB0:    t1 = (t0 + 8880U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(136, ng0);
    t2 = (t0 + 9448);
    *((int *)t2) = 1;
    t3 = (t0 + 8912);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(136, ng0);

LAB5:    xsi_set_current_line(137, ng0);
    t4 = (t0 + 4840);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t6, 17, t7, 32);
    t9 = (t0 + 4840);
    xsi_vlogvar_wait_assign_value(t9, t8, 0, 0, 17, 0LL);
    goto LAB2;

}

static void Always_141_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
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
    int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    t1 = (t0 + 9128U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(141, ng0);
    t2 = (t0 + 9464);
    *((int *)t2) = 1;
    t3 = (t0 + 9160);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(141, ng0);

LAB5:    xsi_set_current_line(142, ng0);
    t4 = (t0 + 3960U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    xsi_set_current_line(146, ng0);
    t2 = (t0 + 8936);
    t3 = (t0 + 3008);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB18:    t5 = (t0 + 9032);
    t11 = *((char **)t5);
    t12 = (t11 + 80U);
    t13 = *((char **)t12);
    t14 = (t13 + 272U);
    t15 = *((char **)t14);
    t16 = (t15 + 0U);
    t17 = *((char **)t16);
    t22 = ((int  (*)(char *, char *))t17)(t0, t11);

LAB20:    if (t22 != 0)
        goto LAB21;

LAB16:    t11 = (t0 + 3008);
    xsi_vlog_subprogram_popinvocation(t11);

LAB17:    t18 = (t0 + 9032);
    t19 = *((char **)t18);
    t18 = (t0 + 7240);
    t20 = (t18 + 56U);
    t21 = *((char **)t20);
    t23 = (t0 + 5000);
    xsi_vlogvar_assign_value(t23, t21, 0, 0, 1);
    t24 = (t0 + 3008);
    t25 = (t0 + 8936);
    t26 = 0;
    xsi_delete_subprogram_invocation(t24, t19, t0, t25, t26);
    xsi_set_current_line(147, ng0);
    t2 = (t0 + 5000);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB22;

LAB23:
LAB24:    goto LAB2;

LAB6:    xsi_set_current_line(142, ng0);

LAB9:    xsi_set_current_line(143, ng0);
    t11 = (t0 + 8936);
    t12 = (t0 + 1280);
    t13 = xsi_create_subprogram_invocation(t11, 0, t0, t12, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t12, t13);

LAB12:    t14 = (t0 + 9032);
    t15 = *((char **)t14);
    t16 = (t15 + 80U);
    t17 = *((char **)t16);
    t18 = (t17 + 272U);
    t19 = *((char **)t18);
    t20 = (t19 + 0U);
    t21 = *((char **)t20);
    t22 = ((int  (*)(char *, char *))t21)(t0, t15);

LAB14:    if (t22 != 0)
        goto LAB15;

LAB10:    t15 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t15);

LAB11:    t23 = (t0 + 9032);
    t24 = *((char **)t23);
    t23 = (t0 + 1280);
    t25 = (t0 + 8936);
    t26 = 0;
    xsi_delete_subprogram_invocation(t23, t24, t0, t25, t26);
    goto LAB8;

LAB13:;
LAB15:    t14 = (t0 + 9128U);
    *((char **)t14) = &&LAB12;
    goto LAB1;

LAB19:;
LAB21:    t5 = (t0 + 9128U);
    *((char **)t5) = &&LAB18;
    goto LAB1;

LAB22:    xsi_set_current_line(147, ng0);
    t11 = (t0 + 8936);
    t12 = (t0 + 2144);
    t13 = xsi_create_subprogram_invocation(t11, 0, t0, t12, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t12, t13);

LAB27:    t14 = (t0 + 9032);
    t15 = *((char **)t14);
    t16 = (t15 + 80U);
    t17 = *((char **)t16);
    t18 = (t17 + 272U);
    t19 = *((char **)t18);
    t20 = (t19 + 0U);
    t21 = *((char **)t20);
    t22 = ((int  (*)(char *, char *))t21)(t0, t15);

LAB29:    if (t22 != 0)
        goto LAB30;

LAB25:    t15 = (t0 + 2144);
    xsi_vlog_subprogram_popinvocation(t15);

LAB26:    t23 = (t0 + 9032);
    t24 = *((char **)t23);
    t23 = (t0 + 2144);
    t25 = (t0 + 8936);
    t26 = 0;
    xsi_delete_subprogram_invocation(t23, t24, t0, t25, t26);
    goto LAB24;

LAB28:;
LAB30:    t14 = (t0 + 9128U);
    *((char **)t14) = &&LAB27;
    goto LAB1;

}


extern void work_m_16245648565664016404_2260019474_init()
{
	static char *pe[] = {(void *)Initial_132_0,(void *)Always_136_1,(void *)Always_141_2};
	static char *se[] = {(void *)sp_getSplice,(void *)sp_resetBoard,(void *)sp_emptyCellExists,(void *)sp_addNewCell,(void *)sp_max,(void *)sp_move};
	xsi_register_didat("work_m_16245648565664016404_2260019474", "isim/tb_isim_beh.exe.sim/work/m_16245648565664016404_2260019474.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}