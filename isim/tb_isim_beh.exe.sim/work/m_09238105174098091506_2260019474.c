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
static unsigned int ng9[] = {0U, 0U};
static unsigned int ng10[] = {1U, 0U};
static unsigned int ng11[] = {2U, 0U};
static int ng12[] = {3, 0};
static unsigned int ng13[] = {3U, 0U};



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
    xsi_set_current_line(36, ng0);

LAB2:    xsi_set_current_line(37, ng0);
    t3 = (t1 + 8392);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng1)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_multiply(t7, 32, t5, 6, t6, 32);
    t8 = (t1 + 8232);
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
    xsi_set_current_line(43, ng0);

LAB5:    xsi_set_current_line(45, ng0);
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
    xsi_set_current_line(46, ng0);
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
    xsi_set_current_line(47, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 7112);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 21, 0LL);

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
    xsi_set_current_line(53, ng0);

LAB2:    xsi_set_current_line(54, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t1 + 8552);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(55, ng0);
    xsi_set_current_line(55, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t1 + 7752);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);

LAB3:    t3 = (t1 + 7752);
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
LAB4:    xsi_set_current_line(55, ng0);

LAB6:    xsi_set_current_line(56, ng0);
    t15 = (t1 + 8712);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t1 + 8712);
    t19 = (t18 + 72U);
    t20 = *((char **)t19);
    t21 = (t1 + 7752);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t2 + 56U);
    t25 = *((char **)t24);
    t26 = (t1 + 848);
    t27 = xsi_create_subprogram_invocation(t25, 0, t1, t26, 0, t2);
    t28 = (t1 + 8392);
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
    t30 = (t1 + 8232);
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
LAB16:    xsi_set_current_line(55, ng0);
    t3 = (t1 + 7752);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng4)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t5, 32, t6, 32);
    t8 = (t1 + 7752);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 32);
    goto LAB3;

LAB9:    t29 = (t2 + 48U);
    *((char **)t29) = &&LAB7;
    goto LAB1;

LAB12:    t62 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t62) = 1;
    goto LAB13;

LAB14:    xsi_set_current_line(56, ng0);

LAB17:    xsi_set_current_line(57, ng0);
    t69 = ((char*)((ng4)));
    t70 = (t1 + 8552);
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
    xsi_set_current_line(66, ng0);

LAB5:    xsi_set_current_line(67, ng0);
    t5 = ((char*)((ng2)));
    t6 = (t1 + 9032);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);
    xsi_set_current_line(68, ng0);
    xsi_set_current_line(68, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 7752);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB6:    t4 = (t1 + 7752);
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
LAB7:    xsi_set_current_line(68, ng0);

LAB9:    xsi_set_current_line(69, ng0);
    t15 = (t1 + 9032);
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
LAB16:    xsi_set_current_line(68, ng0);
    t4 = (t1 + 7752);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t6, 32, t7, 32);
    t9 = (t1 + 7752);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 32);
    goto LAB6;

LAB12:    t34 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB13;

LAB14:    xsi_set_current_line(69, ng0);

LAB17:    xsi_set_current_line(70, ng0);
    t41 = (t1 + 7432);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    t44 = ((char*)((ng3)));
    memset(t45, 0, 8);
    xsi_vlog_unsigned_mod(t45, 32, t43, 17, t44, 32);
    t46 = (t1 + 8872);
    xsi_vlogvar_wait_assign_value(t46, t45, 0, 0, 4, 0LL);
    xsi_set_current_line(71, ng0);
    t4 = (t1 + 6952);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 6952);
    t9 = (t7 + 72U);
    t15 = *((char **)t9);
    t16 = (t1 + 8872);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t19, t18, 8);
    t20 = (t2 + 56U);
    t21 = *((char **)t20);
    t34 = (t1 + 848);
    t35 = xsi_create_subprogram_invocation(t21, 0, t1, t34, 0, t2);
    t41 = (t1 + 8392);
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
    t43 = (t1 + 8232);
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

LAB25:    xsi_set_current_line(71, ng0);

LAB28:    xsi_set_current_line(72, ng0);
    t66 = (t1 + 7432);
    t67 = (t66 + 56U);
    t68 = *((char **)t67);
    t69 = (t1 + 7432);
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

LAB34:    xsi_set_current_line(73, ng0);
    t4 = ((char*)((ng8)));
    t5 = (t1 + 6952);
    t6 = (t1 + 6952);
    t7 = (t6 + 72U);
    t9 = *((char **)t7);
    t15 = (t1 + 8872);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t60, t17, 8);
    t18 = (t2 + 56U);
    t20 = *((char **)t18);
    t21 = (t1 + 848);
    t34 = xsi_create_subprogram_invocation(t20, 0, t1, t21, 0, t2);
    t35 = (t1 + 8392);
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
    t42 = (t1 + 8232);
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
LAB35:    xsi_set_current_line(74, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 9032);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB27;

LAB31:    t87 = (t77 + 4);
    *((unsigned int *)t77) = 1;
    *((unsigned int *)t87) = 1;
    goto LAB32;

LAB33:    xsi_set_current_line(72, ng0);
    t94 = ((char*)((ng5)));
    t95 = (t1 + 6952);
    t99 = (t1 + 6952);
    t100 = (t99 + 72U);
    t101 = *((char **)t100);
    t102 = (t1 + 8872);
    t103 = (t102 + 56U);
    t104 = *((char **)t103);
    memcpy(t105, t104, 8);
    t106 = (t2 + 56U);
    t107 = *((char **)t106);
    t108 = (t1 + 848);
    t109 = xsi_create_subprogram_invocation(t107, 0, t1, t108, 0, t2);
    t110 = (t1 + 8392);
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
    t112 = (t1 + 8232);
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

static int sp_startX(char *t1, char *t2)
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
    xsi_set_current_line(83, ng0);

LAB2:    xsi_set_current_line(84, ng0);
    t3 = (t1 + 9352);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);

LAB3:    t6 = ((char*)((ng9)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 2, t6, 2);
    if (t7 == 1)
        goto LAB4;

LAB5:    t3 = ((char*)((ng10)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 2, t3, 2);
    if (t7 == 1)
        goto LAB6;

LAB7:    t3 = ((char*)((ng11)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 2, t3, 2);
    if (t7 == 1)
        goto LAB8;

LAB9:    t3 = ((char*)((ng13)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 2, t3, 2);
    if (t7 == 1)
        goto LAB10;

LAB11:
LAB12:    t0 = 0;

LAB1:    return t0;
LAB4:    xsi_set_current_line(85, ng0);
    t8 = ((char*)((ng2)));
    t9 = (t1 + 9192);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 3);
    goto LAB12;

LAB6:    xsi_set_current_line(86, ng0);
    t4 = ((char*)((ng2)));
    t6 = (t1 + 9192);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 3);
    goto LAB12;

LAB8:    xsi_set_current_line(87, ng0);
    t4 = ((char*)((ng12)));
    t6 = (t1 + 9192);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 3);
    goto LAB12;

LAB10:    xsi_set_current_line(88, ng0);
    t4 = ((char*)((ng2)));
    t6 = (t1 + 9192);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 3);
    goto LAB12;

}

static int sp_startY(char *t1, char *t2)
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
    xsi_set_current_line(95, ng0);

LAB2:    xsi_set_current_line(96, ng0);
    t3 = (t1 + 9672);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);

LAB3:    t6 = ((char*)((ng9)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 2, t6, 2);
    if (t7 == 1)
        goto LAB4;

LAB5:    t3 = ((char*)((ng10)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 2, t3, 2);
    if (t7 == 1)
        goto LAB6;

LAB7:    t3 = ((char*)((ng11)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 2, t3, 2);
    if (t7 == 1)
        goto LAB8;

LAB9:    t3 = ((char*)((ng13)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 2, t3, 2);
    if (t7 == 1)
        goto LAB10;

LAB11:
LAB12:    t0 = 0;

LAB1:    return t0;
LAB4:    xsi_set_current_line(97, ng0);
    t8 = ((char*)((ng2)));
    t9 = (t1 + 9512);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 3);
    goto LAB12;

LAB6:    xsi_set_current_line(98, ng0);
    t4 = ((char*)((ng12)));
    t6 = (t1 + 9512);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 3);
    goto LAB12;

LAB8:    xsi_set_current_line(99, ng0);
    t4 = ((char*)((ng12)));
    t6 = (t1 + 9512);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 3);
    goto LAB12;

LAB10:    xsi_set_current_line(100, ng0);
    t4 = ((char*)((ng2)));
    t6 = (t1 + 9512);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 3);
    goto LAB12;

}

static int sp_moveX(char *t1, char *t2)
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
    xsi_set_current_line(107, ng0);

LAB2:    xsi_set_current_line(108, ng0);
    t3 = (t1 + 9992);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);

LAB3:    t6 = ((char*)((ng9)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 2, t6, 2);
    if (t7 == 1)
        goto LAB4;

LAB5:    t3 = ((char*)((ng10)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 2, t3, 2);
    if (t7 == 1)
        goto LAB6;

LAB7:    t3 = ((char*)((ng11)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 2, t3, 2);
    if (t7 == 1)
        goto LAB8;

LAB9:    t3 = ((char*)((ng13)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 2, t3, 2);
    if (t7 == 1)
        goto LAB10;

LAB11:
LAB12:    t0 = 0;

LAB1:    return t0;
LAB4:    xsi_set_current_line(109, ng0);
    t8 = ((char*)((ng2)));
    t9 = (t1 + 9832);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 3);
    goto LAB12;

LAB6:    xsi_set_current_line(110, ng0);
    t4 = ((char*)((ng4)));
    t6 = (t1 + 9832);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 3);
    goto LAB12;

LAB8:    xsi_set_current_line(111, ng0);
    t4 = ((char*)((ng2)));
    t6 = (t1 + 9832);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 3);
    goto LAB12;

LAB10:    xsi_set_current_line(112, ng0);
    t4 = ((char*)((ng4)));
    t6 = (t1 + 9832);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 3);
    goto LAB12;

}

static int sp_moveY(char *t1, char *t2)
{
    char t10[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;

LAB0:    t0 = 1;
    xsi_set_current_line(119, ng0);

LAB2:    xsi_set_current_line(120, ng0);
    t3 = (t1 + 10312);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);

LAB3:    t6 = ((char*)((ng9)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 2, t6, 2);
    if (t7 == 1)
        goto LAB4;

LAB5:    t3 = ((char*)((ng10)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 2, t3, 2);
    if (t7 == 1)
        goto LAB6;

LAB7:    t3 = ((char*)((ng11)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 2, t3, 2);
    if (t7 == 1)
        goto LAB8;

LAB9:    t3 = ((char*)((ng13)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 2, t3, 2);
    if (t7 == 1)
        goto LAB10;

LAB11:
LAB12:    t0 = 0;

LAB1:    return t0;
LAB4:    xsi_set_current_line(121, ng0);
    t8 = ((char*)((ng4)));
    t9 = (t1 + 10152);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 3);
    goto LAB12;

LAB6:    xsi_set_current_line(122, ng0);
    t4 = ((char*)((ng2)));
    t6 = (t1 + 10152);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 3);
    goto LAB12;

LAB8:    xsi_set_current_line(123, ng0);
    t4 = ((char*)((ng4)));
    memset(t10, 0, 8);
    xsi_vlog_signed_unary_minus(t10, 32, t4, 32);
    t6 = (t1 + 10152);
    xsi_vlogvar_assign_value(t6, t10, 0, 0, 3);
    goto LAB12;

LAB10:    xsi_set_current_line(124, ng0);
    t4 = ((char*)((ng2)));
    t6 = (t1 + 10152);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 3);
    goto LAB12;

}

static int sp_mergeX(char *t1, char *t2)
{
    char t10[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;

LAB0:    t0 = 1;
    xsi_set_current_line(131, ng0);

LAB2:    xsi_set_current_line(132, ng0);
    t3 = (t1 + 10632);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);

LAB3:    t6 = ((char*)((ng9)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 2, t6, 2);
    if (t7 == 1)
        goto LAB4;

LAB5:    t3 = ((char*)((ng10)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 2, t3, 2);
    if (t7 == 1)
        goto LAB6;

LAB7:    t3 = ((char*)((ng11)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 2, t3, 2);
    if (t7 == 1)
        goto LAB8;

LAB9:    t3 = ((char*)((ng13)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 2, t3, 2);
    if (t7 == 1)
        goto LAB10;

LAB11:
LAB12:    t0 = 0;

LAB1:    return t0;
LAB4:    xsi_set_current_line(133, ng0);
    t8 = ((char*)((ng4)));
    t9 = (t1 + 10472);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 3);
    goto LAB12;

LAB6:    xsi_set_current_line(134, ng0);
    t4 = ((char*)((ng2)));
    t6 = (t1 + 10472);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 3);
    goto LAB12;

LAB8:    xsi_set_current_line(135, ng0);
    t4 = ((char*)((ng4)));
    memset(t10, 0, 8);
    xsi_vlog_signed_unary_minus(t10, 32, t4, 32);
    t6 = (t1 + 10472);
    xsi_vlogvar_assign_value(t6, t10, 0, 0, 3);
    goto LAB12;

LAB10:    xsi_set_current_line(136, ng0);
    t4 = ((char*)((ng2)));
    t6 = (t1 + 10472);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 3);
    goto LAB12;

}

static int sp_mergeY(char *t1, char *t2)
{
    char t10[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;

LAB0:    t0 = 1;
    xsi_set_current_line(143, ng0);

LAB2:    xsi_set_current_line(144, ng0);
    t3 = (t1 + 10952);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);

LAB3:    t6 = ((char*)((ng9)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 2, t6, 2);
    if (t7 == 1)
        goto LAB4;

LAB5:    t3 = ((char*)((ng10)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 2, t3, 2);
    if (t7 == 1)
        goto LAB6;

LAB7:    t3 = ((char*)((ng11)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 2, t3, 2);
    if (t7 == 1)
        goto LAB8;

LAB9:    t3 = ((char*)((ng13)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 2, t3, 2);
    if (t7 == 1)
        goto LAB10;

LAB11:
LAB12:    t0 = 0;

LAB1:    return t0;
LAB4:    xsi_set_current_line(145, ng0);
    t8 = ((char*)((ng2)));
    t9 = (t1 + 10792);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 3);
    goto LAB12;

LAB6:    xsi_set_current_line(146, ng0);
    t4 = ((char*)((ng4)));
    memset(t10, 0, 8);
    xsi_vlog_signed_unary_minus(t10, 32, t4, 32);
    t6 = (t1 + 10792);
    xsi_vlogvar_assign_value(t6, t10, 0, 0, 3);
    goto LAB12;

LAB8:    xsi_set_current_line(147, ng0);
    t4 = ((char*)((ng2)));
    t6 = (t1 + 10792);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 3);
    goto LAB12;

LAB10:    xsi_set_current_line(148, ng0);
    t4 = ((char*)((ng4)));
    t6 = (t1 + 10792);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 3);
    goto LAB12;

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
    xsi_set_current_line(156, ng0);

LAB2:    xsi_set_current_line(157, ng0);
    t3 = (t1 + 11272);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t1 + 11432);
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

LAB9:    xsi_set_current_line(158, ng0);
    t3 = (t1 + 11432);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t1 + 11112);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 3);

LAB10:    t0 = 0;

LAB1:    return t0;
LAB4:    t12 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB6;

LAB5:    *((unsigned int *)t9) = 1;
    goto LAB6;

LAB8:    xsi_set_current_line(157, ng0);
    t19 = (t1 + 11272);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t1 + 11112);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 3);
    goto LAB10;

}

static int sp_move(char *t1, char *t2)
{
    char t8[8];
    char t33[8];
    char t58[8];
    char t62[8];
    char t63[8];
    char t85[8];
    char t89[8];
    char t90[8];
    char t107[8];
    char t108[8];
    char t110[8];
    char t128[8];
    char t132[8];
    char t150[8];
    char t156[8];
    char t172[8];
    char t180[8];
    char t218[8];
    char t246[8];
    char t250[8];
    char t252[8];
    char t256[8];
    char t275[8];
    char t279[8];
    char t297[8];
    char t303[8];
    char t304[8];
    char t305[8];
    char t313[8];
    char t317[8];
    char t335[8];
    char t357[8];
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
    int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
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
    char *t53;
    int t54;
    char *t55;
    char *t56;
    char *t57;
    char *t59;
    char *t60;
    char *t61;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    int t81;
    char *t82;
    char *t83;
    char *t84;
    char *t86;
    char *t87;
    char *t88;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    char *t109;
    char *t111;
    char *t112;
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
    char *t129;
    char *t130;
    char *t131;
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
    int t146;
    char *t147;
    char *t148;
    char *t149;
    char *t151;
    char *t152;
    char *t153;
    char *t154;
    char *t155;
    char *t157;
    char *t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    char *t171;
    char *t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    char *t179;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    char *t184;
    char *t185;
    char *t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    char *t194;
    char *t195;
    unsigned int t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    unsigned int t203;
    int t204;
    int t205;
    unsigned int t206;
    unsigned int t207;
    unsigned int t208;
    unsigned int t209;
    unsigned int t210;
    unsigned int t211;
    char *t212;
    unsigned int t213;
    unsigned int t214;
    unsigned int t215;
    unsigned int t216;
    unsigned int t217;
    char *t219;
    char *t220;
    char *t221;
    char *t222;
    char *t223;
    char *t224;
    char *t225;
    char *t226;
    char *t227;
    char *t228;
    char *t229;
    char *t230;
    char *t231;
    char *t232;
    char *t233;
    char *t234;
    char *t235;
    char *t236;
    char *t237;
    char *t238;
    char *t239;
    char *t240;
    char *t241;
    int t242;
    char *t243;
    char *t244;
    char *t245;
    char *t247;
    char *t248;
    char *t249;
    char *t251;
    char *t253;
    char *t254;
    char *t255;
    char *t257;
    char *t258;
    char *t259;
    char *t260;
    char *t261;
    char *t262;
    char *t263;
    char *t264;
    char *t265;
    char *t266;
    char *t267;
    char *t268;
    char *t269;
    char *t270;
    int t271;
    char *t272;
    char *t273;
    char *t274;
    char *t276;
    char *t277;
    char *t278;
    char *t280;
    char *t281;
    char *t282;
    char *t283;
    char *t284;
    char *t285;
    char *t286;
    char *t287;
    char *t288;
    char *t289;
    char *t290;
    char *t291;
    char *t292;
    int t293;
    char *t294;
    char *t295;
    char *t296;
    char *t298;
    char *t299;
    char *t300;
    char *t301;
    char *t302;
    char *t306;
    char *t307;
    char *t308;
    char *t309;
    char *t310;
    char *t311;
    char *t312;
    char *t314;
    char *t315;
    char *t316;
    char *t318;
    char *t319;
    char *t320;
    char *t321;
    char *t322;
    char *t323;
    char *t324;
    char *t325;
    char *t326;
    char *t327;
    char *t328;
    char *t329;
    char *t330;
    int t331;
    char *t332;
    char *t333;
    char *t334;
    char *t336;
    char *t337;
    char *t338;
    char *t339;
    char *t340;
    unsigned int t341;
    int t342;
    char *t343;
    unsigned int t344;
    int t345;
    int t346;
    char *t347;
    unsigned int t348;
    int t349;
    int t350;
    unsigned int t351;
    int t352;
    unsigned int t353;
    unsigned int t354;
    int t355;
    int t356;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 5600);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(166, ng0);

LAB5:    xsi_set_current_line(167, ng0);
    t5 = ((char*)((ng2)));
    t6 = (t1 + 11592);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);
    xsi_set_current_line(168, ng0);
    xsi_set_current_line(168, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 7752);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB6:    t4 = (t1 + 7752);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng5)));
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

LAB8:    xsi_set_current_line(189, ng0);
    xsi_set_current_line(189, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 7752);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB170:    t4 = (t1 + 7752);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t6, 32, t7, 32);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB171;

LAB172:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB7:    xsi_set_current_line(168, ng0);

LAB9:    xsi_set_current_line(169, ng0);
    xsi_set_current_line(169, ng0);
    t15 = ((char*)((ng2)));
    t16 = (t1 + 8072);
    xsi_vlogvar_assign_value(t16, t15, 0, 0, 32);

LAB10:    t4 = (t1 + 8072);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng12)));
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t6, 32, t7, 32);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(168, ng0);
    t4 = (t1 + 7752);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t6, 32, t7, 32);
    t9 = (t1 + 7752);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 32);
    goto LAB6;

LAB11:    xsi_set_current_line(169, ng0);

LAB13:    xsi_set_current_line(170, ng0);
    xsi_set_current_line(170, ng0);
    t15 = ((char*)((ng2)));
    t16 = (t1 + 7912);
    xsi_vlogvar_assign_value(t16, t15, 0, 0, 32);

LAB14:    t4 = (t1 + 7912);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng12)));
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t6, 32, t7, 32);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(169, ng0);
    t4 = (t1 + 8072);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t6, 32, t7, 32);
    t9 = (t1 + 8072);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 32);
    goto LAB10;

LAB15:    xsi_set_current_line(170, ng0);

LAB17:    xsi_set_current_line(171, ng0);
    t15 = (t1 + 6392U);
    t16 = *((char **)t15);
    t15 = (t2 + 56U);
    t17 = *((char **)t15);
    t18 = (t1 + 2576);
    t19 = xsi_create_subprogram_invocation(t17, 0, t1, t18, 0, t2);
    t20 = (t1 + 9352);
    xsi_vlogvar_assign_value(t20, t16, 0, 0, 2);

LAB18:    t21 = (t2 + 64U);
    t22 = *((char **)t21);
    t23 = (t22 + 80U);
    t24 = *((char **)t23);
    t25 = (t24 + 272U);
    t26 = *((char **)t25);
    t27 = (t26 + 0U);
    t28 = *((char **)t27);
    t29 = ((int  (*)(char *, char *))t28)(t1, t22);
    if (t29 != 0)
        goto LAB20;

LAB19:    t22 = (t2 + 64U);
    t30 = *((char **)t22);
    t22 = (t1 + 9192);
    t31 = (t22 + 56U);
    t32 = *((char **)t31);
    memcpy(t33, t32, 8);
    t34 = (t1 + 2576);
    t35 = (t2 + 56U);
    t36 = *((char **)t35);
    xsi_delete_subprogram_invocation(t34, t30, t1, t36, t2);
    t37 = (t1 + 7752);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    t40 = (t1 + 6392U);
    t41 = *((char **)t40);
    t40 = (t2 + 56U);
    t42 = *((char **)t40);
    t43 = (t1 + 3440);
    t44 = xsi_create_subprogram_invocation(t42, 0, t1, t43, 0, t2);
    t45 = (t1 + 9992);
    xsi_vlogvar_assign_value(t45, t41, 0, 0, 2);

LAB21:    t46 = (t2 + 64U);
    t47 = *((char **)t46);
    t48 = (t47 + 80U);
    t49 = *((char **)t48);
    t50 = (t49 + 272U);
    t51 = *((char **)t50);
    t52 = (t51 + 0U);
    t53 = *((char **)t52);
    t54 = ((int  (*)(char *, char *))t53)(t1, t47);
    if (t54 != 0)
        goto LAB23;

LAB22:    t47 = (t2 + 64U);
    t55 = *((char **)t47);
    t47 = (t1 + 9832);
    t56 = (t47 + 56U);
    t57 = *((char **)t56);
    memcpy(t58, t57, 8);
    t59 = (t1 + 3440);
    t60 = (t2 + 56U);
    t61 = *((char **)t60);
    xsi_delete_subprogram_invocation(t59, t55, t1, t61, t2);
    memset(t62, 0, 8);
    xsi_vlog_unsigned_multiply(t62, 32, t39, 32, t58, 3);
    memset(t63, 0, 8);
    xsi_vlog_unsigned_add(t63, 32, t33, 3, t62, 32);
    t64 = (t1 + 7912);
    t65 = (t64 + 56U);
    t66 = *((char **)t65);
    t67 = (t1 + 6392U);
    t68 = *((char **)t67);
    t67 = (t2 + 56U);
    t69 = *((char **)t67);
    t70 = (t1 + 4304);
    t71 = xsi_create_subprogram_invocation(t69, 0, t1, t70, 0, t2);
    t72 = (t1 + 10632);
    xsi_vlogvar_assign_value(t72, t68, 0, 0, 2);

LAB24:    t73 = (t2 + 64U);
    t74 = *((char **)t73);
    t75 = (t74 + 80U);
    t76 = *((char **)t75);
    t77 = (t76 + 272U);
    t78 = *((char **)t77);
    t79 = (t78 + 0U);
    t80 = *((char **)t79);
    t81 = ((int  (*)(char *, char *))t80)(t1, t74);
    if (t81 != 0)
        goto LAB26;

LAB25:    t74 = (t2 + 64U);
    t82 = *((char **)t74);
    t74 = (t1 + 10472);
    t83 = (t74 + 56U);
    t84 = *((char **)t83);
    memcpy(t85, t84, 8);
    t86 = (t1 + 4304);
    t87 = (t2 + 56U);
    t88 = *((char **)t87);
    xsi_delete_subprogram_invocation(t86, t82, t1, t88, t2);
    memset(t89, 0, 8);
    xsi_vlog_unsigned_multiply(t89, 32, t66, 32, t85, 3);
    memset(t90, 0, 8);
    xsi_vlog_unsigned_add(t90, 32, t63, 32, t89, 32);
    t91 = (t1 + 11752);
    xsi_vlogvar_assign_value(t91, t90, 0, 0, 3);
    xsi_set_current_line(172, ng0);
    t4 = (t1 + 6392U);
    t5 = *((char **)t4);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t1 + 3008);
    t9 = xsi_create_subprogram_invocation(t6, 0, t1, t7, 0, t2);
    t15 = (t1 + 9672);
    xsi_vlogvar_assign_value(t15, t5, 0, 0, 2);

LAB27:    t16 = (t2 + 64U);
    t17 = *((char **)t16);
    t18 = (t17 + 80U);
    t19 = *((char **)t18);
    t20 = (t19 + 272U);
    t21 = *((char **)t20);
    t22 = (t21 + 0U);
    t23 = *((char **)t22);
    t29 = ((int  (*)(char *, char *))t23)(t1, t17);
    if (t29 != 0)
        goto LAB29;

LAB28:    t17 = (t2 + 64U);
    t24 = *((char **)t17);
    t17 = (t1 + 9512);
    t25 = (t17 + 56U);
    t26 = *((char **)t25);
    memcpy(t8, t26, 8);
    t27 = (t1 + 3008);
    t28 = (t2 + 56U);
    t30 = *((char **)t28);
    xsi_delete_subprogram_invocation(t27, t24, t1, t30, t2);
    t31 = (t1 + 7752);
    t32 = (t31 + 56U);
    t34 = *((char **)t32);
    t35 = (t1 + 6392U);
    t36 = *((char **)t35);
    t35 = (t2 + 56U);
    t37 = *((char **)t35);
    t38 = (t1 + 3872);
    t39 = xsi_create_subprogram_invocation(t37, 0, t1, t38, 0, t2);
    t40 = (t1 + 10312);
    xsi_vlogvar_assign_value(t40, t36, 0, 0, 2);

LAB30:    t41 = (t2 + 64U);
    t42 = *((char **)t41);
    t43 = (t42 + 80U);
    t44 = *((char **)t43);
    t45 = (t44 + 272U);
    t46 = *((char **)t45);
    t47 = (t46 + 0U);
    t48 = *((char **)t47);
    t54 = ((int  (*)(char *, char *))t48)(t1, t42);
    if (t54 != 0)
        goto LAB32;

LAB31:    t42 = (t2 + 64U);
    t49 = *((char **)t42);
    t42 = (t1 + 10152);
    t50 = (t42 + 56U);
    t51 = *((char **)t50);
    memcpy(t33, t51, 8);
    t52 = (t1 + 3872);
    t53 = (t2 + 56U);
    t55 = *((char **)t53);
    xsi_delete_subprogram_invocation(t52, t49, t1, t55, t2);
    memset(t58, 0, 8);
    xsi_vlog_unsigned_multiply(t58, 32, t34, 32, t33, 3);
    memset(t62, 0, 8);
    xsi_vlog_unsigned_add(t62, 32, t8, 3, t58, 32);
    t56 = (t1 + 7912);
    t57 = (t56 + 56U);
    t59 = *((char **)t57);
    t60 = (t1 + 6392U);
    t61 = *((char **)t60);
    t60 = (t2 + 56U);
    t64 = *((char **)t60);
    t65 = (t1 + 4736);
    t66 = xsi_create_subprogram_invocation(t64, 0, t1, t65, 0, t2);
    t67 = (t1 + 10952);
    xsi_vlogvar_assign_value(t67, t61, 0, 0, 2);

LAB33:    t68 = (t2 + 64U);
    t69 = *((char **)t68);
    t70 = (t69 + 80U);
    t71 = *((char **)t70);
    t72 = (t71 + 272U);
    t73 = *((char **)t72);
    t74 = (t73 + 0U);
    t75 = *((char **)t74);
    t81 = ((int  (*)(char *, char *))t75)(t1, t69);
    if (t81 != 0)
        goto LAB35;

LAB34:    t69 = (t2 + 64U);
    t76 = *((char **)t69);
    t69 = (t1 + 10792);
    t77 = (t69 + 56U);
    t78 = *((char **)t77);
    memcpy(t63, t78, 8);
    t79 = (t1 + 4736);
    t80 = (t2 + 56U);
    t82 = *((char **)t80);
    xsi_delete_subprogram_invocation(t79, t76, t1, t82, t2);
    memset(t85, 0, 8);
    xsi_vlog_unsigned_multiply(t85, 32, t59, 32, t63, 3);
    memset(t89, 0, 8);
    xsi_vlog_unsigned_add(t89, 32, t62, 32, t85, 32);
    t83 = (t1 + 11912);
    xsi_vlogvar_assign_value(t83, t89, 0, 0, 3);
    xsi_set_current_line(173, ng0);
    t4 = (t1 + 6952);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 6952);
    t9 = (t7 + 72U);
    t15 = *((char **)t9);
    t16 = (t1 + 11752);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng5)));
    memset(t33, 0, 8);
    xsi_vlog_unsigned_multiply(t33, 32, t18, 3, t19, 32);
    t20 = (t1 + 11912);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memset(t58, 0, 8);
    xsi_vlog_unsigned_add(t58, 32, t33, 32, t22, 3);
    t23 = (t2 + 56U);
    t24 = *((char **)t23);
    t25 = (t1 + 848);
    t26 = xsi_create_subprogram_invocation(t24, 0, t1, t25, 0, t2);
    t27 = (t1 + 8392);
    xsi_vlogvar_assign_value(t27, t58, 0, 0, 6);

LAB36:    t28 = (t2 + 64U);
    t30 = *((char **)t28);
    t31 = (t30 + 80U);
    t32 = *((char **)t31);
    t34 = (t32 + 272U);
    t35 = *((char **)t34);
    t36 = (t35 + 0U);
    t37 = *((char **)t36);
    t29 = ((int  (*)(char *, char *))t37)(t1, t30);
    if (t29 != 0)
        goto LAB38;

LAB37:    t30 = (t2 + 64U);
    t38 = *((char **)t30);
    t30 = (t1 + 8232);
    t39 = (t30 + 56U);
    t40 = *((char **)t39);
    memcpy(t62, t40, 8);
    t41 = (t1 + 848);
    t42 = (t2 + 56U);
    t43 = *((char **)t42);
    xsi_delete_subprogram_invocation(t41, t38, t1, t43, t2);
    t44 = ((char*)((ng1)));
    xsi_vlog_get_indexed_partselect(t8, 32, t6, ((int*)(t15)), 2, t62, 11, 2, t44, 32, 1, 1);
    t45 = ((char*)((ng2)));
    memset(t63, 0, 8);
    t46 = (t8 + 4);
    t47 = (t45 + 4);
    t10 = *((unsigned int *)t8);
    t11 = *((unsigned int *)t45);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t46);
    t14 = *((unsigned int *)t47);
    t92 = (t13 ^ t14);
    t93 = (t12 | t92);
    t94 = *((unsigned int *)t46);
    t95 = *((unsigned int *)t47);
    t96 = (t94 | t95);
    t97 = (~(t96));
    t98 = (t93 & t97);
    if (t98 != 0)
        goto LAB42;

LAB39:    if (t96 != 0)
        goto LAB41;

LAB40:    *((unsigned int *)t63) = 1;

LAB42:    memset(t85, 0, 8);
    t49 = (t63 + 4);
    t99 = *((unsigned int *)t49);
    t100 = (~(t99));
    t101 = *((unsigned int *)t63);
    t102 = (t101 & t100);
    t103 = (t102 & 1U);
    if (t103 != 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t49) != 0)
        goto LAB45;

LAB46:    t51 = (t85 + 4);
    t104 = *((unsigned int *)t85);
    t105 = *((unsigned int *)t51);
    t106 = (t104 || t105);
    if (t106 > 0)
        goto LAB47;

LAB48:    memcpy(t180, t85, 8);

LAB49:    t212 = (t180 + 4);
    t213 = *((unsigned int *)t212);
    t214 = (~(t213));
    t215 = *((unsigned int *)t180);
    t216 = (t215 & t214);
    t217 = (t216 != 0);
    if (t217 > 0)
        goto LAB70;

LAB71:    xsi_set_current_line(179, ng0);
    t4 = (t1 + 6952);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 6952);
    t9 = (t7 + 72U);
    t15 = *((char **)t9);
    t16 = (t1 + 11752);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng5)));
    memset(t33, 0, 8);
    xsi_vlog_unsigned_multiply(t33, 32, t18, 3, t19, 32);
    t20 = (t1 + 11912);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memset(t58, 0, 8);
    xsi_vlog_unsigned_add(t58, 32, t33, 32, t22, 3);
    t23 = (t2 + 56U);
    t24 = *((char **)t23);
    t25 = (t1 + 848);
    t26 = xsi_create_subprogram_invocation(t24, 0, t1, t25, 0, t2);
    t27 = (t1 + 8392);
    xsi_vlogvar_assign_value(t27, t58, 0, 0, 6);

LAB99:    t28 = (t2 + 64U);
    t30 = *((char **)t28);
    t31 = (t30 + 80U);
    t32 = *((char **)t31);
    t34 = (t32 + 272U);
    t35 = *((char **)t34);
    t36 = (t35 + 0U);
    t37 = *((char **)t36);
    t29 = ((int  (*)(char *, char *))t37)(t1, t30);
    if (t29 != 0)
        goto LAB101;

LAB100:    t30 = (t2 + 64U);
    t38 = *((char **)t30);
    t30 = (t1 + 8232);
    t39 = (t30 + 56U);
    t40 = *((char **)t39);
    memcpy(t62, t40, 8);
    t41 = (t1 + 848);
    t42 = (t2 + 56U);
    t43 = *((char **)t42);
    xsi_delete_subprogram_invocation(t41, t38, t1, t43, t2);
    t44 = ((char*)((ng1)));
    xsi_vlog_get_indexed_partselect(t8, 20, t6, ((int*)(t15)), 2, t62, 11, 2, t44, 32, 1, 1);
    t45 = (t1 + 6952);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    t48 = (t1 + 6952);
    t49 = (t48 + 72U);
    t50 = *((char **)t49);
    t51 = (t1 + 11752);
    t52 = (t51 + 56U);
    t53 = *((char **)t52);
    t55 = (t1 + 6392U);
    t56 = *((char **)t55);
    t55 = (t2 + 56U);
    t57 = *((char **)t55);
    t59 = (t1 + 4304);
    t60 = xsi_create_subprogram_invocation(t57, 0, t1, t59, 0, t2);
    t61 = (t1 + 10632);
    xsi_vlogvar_assign_value(t61, t56, 0, 0, 2);

LAB102:    t64 = (t2 + 64U);
    t65 = *((char **)t64);
    t66 = (t65 + 80U);
    t67 = *((char **)t66);
    t68 = (t67 + 272U);
    t69 = *((char **)t68);
    t70 = (t69 + 0U);
    t71 = *((char **)t70);
    t54 = ((int  (*)(char *, char *))t71)(t1, t65);
    if (t54 != 0)
        goto LAB104;

LAB103:    t65 = (t2 + 64U);
    t72 = *((char **)t65);
    t65 = (t1 + 10472);
    t73 = (t65 + 56U);
    t74 = *((char **)t73);
    memcpy(t85, t74, 8);
    t75 = (t1 + 4304);
    t76 = (t2 + 56U);
    t77 = *((char **)t76);
    xsi_delete_subprogram_invocation(t75, t72, t1, t77, t2);
    memset(t89, 0, 8);
    xsi_vlog_unsigned_add(t89, 32, t53, 3, t85, 3);
    t78 = ((char*)((ng5)));
    memset(t90, 0, 8);
    xsi_vlog_unsigned_multiply(t90, 32, t89, 32, t78, 32);
    t79 = (t1 + 11912);
    t80 = (t79 + 56U);
    t82 = *((char **)t80);
    memset(t107, 0, 8);
    xsi_vlog_unsigned_add(t107, 32, t90, 32, t82, 3);
    t83 = (t1 + 6392U);
    t84 = *((char **)t83);
    t83 = (t2 + 56U);
    t86 = *((char **)t83);
    t87 = (t1 + 4736);
    t88 = xsi_create_subprogram_invocation(t86, 0, t1, t87, 0, t2);
    t91 = (t1 + 10952);
    xsi_vlogvar_assign_value(t91, t84, 0, 0, 2);

LAB105:    t109 = (t2 + 64U);
    t111 = *((char **)t109);
    t112 = (t111 + 80U);
    t113 = *((char **)t112);
    t114 = (t113 + 272U);
    t115 = *((char **)t114);
    t116 = (t115 + 0U);
    t117 = *((char **)t116);
    t81 = ((int  (*)(char *, char *))t117)(t1, t111);
    if (t81 != 0)
        goto LAB107;

LAB106:    t111 = (t2 + 64U);
    t118 = *((char **)t111);
    t111 = (t1 + 10792);
    t119 = (t111 + 56U);
    t120 = *((char **)t119);
    memcpy(t108, t120, 8);
    t121 = (t1 + 4736);
    t122 = (t2 + 56U);
    t123 = *((char **)t122);
    xsi_delete_subprogram_invocation(t121, t118, t1, t123, t2);
    memset(t110, 0, 8);
    xsi_vlog_unsigned_add(t110, 32, t107, 32, t108, 3);
    t124 = (t2 + 56U);
    t125 = *((char **)t124);
    t126 = (t1 + 848);
    t127 = xsi_create_subprogram_invocation(t125, 0, t1, t126, 0, t2);
    t129 = (t1 + 8392);
    xsi_vlogvar_assign_value(t129, t110, 0, 0, 6);

LAB108:    t130 = (t2 + 64U);
    t131 = *((char **)t130);
    t133 = (t131 + 80U);
    t134 = *((char **)t133);
    t135 = (t134 + 272U);
    t136 = *((char **)t135);
    t137 = (t136 + 0U);
    t138 = *((char **)t137);
    t146 = ((int  (*)(char *, char *))t138)(t1, t131);
    if (t146 != 0)
        goto LAB110;

LAB109:    t131 = (t2 + 64U);
    t139 = *((char **)t131);
    t131 = (t1 + 8232);
    t140 = (t131 + 56U);
    t141 = *((char **)t140);
    memcpy(t128, t141, 8);
    t142 = (t1 + 848);
    t143 = (t2 + 56U);
    t144 = *((char **)t143);
    xsi_delete_subprogram_invocation(t142, t139, t1, t144, t2);
    t145 = ((char*)((ng1)));
    xsi_vlog_get_indexed_partselect(t63, 20, t47, ((int*)(t50)), 2, t128, 11, 2, t145, 32, 1, 1);
    memset(t132, 0, 8);
    t147 = (t8 + 4);
    t148 = (t63 + 4);
    t10 = *((unsigned int *)t8);
    t11 = *((unsigned int *)t63);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t147);
    t14 = *((unsigned int *)t148);
    t92 = (t13 ^ t14);
    t93 = (t12 | t92);
    t94 = *((unsigned int *)t147);
    t95 = *((unsigned int *)t148);
    t96 = (t94 | t95);
    t97 = (~(t96));
    t98 = (t93 & t97);
    if (t98 != 0)
        goto LAB114;

LAB111:    if (t96 != 0)
        goto LAB113;

LAB112:    *((unsigned int *)t132) = 1;

LAB114:    memset(t150, 0, 8);
    t151 = (t132 + 4);
    t99 = *((unsigned int *)t151);
    t100 = (~(t99));
    t101 = *((unsigned int *)t132);
    t102 = (t101 & t100);
    t103 = (t102 & 1U);
    if (t103 != 0)
        goto LAB115;

LAB116:    if (*((unsigned int *)t151) != 0)
        goto LAB117;

LAB118:    t153 = (t150 + 4);
    t104 = *((unsigned int *)t150);
    t105 = *((unsigned int *)t153);
    t106 = (t104 || t105);
    if (t106 > 0)
        goto LAB119;

LAB120:    memcpy(t252, t150, 8);

LAB121:    t254 = (t252 + 4);
    t213 = *((unsigned int *)t254);
    t214 = (~(t213));
    t215 = *((unsigned int *)t252);
    t216 = (t215 & t214);
    t217 = (t216 != 0);
    if (t217 > 0)
        goto LAB136;

LAB137:
LAB138:
LAB72:    xsi_set_current_line(170, ng0);
    t4 = (t1 + 7912);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t6, 32, t7, 32);
    t9 = (t1 + 7912);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 32);
    goto LAB14;

LAB20:    t21 = (t2 + 48U);
    *((char **)t21) = &&LAB18;
    goto LAB1;

LAB23:    t46 = (t2 + 48U);
    *((char **)t46) = &&LAB21;
    goto LAB1;

LAB26:    t73 = (t2 + 48U);
    *((char **)t73) = &&LAB24;
    goto LAB1;

LAB29:    t16 = (t2 + 48U);
    *((char **)t16) = &&LAB27;
    goto LAB1;

LAB32:    t41 = (t2 + 48U);
    *((char **)t41) = &&LAB30;
    goto LAB1;

LAB35:    t68 = (t2 + 48U);
    *((char **)t68) = &&LAB33;
    goto LAB1;

LAB38:    t28 = (t2 + 48U);
    *((char **)t28) = &&LAB36;
    goto LAB1;

LAB41:    t48 = (t63 + 4);
    *((unsigned int *)t63) = 1;
    *((unsigned int *)t48) = 1;
    goto LAB42;

LAB43:    *((unsigned int *)t85) = 1;
    goto LAB46;

LAB45:    t50 = (t85 + 4);
    *((unsigned int *)t85) = 1;
    *((unsigned int *)t50) = 1;
    goto LAB46;

LAB47:    t52 = (t1 + 6952);
    t53 = (t52 + 56U);
    t55 = *((char **)t53);
    t56 = (t1 + 6952);
    t57 = (t56 + 72U);
    t59 = *((char **)t57);
    t60 = (t1 + 11752);
    t61 = (t60 + 56U);
    t64 = *((char **)t61);
    t65 = (t1 + 6392U);
    t66 = *((char **)t65);
    t65 = (t2 + 56U);
    t67 = *((char **)t65);
    t68 = (t1 + 4304);
    t69 = xsi_create_subprogram_invocation(t67, 0, t1, t68, 0, t2);
    t70 = (t1 + 10632);
    xsi_vlogvar_assign_value(t70, t66, 0, 0, 2);

LAB50:    t71 = (t2 + 64U);
    t72 = *((char **)t71);
    t73 = (t72 + 80U);
    t74 = *((char **)t73);
    t75 = (t74 + 272U);
    t76 = *((char **)t75);
    t77 = (t76 + 0U);
    t78 = *((char **)t77);
    t54 = ((int  (*)(char *, char *))t78)(t1, t72);
    if (t54 != 0)
        goto LAB52;

LAB51:    t72 = (t2 + 64U);
    t79 = *((char **)t72);
    t72 = (t1 + 10472);
    t80 = (t72 + 56U);
    t82 = *((char **)t80);
    memcpy(t90, t82, 8);
    t83 = (t1 + 4304);
    t84 = (t2 + 56U);
    t86 = *((char **)t84);
    xsi_delete_subprogram_invocation(t83, t79, t1, t86, t2);
    memset(t107, 0, 8);
    xsi_vlog_unsigned_add(t107, 32, t64, 3, t90, 3);
    t87 = ((char*)((ng5)));
    memset(t108, 0, 8);
    xsi_vlog_unsigned_multiply(t108, 32, t107, 32, t87, 32);
    t88 = (t1 + 11912);
    t91 = (t88 + 56U);
    t109 = *((char **)t91);
    memset(t110, 0, 8);
    xsi_vlog_unsigned_add(t110, 32, t108, 32, t109, 3);
    t111 = (t1 + 6392U);
    t112 = *((char **)t111);
    t111 = (t2 + 56U);
    t113 = *((char **)t111);
    t114 = (t1 + 4736);
    t115 = xsi_create_subprogram_invocation(t113, 0, t1, t114, 0, t2);
    t116 = (t1 + 10952);
    xsi_vlogvar_assign_value(t116, t112, 0, 0, 2);

LAB53:    t117 = (t2 + 64U);
    t118 = *((char **)t117);
    t119 = (t118 + 80U);
    t120 = *((char **)t119);
    t121 = (t120 + 272U);
    t122 = *((char **)t121);
    t123 = (t122 + 0U);
    t124 = *((char **)t123);
    t81 = ((int  (*)(char *, char *))t124)(t1, t118);
    if (t81 != 0)
        goto LAB55;

LAB54:    t118 = (t2 + 64U);
    t125 = *((char **)t118);
    t118 = (t1 + 10792);
    t126 = (t118 + 56U);
    t127 = *((char **)t126);
    memcpy(t128, t127, 8);
    t129 = (t1 + 4736);
    t130 = (t2 + 56U);
    t131 = *((char **)t130);
    xsi_delete_subprogram_invocation(t129, t125, t1, t131, t2);
    memset(t132, 0, 8);
    xsi_vlog_unsigned_add(t132, 32, t110, 32, t128, 3);
    t133 = (t2 + 56U);
    t134 = *((char **)t133);
    t135 = (t1 + 848);
    t136 = xsi_create_subprogram_invocation(t134, 0, t1, t135, 0, t2);
    t137 = (t1 + 8392);
    xsi_vlogvar_assign_value(t137, t132, 0, 0, 6);

LAB56:    t138 = (t2 + 64U);
    t139 = *((char **)t138);
    t140 = (t139 + 80U);
    t141 = *((char **)t140);
    t142 = (t141 + 272U);
    t143 = *((char **)t142);
    t144 = (t143 + 0U);
    t145 = *((char **)t144);
    t146 = ((int  (*)(char *, char *))t145)(t1, t139);
    if (t146 != 0)
        goto LAB58;

LAB57:    t139 = (t2 + 64U);
    t147 = *((char **)t139);
    t139 = (t1 + 8232);
    t148 = (t139 + 56U);
    t149 = *((char **)t148);
    memcpy(t150, t149, 8);
    t151 = (t1 + 848);
    t152 = (t2 + 56U);
    t153 = *((char **)t152);
    xsi_delete_subprogram_invocation(t151, t147, t1, t153, t2);
    t154 = ((char*)((ng1)));
    xsi_vlog_get_indexed_partselect(t89, 32, t55, ((int*)(t59)), 2, t150, 11, 2, t154, 32, 1, 1);
    t155 = ((char*)((ng2)));
    memset(t156, 0, 8);
    t157 = (t89 + 4);
    t158 = (t155 + 4);
    t159 = *((unsigned int *)t89);
    t160 = *((unsigned int *)t155);
    t161 = (t159 ^ t160);
    t162 = *((unsigned int *)t157);
    t163 = *((unsigned int *)t158);
    t164 = (t162 ^ t163);
    t165 = (t161 | t164);
    t166 = *((unsigned int *)t157);
    t167 = *((unsigned int *)t158);
    t168 = (t166 | t167);
    t169 = (~(t168));
    t170 = (t165 & t169);
    if (t170 != 0)
        goto LAB60;

LAB59:    if (t168 != 0)
        goto LAB61;

LAB62:    memset(t172, 0, 8);
    t173 = (t156 + 4);
    t174 = *((unsigned int *)t173);
    t175 = (~(t174));
    t176 = *((unsigned int *)t156);
    t177 = (t176 & t175);
    t178 = (t177 & 1U);
    if (t178 != 0)
        goto LAB63;

LAB64:    if (*((unsigned int *)t173) != 0)
        goto LAB65;

LAB66:    t181 = *((unsigned int *)t85);
    t182 = *((unsigned int *)t172);
    t183 = (t181 & t182);
    *((unsigned int *)t180) = t183;
    t184 = (t85 + 4);
    t185 = (t172 + 4);
    t186 = (t180 + 4);
    t187 = *((unsigned int *)t184);
    t188 = *((unsigned int *)t185);
    t189 = (t187 | t188);
    *((unsigned int *)t186) = t189;
    t190 = *((unsigned int *)t186);
    t191 = (t190 != 0);
    if (t191 == 1)
        goto LAB67;

LAB68:
LAB69:    goto LAB49;

LAB52:    t71 = (t2 + 48U);
    *((char **)t71) = &&LAB50;
    goto LAB1;

LAB55:    t117 = (t2 + 48U);
    *((char **)t117) = &&LAB53;
    goto LAB1;

LAB58:    t138 = (t2 + 48U);
    *((char **)t138) = &&LAB56;
    goto LAB1;

LAB60:    *((unsigned int *)t156) = 1;
    goto LAB62;

LAB61:    t171 = (t156 + 4);
    *((unsigned int *)t156) = 1;
    *((unsigned int *)t171) = 1;
    goto LAB62;

LAB63:    *((unsigned int *)t172) = 1;
    goto LAB66;

LAB65:    t179 = (t172 + 4);
    *((unsigned int *)t172) = 1;
    *((unsigned int *)t179) = 1;
    goto LAB66;

LAB67:    t192 = *((unsigned int *)t180);
    t193 = *((unsigned int *)t186);
    *((unsigned int *)t180) = (t192 | t193);
    t194 = (t85 + 4);
    t195 = (t172 + 4);
    t196 = *((unsigned int *)t85);
    t197 = (~(t196));
    t198 = *((unsigned int *)t194);
    t199 = (~(t198));
    t200 = *((unsigned int *)t172);
    t201 = (~(t200));
    t202 = *((unsigned int *)t195);
    t203 = (~(t202));
    t204 = (t197 & t199);
    t205 = (t201 & t203);
    t206 = (~(t204));
    t207 = (~(t205));
    t208 = *((unsigned int *)t186);
    *((unsigned int *)t186) = (t208 & t206);
    t209 = *((unsigned int *)t186);
    *((unsigned int *)t186) = (t209 & t207);
    t210 = *((unsigned int *)t180);
    *((unsigned int *)t180) = (t210 & t206);
    t211 = *((unsigned int *)t180);
    *((unsigned int *)t180) = (t211 & t207);
    goto LAB69;

LAB70:    xsi_set_current_line(173, ng0);

LAB73:    xsi_set_current_line(175, ng0);
    t219 = (t1 + 6952);
    t220 = (t219 + 56U);
    t221 = *((char **)t220);
    t222 = (t1 + 6952);
    t223 = (t222 + 72U);
    t224 = *((char **)t223);
    t225 = (t1 + 11752);
    t226 = (t225 + 56U);
    t227 = *((char **)t226);
    t228 = (t1 + 6392U);
    t229 = *((char **)t228);
    t228 = (t2 + 56U);
    t230 = *((char **)t228);
    t231 = (t1 + 4304);
    t232 = xsi_create_subprogram_invocation(t230, 0, t1, t231, 0, t2);
    t233 = (t1 + 10632);
    xsi_vlogvar_assign_value(t233, t229, 0, 0, 2);

LAB74:    t234 = (t2 + 64U);
    t235 = *((char **)t234);
    t236 = (t235 + 80U);
    t237 = *((char **)t236);
    t238 = (t237 + 272U);
    t239 = *((char **)t238);
    t240 = (t239 + 0U);
    t241 = *((char **)t240);
    t242 = ((int  (*)(char *, char *))t241)(t1, t235);
    if (t242 != 0)
        goto LAB76;

LAB75:    t235 = (t2 + 64U);
    t243 = *((char **)t235);
    t235 = (t1 + 10472);
    t244 = (t235 + 56U);
    t245 = *((char **)t244);
    memcpy(t246, t245, 8);
    t247 = (t1 + 4304);
    t248 = (t2 + 56U);
    t249 = *((char **)t248);
    xsi_delete_subprogram_invocation(t247, t243, t1, t249, t2);
    memset(t250, 0, 8);
    xsi_vlog_unsigned_add(t250, 32, t227, 3, t246, 3);
    t251 = ((char*)((ng5)));
    memset(t252, 0, 8);
    xsi_vlog_unsigned_multiply(t252, 32, t250, 32, t251, 32);
    t253 = (t1 + 11912);
    t254 = (t253 + 56U);
    t255 = *((char **)t254);
    memset(t256, 0, 8);
    xsi_vlog_unsigned_add(t256, 32, t252, 32, t255, 3);
    t257 = (t1 + 6392U);
    t258 = *((char **)t257);
    t257 = (t2 + 56U);
    t259 = *((char **)t257);
    t260 = (t1 + 4736);
    t261 = xsi_create_subprogram_invocation(t259, 0, t1, t260, 0, t2);
    t262 = (t1 + 10952);
    xsi_vlogvar_assign_value(t262, t258, 0, 0, 2);

LAB77:    t263 = (t2 + 64U);
    t264 = *((char **)t263);
    t265 = (t264 + 80U);
    t266 = *((char **)t265);
    t267 = (t266 + 272U);
    t268 = *((char **)t267);
    t269 = (t268 + 0U);
    t270 = *((char **)t269);
    t271 = ((int  (*)(char *, char *))t270)(t1, t264);
    if (t271 != 0)
        goto LAB79;

LAB78:    t264 = (t2 + 64U);
    t272 = *((char **)t264);
    t264 = (t1 + 10792);
    t273 = (t264 + 56U);
    t274 = *((char **)t273);
    memcpy(t275, t274, 8);
    t276 = (t1 + 4736);
    t277 = (t2 + 56U);
    t278 = *((char **)t277);
    xsi_delete_subprogram_invocation(t276, t272, t1, t278, t2);
    memset(t279, 0, 8);
    xsi_vlog_unsigned_add(t279, 32, t256, 32, t275, 3);
    t280 = (t2 + 56U);
    t281 = *((char **)t280);
    t282 = (t1 + 848);
    t283 = xsi_create_subprogram_invocation(t281, 0, t1, t282, 0, t2);
    t284 = (t1 + 8392);
    xsi_vlogvar_assign_value(t284, t279, 0, 0, 6);

LAB80:    t285 = (t2 + 64U);
    t286 = *((char **)t285);
    t287 = (t286 + 80U);
    t288 = *((char **)t287);
    t289 = (t288 + 272U);
    t290 = *((char **)t289);
    t291 = (t290 + 0U);
    t292 = *((char **)t291);
    t293 = ((int  (*)(char *, char *))t292)(t1, t286);
    if (t293 != 0)
        goto LAB82;

LAB81:    t286 = (t2 + 64U);
    t294 = *((char **)t286);
    t286 = (t1 + 8232);
    t295 = (t286 + 56U);
    t296 = *((char **)t295);
    memcpy(t297, t296, 8);
    t298 = (t1 + 848);
    t299 = (t2 + 56U);
    t300 = *((char **)t299);
    xsi_delete_subprogram_invocation(t298, t294, t1, t300, t2);
    t301 = ((char*)((ng1)));
    xsi_vlog_get_indexed_partselect(t218, 20, t221, ((int*)(t224)), 2, t297, 11, 2, t301, 32, 1, 1);
    t302 = (t1 + 6952);
    t306 = (t1 + 6952);
    t307 = (t306 + 72U);
    t308 = *((char **)t307);
    t309 = (t1 + 11752);
    t310 = (t309 + 56U);
    t311 = *((char **)t310);
    t312 = ((char*)((ng5)));
    memset(t313, 0, 8);
    xsi_vlog_unsigned_multiply(t313, 32, t311, 3, t312, 32);
    t314 = (t1 + 11912);
    t315 = (t314 + 56U);
    t316 = *((char **)t315);
    memset(t317, 0, 8);
    xsi_vlog_unsigned_add(t317, 32, t313, 32, t316, 3);
    t318 = (t2 + 56U);
    t319 = *((char **)t318);
    t320 = (t1 + 848);
    t321 = xsi_create_subprogram_invocation(t319, 0, t1, t320, 0, t2);
    t322 = (t1 + 8392);
    xsi_vlogvar_assign_value(t322, t317, 0, 0, 6);

LAB83:    t323 = (t2 + 64U);
    t324 = *((char **)t323);
    t325 = (t324 + 80U);
    t326 = *((char **)t325);
    t327 = (t326 + 272U);
    t328 = *((char **)t327);
    t329 = (t328 + 0U);
    t330 = *((char **)t329);
    t331 = ((int  (*)(char *, char *))t330)(t1, t324);
    if (t331 != 0)
        goto LAB85;

LAB84:    t324 = (t2 + 64U);
    t332 = *((char **)t324);
    t324 = (t1 + 8232);
    t333 = (t324 + 56U);
    t334 = *((char **)t333);
    memcpy(t335, t334, 8);
    t336 = (t1 + 848);
    t337 = (t2 + 56U);
    t338 = *((char **)t337);
    xsi_delete_subprogram_invocation(t336, t332, t1, t338, t2);
    t339 = ((char*)((ng1)));
    xsi_vlog_convert_indexed_partindices(t303, t304, t305, ((int*)(t308)), 2, t335, 11, 2, t339, 32, 1, 1);
    t340 = (t303 + 4);
    t341 = *((unsigned int *)t340);
    t342 = (!(t341));
    t343 = (t304 + 4);
    t344 = *((unsigned int *)t343);
    t345 = (!(t344));
    t346 = (t342 && t345);
    t347 = (t305 + 4);
    t348 = *((unsigned int *)t347);
    t349 = (!(t348));
    t350 = (t346 && t349);
    if (t350 == 1)
        goto LAB86;

LAB87:    xsi_set_current_line(176, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 6952);
    t6 = (t1 + 6952);
    t7 = (t6 + 72U);
    t9 = *((char **)t7);
    t15 = (t1 + 11752);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t1 + 6392U);
    t19 = *((char **)t18);
    t18 = (t2 + 56U);
    t20 = *((char **)t18);
    t21 = (t1 + 4304);
    t22 = xsi_create_subprogram_invocation(t20, 0, t1, t21, 0, t2);
    t23 = (t1 + 10632);
    xsi_vlogvar_assign_value(t23, t19, 0, 0, 2);

LAB88:    t24 = (t2 + 64U);
    t25 = *((char **)t24);
    t26 = (t25 + 80U);
    t27 = *((char **)t26);
    t28 = (t27 + 272U);
    t30 = *((char **)t28);
    t31 = (t30 + 0U);
    t32 = *((char **)t31);
    t29 = ((int  (*)(char *, char *))t32)(t1, t25);
    if (t29 != 0)
        goto LAB90;

LAB89:    t25 = (t2 + 64U);
    t34 = *((char **)t25);
    t25 = (t1 + 10472);
    t35 = (t25 + 56U);
    t36 = *((char **)t35);
    memcpy(t62, t36, 8);
    t37 = (t1 + 4304);
    t38 = (t2 + 56U);
    t39 = *((char **)t38);
    xsi_delete_subprogram_invocation(t37, t34, t1, t39, t2);
    memset(t63, 0, 8);
    xsi_vlog_unsigned_add(t63, 32, t17, 3, t62, 3);
    t40 = ((char*)((ng5)));
    memset(t85, 0, 8);
    xsi_vlog_unsigned_multiply(t85, 32, t63, 32, t40, 32);
    t41 = (t1 + 11912);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    memset(t89, 0, 8);
    xsi_vlog_unsigned_add(t89, 32, t85, 32, t43, 3);
    t44 = (t1 + 6392U);
    t45 = *((char **)t44);
    t44 = (t2 + 56U);
    t46 = *((char **)t44);
    t47 = (t1 + 4736);
    t48 = xsi_create_subprogram_invocation(t46, 0, t1, t47, 0, t2);
    t49 = (t1 + 10952);
    xsi_vlogvar_assign_value(t49, t45, 0, 0, 2);

LAB91:    t50 = (t2 + 64U);
    t51 = *((char **)t50);
    t52 = (t51 + 80U);
    t53 = *((char **)t52);
    t55 = (t53 + 272U);
    t56 = *((char **)t55);
    t57 = (t56 + 0U);
    t59 = *((char **)t57);
    t54 = ((int  (*)(char *, char *))t59)(t1, t51);
    if (t54 != 0)
        goto LAB93;

LAB92:    t51 = (t2 + 64U);
    t60 = *((char **)t51);
    t51 = (t1 + 10792);
    t61 = (t51 + 56U);
    t64 = *((char **)t61);
    memcpy(t90, t64, 8);
    t65 = (t1 + 4736);
    t66 = (t2 + 56U);
    t67 = *((char **)t66);
    xsi_delete_subprogram_invocation(t65, t60, t1, t67, t2);
    memset(t107, 0, 8);
    xsi_vlog_unsigned_add(t107, 32, t89, 32, t90, 3);
    t68 = (t2 + 56U);
    t69 = *((char **)t68);
    t70 = (t1 + 848);
    t71 = xsi_create_subprogram_invocation(t69, 0, t1, t70, 0, t2);
    t72 = (t1 + 8392);
    xsi_vlogvar_assign_value(t72, t107, 0, 0, 6);

LAB94:    t73 = (t2 + 64U);
    t74 = *((char **)t73);
    t75 = (t74 + 80U);
    t76 = *((char **)t75);
    t77 = (t76 + 272U);
    t78 = *((char **)t77);
    t79 = (t78 + 0U);
    t80 = *((char **)t79);
    t81 = ((int  (*)(char *, char *))t80)(t1, t74);
    if (t81 != 0)
        goto LAB96;

LAB95:    t74 = (t2 + 64U);
    t82 = *((char **)t74);
    t74 = (t1 + 8232);
    t83 = (t74 + 56U);
    t84 = *((char **)t83);
    memcpy(t108, t84, 8);
    t86 = (t1 + 848);
    t87 = (t2 + 56U);
    t88 = *((char **)t87);
    xsi_delete_subprogram_invocation(t86, t82, t1, t88, t2);
    t91 = ((char*)((ng1)));
    xsi_vlog_convert_indexed_partindices(t8, t33, t58, ((int*)(t9)), 2, t108, 11, 2, t91, 32, 1, 1);
    t109 = (t8 + 4);
    t10 = *((unsigned int *)t109);
    t146 = (!(t10));
    t111 = (t33 + 4);
    t11 = *((unsigned int *)t111);
    t204 = (!(t11));
    t205 = (t146 && t204);
    t112 = (t58 + 4);
    t12 = *((unsigned int *)t112);
    t242 = (!(t12));
    t271 = (t205 && t242);
    if (t271 == 1)
        goto LAB97;

LAB98:    xsi_set_current_line(177, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 11592);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB72;

LAB76:    t234 = (t2 + 48U);
    *((char **)t234) = &&LAB74;
    goto LAB1;

LAB79:    t263 = (t2 + 48U);
    *((char **)t263) = &&LAB77;
    goto LAB1;

LAB82:    t285 = (t2 + 48U);
    *((char **)t285) = &&LAB80;
    goto LAB1;

LAB85:    t323 = (t2 + 48U);
    *((char **)t323) = &&LAB83;
    goto LAB1;

LAB86:    t351 = *((unsigned int *)t305);
    t352 = (t351 + 0);
    t353 = *((unsigned int *)t303);
    t354 = *((unsigned int *)t304);
    t355 = (t353 - t354);
    t356 = (t355 + 1);
    xsi_vlogvar_assign_value(t302, t218, t352, *((unsigned int *)t304), t356);
    goto LAB87;

LAB90:    t24 = (t2 + 48U);
    *((char **)t24) = &&LAB88;
    goto LAB1;

LAB93:    t50 = (t2 + 48U);
    *((char **)t50) = &&LAB91;
    goto LAB1;

LAB96:    t73 = (t2 + 48U);
    *((char **)t73) = &&LAB94;
    goto LAB1;

LAB97:    t13 = *((unsigned int *)t58);
    t293 = (t13 + 0);
    t14 = *((unsigned int *)t8);
    t92 = *((unsigned int *)t33);
    t331 = (t14 - t92);
    t342 = (t331 + 1);
    xsi_vlogvar_assign_value(t5, t4, t293, *((unsigned int *)t33), t342);
    goto LAB98;

LAB101:    t28 = (t2 + 48U);
    *((char **)t28) = &&LAB99;
    goto LAB1;

LAB104:    t64 = (t2 + 48U);
    *((char **)t64) = &&LAB102;
    goto LAB1;

LAB107:    t109 = (t2 + 48U);
    *((char **)t109) = &&LAB105;
    goto LAB1;

LAB110:    t130 = (t2 + 48U);
    *((char **)t130) = &&LAB108;
    goto LAB1;

LAB113:    t149 = (t132 + 4);
    *((unsigned int *)t132) = 1;
    *((unsigned int *)t149) = 1;
    goto LAB114;

LAB115:    *((unsigned int *)t150) = 1;
    goto LAB118;

LAB117:    t152 = (t150 + 4);
    *((unsigned int *)t150) = 1;
    *((unsigned int *)t152) = 1;
    goto LAB118;

LAB119:    t154 = (t1 + 6952);
    t155 = (t154 + 56U);
    t157 = *((char **)t155);
    t158 = (t1 + 6952);
    t171 = (t158 + 72U);
    t173 = *((char **)t171);
    t179 = (t1 + 11752);
    t184 = (t179 + 56U);
    t185 = *((char **)t184);
    t186 = ((char*)((ng5)));
    memset(t172, 0, 8);
    xsi_vlog_unsigned_multiply(t172, 32, t185, 3, t186, 32);
    t194 = (t1 + 11912);
    t195 = (t194 + 56U);
    t212 = *((char **)t195);
    memset(t180, 0, 8);
    xsi_vlog_unsigned_add(t180, 32, t172, 32, t212, 3);
    t219 = (t2 + 56U);
    t220 = *((char **)t219);
    t221 = (t1 + 848);
    t222 = xsi_create_subprogram_invocation(t220, 0, t1, t221, 0, t2);
    t223 = (t1 + 8392);
    xsi_vlogvar_assign_value(t223, t180, 0, 0, 6);

LAB122:    t224 = (t2 + 64U);
    t225 = *((char **)t224);
    t226 = (t225 + 80U);
    t227 = *((char **)t226);
    t228 = (t227 + 272U);
    t229 = *((char **)t228);
    t230 = (t229 + 0U);
    t231 = *((char **)t230);
    t204 = ((int  (*)(char *, char *))t231)(t1, t225);
    if (t204 != 0)
        goto LAB124;

LAB123:    t225 = (t2 + 64U);
    t232 = *((char **)t225);
    t225 = (t1 + 8232);
    t233 = (t225 + 56U);
    t234 = *((char **)t233);
    memcpy(t218, t234, 8);
    t235 = (t1 + 848);
    t236 = (t2 + 56U);
    t237 = *((char **)t236);
    xsi_delete_subprogram_invocation(t235, t232, t1, t237, t2);
    t238 = ((char*)((ng1)));
    xsi_vlog_get_indexed_partselect(t156, 32, t157, ((int*)(t173)), 2, t218, 11, 2, t238, 32, 1, 1);
    t239 = ((char*)((ng2)));
    memset(t246, 0, 8);
    t240 = (t156 + 4);
    t241 = (t239 + 4);
    t159 = *((unsigned int *)t156);
    t160 = *((unsigned int *)t239);
    t161 = (t159 ^ t160);
    t162 = *((unsigned int *)t240);
    t163 = *((unsigned int *)t241);
    t164 = (t162 ^ t163);
    t165 = (t161 | t164);
    t166 = *((unsigned int *)t240);
    t167 = *((unsigned int *)t241);
    t168 = (t166 | t167);
    t169 = (~(t168));
    t170 = (t165 & t169);
    if (t170 != 0)
        goto LAB126;

LAB125:    if (t168 != 0)
        goto LAB127;

LAB128:    memset(t250, 0, 8);
    t244 = (t246 + 4);
    t174 = *((unsigned int *)t244);
    t175 = (~(t174));
    t176 = *((unsigned int *)t246);
    t177 = (t176 & t175);
    t178 = (t177 & 1U);
    if (t178 != 0)
        goto LAB129;

LAB130:    if (*((unsigned int *)t244) != 0)
        goto LAB131;

LAB132:    t181 = *((unsigned int *)t150);
    t182 = *((unsigned int *)t250);
    t183 = (t181 & t182);
    *((unsigned int *)t252) = t183;
    t247 = (t150 + 4);
    t248 = (t250 + 4);
    t249 = (t252 + 4);
    t187 = *((unsigned int *)t247);
    t188 = *((unsigned int *)t248);
    t189 = (t187 | t188);
    *((unsigned int *)t249) = t189;
    t190 = *((unsigned int *)t249);
    t191 = (t190 != 0);
    if (t191 == 1)
        goto LAB133;

LAB134:
LAB135:    goto LAB121;

LAB124:    t224 = (t2 + 48U);
    *((char **)t224) = &&LAB122;
    goto LAB1;

LAB126:    *((unsigned int *)t246) = 1;
    goto LAB128;

LAB127:    t243 = (t246 + 4);
    *((unsigned int *)t246) = 1;
    *((unsigned int *)t243) = 1;
    goto LAB128;

LAB129:    *((unsigned int *)t250) = 1;
    goto LAB132;

LAB131:    t245 = (t250 + 4);
    *((unsigned int *)t250) = 1;
    *((unsigned int *)t245) = 1;
    goto LAB132;

LAB133:    t192 = *((unsigned int *)t252);
    t193 = *((unsigned int *)t249);
    *((unsigned int *)t252) = (t192 | t193);
    t251 = (t150 + 4);
    t253 = (t250 + 4);
    t196 = *((unsigned int *)t150);
    t197 = (~(t196));
    t198 = *((unsigned int *)t251);
    t199 = (~(t198));
    t200 = *((unsigned int *)t250);
    t201 = (~(t200));
    t202 = *((unsigned int *)t253);
    t203 = (~(t202));
    t205 = (t197 & t199);
    t242 = (t201 & t203);
    t206 = (~(t205));
    t207 = (~(t242));
    t208 = *((unsigned int *)t249);
    *((unsigned int *)t249) = (t208 & t206);
    t209 = *((unsigned int *)t249);
    *((unsigned int *)t249) = (t209 & t207);
    t210 = *((unsigned int *)t252);
    *((unsigned int *)t252) = (t210 & t206);
    t211 = *((unsigned int *)t252);
    *((unsigned int *)t252) = (t211 & t207);
    goto LAB135;

LAB136:    xsi_set_current_line(179, ng0);

LAB139:    xsi_set_current_line(180, ng0);
    t255 = (t1 + 6952);
    t257 = (t255 + 56U);
    t258 = *((char **)t257);
    t259 = (t1 + 6952);
    t260 = (t259 + 72U);
    t261 = *((char **)t260);
    t262 = (t1 + 11752);
    t263 = (t262 + 56U);
    t264 = *((char **)t263);
    t265 = ((char*)((ng5)));
    memset(t275, 0, 8);
    xsi_vlog_unsigned_multiply(t275, 32, t264, 3, t265, 32);
    t266 = (t1 + 11912);
    t267 = (t266 + 56U);
    t268 = *((char **)t267);
    memset(t279, 0, 8);
    xsi_vlog_unsigned_add(t279, 32, t275, 32, t268, 3);
    t269 = (t2 + 56U);
    t270 = *((char **)t269);
    t272 = (t1 + 848);
    t273 = xsi_create_subprogram_invocation(t270, 0, t1, t272, 0, t2);
    t274 = (t1 + 8392);
    xsi_vlogvar_assign_value(t274, t279, 0, 0, 6);

LAB140:    t276 = (t2 + 64U);
    t277 = *((char **)t276);
    t278 = (t277 + 80U);
    t280 = *((char **)t278);
    t281 = (t280 + 272U);
    t282 = *((char **)t281);
    t283 = (t282 + 0U);
    t284 = *((char **)t283);
    t271 = ((int  (*)(char *, char *))t284)(t1, t277);
    if (t271 != 0)
        goto LAB142;

LAB141:    t277 = (t2 + 64U);
    t285 = *((char **)t277);
    t277 = (t1 + 8232);
    t286 = (t277 + 56U);
    t287 = *((char **)t286);
    memcpy(t297, t287, 8);
    t288 = (t1 + 848);
    t289 = (t2 + 56U);
    t290 = *((char **)t289);
    xsi_delete_subprogram_invocation(t288, t285, t1, t290, t2);
    t291 = ((char*)((ng1)));
    xsi_vlog_get_indexed_partselect(t256, 32, t258, ((int*)(t261)), 2, t297, 11, 2, t291, 32, 1, 1);
    t292 = ((char*)((ng8)));
    memset(t303, 0, 8);
    xsi_vlog_unsigned_multiply(t303, 32, t256, 32, t292, 32);
    t294 = (t1 + 6952);
    t295 = (t1 + 6952);
    t296 = (t295 + 72U);
    t298 = *((char **)t296);
    t299 = (t1 + 11752);
    t300 = (t299 + 56U);
    t301 = *((char **)t300);
    t302 = ((char*)((ng5)));
    memset(t317, 0, 8);
    xsi_vlog_unsigned_multiply(t317, 32, t301, 3, t302, 32);
    t306 = (t1 + 11912);
    t307 = (t306 + 56U);
    t308 = *((char **)t307);
    memset(t335, 0, 8);
    xsi_vlog_unsigned_add(t335, 32, t317, 32, t308, 3);
    t309 = (t2 + 56U);
    t310 = *((char **)t309);
    t311 = (t1 + 848);
    t312 = xsi_create_subprogram_invocation(t310, 0, t1, t311, 0, t2);
    t314 = (t1 + 8392);
    xsi_vlogvar_assign_value(t314, t335, 0, 0, 6);

LAB143:    t315 = (t2 + 64U);
    t316 = *((char **)t315);
    t318 = (t316 + 80U);
    t319 = *((char **)t318);
    t320 = (t319 + 272U);
    t321 = *((char **)t320);
    t322 = (t321 + 0U);
    t323 = *((char **)t322);
    t293 = ((int  (*)(char *, char *))t323)(t1, t316);
    if (t293 != 0)
        goto LAB145;

LAB144:    t316 = (t2 + 64U);
    t324 = *((char **)t316);
    t316 = (t1 + 8232);
    t325 = (t316 + 56U);
    t326 = *((char **)t325);
    memcpy(t357, t326, 8);
    t327 = (t1 + 848);
    t328 = (t2 + 56U);
    t329 = *((char **)t328);
    xsi_delete_subprogram_invocation(t327, t324, t1, t329, t2);
    t330 = ((char*)((ng1)));
    xsi_vlog_convert_indexed_partindices(t304, t305, t313, ((int*)(t298)), 2, t357, 11, 2, t330, 32, 1, 1);
    t332 = (t304 + 4);
    t341 = *((unsigned int *)t332);
    t331 = (!(t341));
    t333 = (t305 + 4);
    t344 = *((unsigned int *)t333);
    t342 = (!(t344));
    t345 = (t331 && t342);
    t334 = (t313 + 4);
    t348 = *((unsigned int *)t334);
    t346 = (!(t348));
    t349 = (t345 && t346);
    if (t349 == 1)
        goto LAB146;

LAB147:    xsi_set_current_line(181, ng0);
    t4 = (t1 + 6952);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 6952);
    t9 = (t7 + 72U);
    t15 = *((char **)t9);
    t16 = (t1 + 11752);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng5)));
    memset(t33, 0, 8);
    xsi_vlog_unsigned_multiply(t33, 32, t18, 3, t19, 32);
    t20 = (t1 + 11912);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memset(t58, 0, 8);
    xsi_vlog_unsigned_add(t58, 32, t33, 32, t22, 3);
    t23 = (t2 + 56U);
    t24 = *((char **)t23);
    t25 = (t1 + 848);
    t26 = xsi_create_subprogram_invocation(t24, 0, t1, t25, 0, t2);
    t27 = (t1 + 8392);
    xsi_vlogvar_assign_value(t27, t58, 0, 0, 6);

LAB148:    t28 = (t2 + 64U);
    t30 = *((char **)t28);
    t31 = (t30 + 80U);
    t32 = *((char **)t31);
    t34 = (t32 + 272U);
    t35 = *((char **)t34);
    t36 = (t35 + 0U);
    t37 = *((char **)t36);
    t29 = ((int  (*)(char *, char *))t37)(t1, t30);
    if (t29 != 0)
        goto LAB150;

LAB149:    t30 = (t2 + 64U);
    t38 = *((char **)t30);
    t30 = (t1 + 8232);
    t39 = (t30 + 56U);
    t40 = *((char **)t39);
    memcpy(t62, t40, 8);
    t41 = (t1 + 848);
    t42 = (t2 + 56U);
    t43 = *((char **)t42);
    xsi_delete_subprogram_invocation(t41, t38, t1, t43, t2);
    t44 = ((char*)((ng1)));
    xsi_vlog_get_indexed_partselect(t8, 20, t6, ((int*)(t15)), 2, t62, 11, 2, t44, 32, 1, 1);
    t45 = (t1 + 11752);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    t48 = (t1 + 11912);
    t49 = (t48 + 56U);
    t50 = *((char **)t49);
    t51 = (t2 + 56U);
    t52 = *((char **)t51);
    t53 = (t1 + 5168);
    t55 = xsi_create_subprogram_invocation(t52, 0, t1, t53, 0, t2);
    t56 = (t1 + 11272);
    xsi_vlogvar_assign_value(t56, t47, 0, 0, 3);
    t57 = (t1 + 11432);
    xsi_vlogvar_assign_value(t57, t50, 0, 0, 3);

LAB151:    t59 = (t2 + 64U);
    t60 = *((char **)t59);
    t61 = (t60 + 80U);
    t64 = *((char **)t61);
    t65 = (t64 + 272U);
    t66 = *((char **)t65);
    t67 = (t66 + 0U);
    t68 = *((char **)t67);
    t54 = ((int  (*)(char *, char *))t68)(t1, t60);
    if (t54 != 0)
        goto LAB153;

LAB152:    t60 = (t2 + 64U);
    t69 = *((char **)t60);
    t60 = (t1 + 11112);
    t70 = (t60 + 56U);
    t71 = *((char **)t70);
    memcpy(t63, t71, 8);
    t72 = (t1 + 5168);
    t73 = (t2 + 56U);
    t74 = *((char **)t73);
    xsi_delete_subprogram_invocation(t72, t69, t1, t74, t2);
    memset(t85, 0, 8);
    xsi_vlog_unsigned_add(t85, 20, t8, 20, t63, 3);
    t75 = (t1 + 6952);
    t76 = (t1 + 6952);
    t77 = (t76 + 72U);
    t78 = *((char **)t77);
    t79 = (t1 + 11752);
    t80 = (t79 + 56U);
    t82 = *((char **)t80);
    t83 = ((char*)((ng5)));
    memset(t108, 0, 8);
    xsi_vlog_unsigned_multiply(t108, 32, t82, 3, t83, 32);
    t84 = (t1 + 11912);
    t86 = (t84 + 56U);
    t87 = *((char **)t86);
    memset(t110, 0, 8);
    xsi_vlog_unsigned_add(t110, 32, t108, 32, t87, 3);
    t88 = (t2 + 56U);
    t91 = *((char **)t88);
    t109 = (t1 + 848);
    t111 = xsi_create_subprogram_invocation(t91, 0, t1, t109, 0, t2);
    t112 = (t1 + 8392);
    xsi_vlogvar_assign_value(t112, t110, 0, 0, 6);

LAB154:    t113 = (t2 + 64U);
    t114 = *((char **)t113);
    t115 = (t114 + 80U);
    t116 = *((char **)t115);
    t117 = (t116 + 272U);
    t118 = *((char **)t117);
    t119 = (t118 + 0U);
    t120 = *((char **)t119);
    t81 = ((int  (*)(char *, char *))t120)(t1, t114);
    if (t81 != 0)
        goto LAB156;

LAB155:    t114 = (t2 + 64U);
    t121 = *((char **)t114);
    t114 = (t1 + 8232);
    t122 = (t114 + 56U);
    t123 = *((char **)t122);
    memcpy(t128, t123, 8);
    t124 = (t1 + 848);
    t125 = (t2 + 56U);
    t126 = *((char **)t125);
    xsi_delete_subprogram_invocation(t124, t121, t1, t126, t2);
    t127 = ((char*)((ng1)));
    xsi_vlog_convert_indexed_partindices(t89, t90, t107, ((int*)(t78)), 2, t128, 11, 2, t127, 32, 1, 1);
    t129 = (t89 + 4);
    t10 = *((unsigned int *)t129);
    t146 = (!(t10));
    t130 = (t90 + 4);
    t11 = *((unsigned int *)t130);
    t204 = (!(t11));
    t205 = (t146 && t204);
    t131 = (t107 + 4);
    t12 = *((unsigned int *)t131);
    t242 = (!(t12));
    t271 = (t205 && t242);
    if (t271 == 1)
        goto LAB157;

LAB158:    xsi_set_current_line(182, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 6952);
    t6 = (t1 + 6952);
    t7 = (t6 + 72U);
    t9 = *((char **)t7);
    t15 = (t1 + 11752);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t1 + 6392U);
    t19 = *((char **)t18);
    t18 = (t2 + 56U);
    t20 = *((char **)t18);
    t21 = (t1 + 4304);
    t22 = xsi_create_subprogram_invocation(t20, 0, t1, t21, 0, t2);
    t23 = (t1 + 10632);
    xsi_vlogvar_assign_value(t23, t19, 0, 0, 2);

LAB159:    t24 = (t2 + 64U);
    t25 = *((char **)t24);
    t26 = (t25 + 80U);
    t27 = *((char **)t26);
    t28 = (t27 + 272U);
    t30 = *((char **)t28);
    t31 = (t30 + 0U);
    t32 = *((char **)t31);
    t29 = ((int  (*)(char *, char *))t32)(t1, t25);
    if (t29 != 0)
        goto LAB161;

LAB160:    t25 = (t2 + 64U);
    t34 = *((char **)t25);
    t25 = (t1 + 10472);
    t35 = (t25 + 56U);
    t36 = *((char **)t35);
    memcpy(t62, t36, 8);
    t37 = (t1 + 4304);
    t38 = (t2 + 56U);
    t39 = *((char **)t38);
    xsi_delete_subprogram_invocation(t37, t34, t1, t39, t2);
    memset(t63, 0, 8);
    xsi_vlog_unsigned_add(t63, 32, t17, 3, t62, 3);
    t40 = ((char*)((ng5)));
    memset(t85, 0, 8);
    xsi_vlog_unsigned_multiply(t85, 32, t63, 32, t40, 32);
    t41 = (t1 + 11912);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    memset(t89, 0, 8);
    xsi_vlog_unsigned_add(t89, 32, t85, 32, t43, 3);
    t44 = (t1 + 6392U);
    t45 = *((char **)t44);
    t44 = (t2 + 56U);
    t46 = *((char **)t44);
    t47 = (t1 + 4736);
    t48 = xsi_create_subprogram_invocation(t46, 0, t1, t47, 0, t2);
    t49 = (t1 + 10952);
    xsi_vlogvar_assign_value(t49, t45, 0, 0, 2);

LAB162:    t50 = (t2 + 64U);
    t51 = *((char **)t50);
    t52 = (t51 + 80U);
    t53 = *((char **)t52);
    t55 = (t53 + 272U);
    t56 = *((char **)t55);
    t57 = (t56 + 0U);
    t59 = *((char **)t57);
    t54 = ((int  (*)(char *, char *))t59)(t1, t51);
    if (t54 != 0)
        goto LAB164;

LAB163:    t51 = (t2 + 64U);
    t60 = *((char **)t51);
    t51 = (t1 + 10792);
    t61 = (t51 + 56U);
    t64 = *((char **)t61);
    memcpy(t90, t64, 8);
    t65 = (t1 + 4736);
    t66 = (t2 + 56U);
    t67 = *((char **)t66);
    xsi_delete_subprogram_invocation(t65, t60, t1, t67, t2);
    memset(t107, 0, 8);
    xsi_vlog_unsigned_add(t107, 32, t89, 32, t90, 3);
    t68 = (t2 + 56U);
    t69 = *((char **)t68);
    t70 = (t1 + 848);
    t71 = xsi_create_subprogram_invocation(t69, 0, t1, t70, 0, t2);
    t72 = (t1 + 8392);
    xsi_vlogvar_assign_value(t72, t107, 0, 0, 6);

LAB165:    t73 = (t2 + 64U);
    t74 = *((char **)t73);
    t75 = (t74 + 80U);
    t76 = *((char **)t75);
    t77 = (t76 + 272U);
    t78 = *((char **)t77);
    t79 = (t78 + 0U);
    t80 = *((char **)t79);
    t81 = ((int  (*)(char *, char *))t80)(t1, t74);
    if (t81 != 0)
        goto LAB167;

LAB166:    t74 = (t2 + 64U);
    t82 = *((char **)t74);
    t74 = (t1 + 8232);
    t83 = (t74 + 56U);
    t84 = *((char **)t83);
    memcpy(t108, t84, 8);
    t86 = (t1 + 848);
    t87 = (t2 + 56U);
    t88 = *((char **)t87);
    xsi_delete_subprogram_invocation(t86, t82, t1, t88, t2);
    t91 = ((char*)((ng1)));
    xsi_vlog_convert_indexed_partindices(t8, t33, t58, ((int*)(t9)), 2, t108, 11, 2, t91, 32, 1, 1);
    t109 = (t8 + 4);
    t10 = *((unsigned int *)t109);
    t146 = (!(t10));
    t111 = (t33 + 4);
    t11 = *((unsigned int *)t111);
    t204 = (!(t11));
    t205 = (t146 && t204);
    t112 = (t58 + 4);
    t12 = *((unsigned int *)t112);
    t242 = (!(t12));
    t271 = (t205 && t242);
    if (t271 == 1)
        goto LAB168;

LAB169:    xsi_set_current_line(183, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 11592);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB138;

LAB142:    t276 = (t2 + 48U);
    *((char **)t276) = &&LAB140;
    goto LAB1;

LAB145:    t315 = (t2 + 48U);
    *((char **)t315) = &&LAB143;
    goto LAB1;

LAB146:    t351 = *((unsigned int *)t313);
    t350 = (t351 + 0);
    t353 = *((unsigned int *)t304);
    t354 = *((unsigned int *)t305);
    t352 = (t353 - t354);
    t355 = (t352 + 1);
    xsi_vlogvar_assign_value(t294, t303, t350, *((unsigned int *)t305), t355);
    goto LAB147;

LAB150:    t28 = (t2 + 48U);
    *((char **)t28) = &&LAB148;
    goto LAB1;

LAB153:    t59 = (t2 + 48U);
    *((char **)t59) = &&LAB151;
    goto LAB1;

LAB156:    t113 = (t2 + 48U);
    *((char **)t113) = &&LAB154;
    goto LAB1;

LAB157:    t13 = *((unsigned int *)t107);
    t293 = (t13 + 0);
    t14 = *((unsigned int *)t89);
    t92 = *((unsigned int *)t90);
    t331 = (t14 - t92);
    t342 = (t331 + 1);
    xsi_vlogvar_assign_value(t75, t85, t293, *((unsigned int *)t90), t342);
    goto LAB158;

LAB161:    t24 = (t2 + 48U);
    *((char **)t24) = &&LAB159;
    goto LAB1;

LAB164:    t50 = (t2 + 48U);
    *((char **)t50) = &&LAB162;
    goto LAB1;

LAB167:    t73 = (t2 + 48U);
    *((char **)t73) = &&LAB165;
    goto LAB1;

LAB168:    t13 = *((unsigned int *)t58);
    t293 = (t13 + 0);
    t14 = *((unsigned int *)t8);
    t92 = *((unsigned int *)t33);
    t331 = (t14 - t92);
    t342 = (t331 + 1);
    xsi_vlogvar_assign_value(t5, t4, t293, *((unsigned int *)t33), t342);
    goto LAB169;

LAB171:    xsi_set_current_line(189, ng0);

LAB173:    xsi_set_current_line(190, ng0);
    t15 = (t1 + 6952);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t1 + 6952);
    t19 = (t18 + 72U);
    t20 = *((char **)t19);
    t21 = (t1 + 7752);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t2 + 56U);
    t25 = *((char **)t24);
    t26 = (t1 + 848);
    t27 = xsi_create_subprogram_invocation(t25, 0, t1, t26, 0, t2);
    t28 = (t1 + 8392);
    xsi_vlogvar_assign_value(t28, t23, 0, 0, 6);

LAB174:    t30 = (t2 + 64U);
    t31 = *((char **)t30);
    t32 = (t31 + 80U);
    t34 = *((char **)t32);
    t35 = (t34 + 272U);
    t36 = *((char **)t35);
    t37 = (t36 + 0U);
    t38 = *((char **)t37);
    t29 = ((int  (*)(char *, char *))t38)(t1, t31);
    if (t29 != 0)
        goto LAB176;

LAB175:    t31 = (t2 + 64U);
    t39 = *((char **)t31);
    t31 = (t1 + 8232);
    t40 = (t31 + 56U);
    t41 = *((char **)t40);
    memcpy(t58, t41, 8);
    t42 = (t1 + 848);
    t43 = (t2 + 56U);
    t44 = *((char **)t43);
    xsi_delete_subprogram_invocation(t42, t39, t1, t44, t2);
    t45 = ((char*)((ng1)));
    xsi_vlog_get_indexed_partselect(t33, 32, t17, ((int*)(t20)), 2, t58, 11, 2, t45, 32, 1, 1);
    t46 = ((char*)((ng8)));
    memset(t62, 0, 8);
    t47 = (t33 + 4);
    if (*((unsigned int *)t47) != 0)
        goto LAB178;

LAB177:    t48 = (t46 + 4);
    if (*((unsigned int *)t48) != 0)
        goto LAB178;

LAB181:    if (*((unsigned int *)t33) > *((unsigned int *)t46))
        goto LAB179;

LAB180:    t50 = (t62 + 4);
    t92 = *((unsigned int *)t50);
    t93 = (~(t92));
    t94 = *((unsigned int *)t62);
    t95 = (t94 & t93);
    t96 = (t95 != 0);
    if (t96 > 0)
        goto LAB182;

LAB183:
LAB184:    xsi_set_current_line(189, ng0);
    t4 = (t1 + 7752);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t6, 32, t7, 32);
    t9 = (t1 + 7752);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 32);
    goto LAB170;

LAB176:    t30 = (t2 + 48U);
    *((char **)t30) = &&LAB174;
    goto LAB1;

LAB178:    t49 = (t62 + 4);
    *((unsigned int *)t62) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB180;

LAB179:    *((unsigned int *)t62) = 1;
    goto LAB180;

LAB182:    xsi_set_current_line(190, ng0);

LAB185:    xsi_set_current_line(191, ng0);
    t51 = (t1 + 6952);
    t52 = (t51 + 56U);
    t53 = *((char **)t52);
    t55 = (t1 + 6952);
    t56 = (t55 + 72U);
    t57 = *((char **)t56);
    t59 = (t1 + 7752);
    t60 = (t59 + 56U);
    t61 = *((char **)t60);
    t64 = (t2 + 56U);
    t65 = *((char **)t64);
    t66 = (t1 + 848);
    t67 = xsi_create_subprogram_invocation(t65, 0, t1, t66, 0, t2);
    t68 = (t1 + 8392);
    xsi_vlogvar_assign_value(t68, t61, 0, 0, 6);

LAB186:    t69 = (t2 + 64U);
    t70 = *((char **)t69);
    t71 = (t70 + 80U);
    t72 = *((char **)t71);
    t73 = (t72 + 272U);
    t74 = *((char **)t73);
    t75 = (t74 + 0U);
    t76 = *((char **)t75);
    t54 = ((int  (*)(char *, char *))t76)(t1, t70);
    if (t54 != 0)
        goto LAB188;

LAB187:    t70 = (t2 + 64U);
    t77 = *((char **)t70);
    t70 = (t1 + 8232);
    t78 = (t70 + 56U);
    t79 = *((char **)t78);
    memcpy(t85, t79, 8);
    t80 = (t1 + 848);
    t82 = (t2 + 56U);
    t83 = *((char **)t82);
    xsi_delete_subprogram_invocation(t80, t77, t1, t83, t2);
    t84 = ((char*)((ng1)));
    xsi_vlog_get_indexed_partselect(t63, 32, t53, ((int*)(t57)), 2, t85, 11, 2, t84, 32, 1, 1);
    t86 = (t1 + 6952);
    t87 = (t86 + 56U);
    t88 = *((char **)t87);
    t91 = (t1 + 6952);
    t109 = (t91 + 72U);
    t111 = *((char **)t109);
    t112 = (t1 + 7752);
    t113 = (t112 + 56U);
    t114 = *((char **)t113);
    t115 = (t2 + 56U);
    t116 = *((char **)t115);
    t117 = (t1 + 848);
    t118 = xsi_create_subprogram_invocation(t116, 0, t1, t117, 0, t2);
    t119 = (t1 + 8392);
    xsi_vlogvar_assign_value(t119, t114, 0, 0, 6);

LAB189:    t120 = (t2 + 64U);
    t121 = *((char **)t120);
    t122 = (t121 + 80U);
    t123 = *((char **)t122);
    t124 = (t123 + 272U);
    t125 = *((char **)t124);
    t126 = (t125 + 0U);
    t127 = *((char **)t126);
    t81 = ((int  (*)(char *, char *))t127)(t1, t121);
    if (t81 != 0)
        goto LAB191;

LAB190:    t121 = (t2 + 64U);
    t129 = *((char **)t121);
    t121 = (t1 + 8232);
    t130 = (t121 + 56U);
    t131 = *((char **)t130);
    memcpy(t90, t131, 8);
    t133 = (t1 + 848);
    t134 = (t2 + 56U);
    t135 = *((char **)t134);
    xsi_delete_subprogram_invocation(t133, t129, t1, t135, t2);
    t136 = ((char*)((ng1)));
    xsi_vlog_get_indexed_partselect(t89, 32, t88, ((int*)(t111)), 2, t90, 11, 2, t136, 32, 1, 1);
    t137 = ((char*)((ng5)));
    memset(t107, 0, 8);
    xsi_vlog_unsigned_mod(t107, 32, t89, 32, t137, 32);
    memset(t108, 0, 8);
    xsi_vlog_unsigned_minus(t108, 32, t63, 32, t107, 32);
    t138 = (t1 + 6952);
    t139 = (t1 + 6952);
    t140 = (t139 + 72U);
    t141 = *((char **)t140);
    t142 = (t1 + 7752);
    t143 = (t142 + 56U);
    t144 = *((char **)t143);
    t145 = (t2 + 56U);
    t147 = *((char **)t145);
    t148 = (t1 + 848);
    t149 = xsi_create_subprogram_invocation(t147, 0, t1, t148, 0, t2);
    t151 = (t1 + 8392);
    xsi_vlogvar_assign_value(t151, t144, 0, 0, 6);

LAB192:    t152 = (t2 + 64U);
    t153 = *((char **)t152);
    t154 = (t153 + 80U);
    t155 = *((char **)t154);
    t157 = (t155 + 272U);
    t158 = *((char **)t157);
    t171 = (t158 + 0U);
    t173 = *((char **)t171);
    t146 = ((int  (*)(char *, char *))t173)(t1, t153);
    if (t146 != 0)
        goto LAB194;

LAB193:    t153 = (t2 + 64U);
    t179 = *((char **)t153);
    t153 = (t1 + 8232);
    t184 = (t153 + 56U);
    t185 = *((char **)t184);
    memcpy(t150, t185, 8);
    t186 = (t1 + 848);
    t194 = (t2 + 56U);
    t195 = *((char **)t194);
    xsi_delete_subprogram_invocation(t186, t179, t1, t195, t2);
    t212 = ((char*)((ng1)));
    xsi_vlog_convert_indexed_partindices(t110, t128, t132, ((int*)(t141)), 2, t150, 11, 2, t212, 32, 1, 1);
    t219 = (t110 + 4);
    t97 = *((unsigned int *)t219);
    t204 = (!(t97));
    t220 = (t128 + 4);
    t98 = *((unsigned int *)t220);
    t205 = (!(t98));
    t242 = (t204 && t205);
    t221 = (t132 + 4);
    t99 = *((unsigned int *)t221);
    t271 = (!(t99));
    t293 = (t242 && t271);
    if (t293 == 1)
        goto LAB195;

LAB196:    goto LAB184;

LAB188:    t69 = (t2 + 48U);
    *((char **)t69) = &&LAB186;
    goto LAB1;

LAB191:    t120 = (t2 + 48U);
    *((char **)t120) = &&LAB189;
    goto LAB1;

LAB194:    t152 = (t2 + 48U);
    *((char **)t152) = &&LAB192;
    goto LAB1;

LAB195:    t100 = *((unsigned int *)t132);
    t331 = (t100 + 0);
    t101 = *((unsigned int *)t110);
    t102 = *((unsigned int *)t128);
    t342 = (t101 - t102);
    t345 = (t342 + 1);
    xsi_vlogvar_assign_value(t138, t108, t331, *((unsigned int *)t128), t345);
    goto LAB196;

}

static void Initial_197_0(char *t0)
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

LAB0:    t1 = (t0 + 12824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(197, ng0);

LAB4:    xsi_set_current_line(198, ng0);
    t2 = (t0 + 12632);
    t3 = (t0 + 1280);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB7:    t5 = (t0 + 12728);
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

LAB6:    t14 = (t0 + 12728);
    t15 = *((char **)t14);
    t14 = (t0 + 1280);
    t16 = (t0 + 12632);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);

LAB1:    return;
LAB8:;
LAB10:    t5 = (t0 + 12824U);
    *((char **)t5) = &&LAB7;
    goto LAB1;

}

static void Always_201_1(char *t0)
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

LAB0:    t1 = (t0 + 13072U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(201, ng0);
    t2 = (t0 + 13640);
    *((int *)t2) = 1;
    t3 = (t0 + 13104);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(201, ng0);

LAB5:    xsi_set_current_line(202, ng0);
    t4 = (t0 + 7432);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t6, 17, t7, 32);
    t9 = (t0 + 7432);
    xsi_vlogvar_wait_assign_value(t9, t8, 0, 0, 17, 0LL);
    goto LAB2;

}

static void Always_206_2(char *t0)
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

LAB0:    t1 = (t0 + 13320U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(206, ng0);
    t2 = (t0 + 13656);
    *((int *)t2) = 1;
    t3 = (t0 + 13352);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(206, ng0);

LAB5:    xsi_set_current_line(208, ng0);
    t4 = (t0 + 6552U);
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
LAB8:    xsi_set_current_line(214, ng0);
    t2 = (t0 + 13128);
    t3 = (t0 + 5600);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB18:    t5 = (t0 + 13224);
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

LAB16:    t11 = (t0 + 5600);
    xsi_vlog_subprogram_popinvocation(t11);

LAB17:    t18 = (t0 + 13224);
    t19 = *((char **)t18);
    t18 = (t0 + 11592);
    t20 = (t18 + 56U);
    t21 = *((char **)t20);
    t23 = (t0 + 7592);
    xsi_vlogvar_assign_value(t23, t21, 0, 0, 1);
    t24 = (t0 + 5600);
    t25 = (t0 + 13128);
    t26 = 0;
    xsi_delete_subprogram_invocation(t24, t19, t0, t25, t26);
    xsi_set_current_line(218, ng0);
    t2 = (t0 + 13128);
    t3 = (t0 + 2144);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB24:    t5 = (t0 + 13224);
    t11 = *((char **)t5);
    t12 = (t11 + 80U);
    t13 = *((char **)t12);
    t14 = (t13 + 272U);
    t15 = *((char **)t14);
    t16 = (t15 + 0U);
    t17 = *((char **)t16);
    t22 = ((int  (*)(char *, char *))t17)(t0, t11);

LAB26:    if (t22 != 0)
        goto LAB27;

LAB22:    t11 = (t0 + 2144);
    xsi_vlog_subprogram_popinvocation(t11);

LAB23:    t18 = (t0 + 13224);
    t19 = *((char **)t18);
    t18 = (t0 + 2144);
    t20 = (t0 + 13128);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    goto LAB2;

LAB6:    xsi_set_current_line(208, ng0);

LAB9:    xsi_set_current_line(209, ng0);
    t11 = (t0 + 13128);
    t12 = (t0 + 1280);
    t13 = xsi_create_subprogram_invocation(t11, 0, t0, t12, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t12, t13);

LAB12:    t14 = (t0 + 13224);
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

LAB11:    t23 = (t0 + 13224);
    t24 = *((char **)t23);
    t23 = (t0 + 1280);
    t25 = (t0 + 13128);
    t26 = 0;
    xsi_delete_subprogram_invocation(t23, t24, t0, t25, t26);
    goto LAB8;

LAB13:;
LAB15:    t14 = (t0 + 13320U);
    *((char **)t14) = &&LAB12;
    goto LAB1;

LAB19:;
LAB21:    t5 = (t0 + 13320U);
    *((char **)t5) = &&LAB18;
    goto LAB1;

LAB25:;
LAB27:    t5 = (t0 + 13320U);
    *((char **)t5) = &&LAB24;
    goto LAB1;

}


extern void work_m_09238105174098091506_2260019474_init()
{
	static char *pe[] = {(void *)Initial_197_0,(void *)Always_201_1,(void *)Always_206_2};
	static char *se[] = {(void *)sp_getSplice,(void *)sp_resetBoard,(void *)sp_emptyCellExists,(void *)sp_addNewCell,(void *)sp_startX,(void *)sp_startY,(void *)sp_moveX,(void *)sp_moveY,(void *)sp_mergeX,(void *)sp_mergeY,(void *)sp_max,(void *)sp_move};
	xsi_register_didat("work_m_09238105174098091506_2260019474", "isim/tb_isim_beh.exe.sim/work/m_09238105174098091506_2260019474.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
