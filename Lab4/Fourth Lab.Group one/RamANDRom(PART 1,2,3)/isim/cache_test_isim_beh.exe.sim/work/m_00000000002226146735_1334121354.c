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
static const char *ng0 = "E:/Xilinx project/Fourth Lab.Group one/RamANDRom(PART 1,2,3)/cache.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {1, 0};
static int ng3[] = {0, 0};
static int ng4[] = {2, 0};



static void Initial_36_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(36, ng0);

LAB2:    xsi_set_current_line(37, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2888);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 8);

LAB1:    return;
}

static void Always_40_1(char *t0)
{
    char t11[8];
    char t24[8];
    char t31[8];
    char t41[8];
    char t57[8];
    char t72[8];
    char t76[8];
    char t87[8];
    char t103[8];
    char t111[8];
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
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    char *t71;
    char *t73;
    char *t74;
    char *t75;
    char *t77;
    char *t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    char *t88;
    char *t89;
    unsigned int t90;
    unsigned int t91;
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
    char *t102;
    char *t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    char *t110;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    char *t115;
    char *t116;
    char *t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    char *t125;
    char *t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    int t135;
    int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    char *t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    char *t149;
    char *t150;
    int t151;
    int t152;
    int t153;

LAB0:    t1 = (t0 + 4056U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 4376);
    *((int *)t2) = 1;
    t3 = (t0 + 4088);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(41, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(41, ng0);

LAB8:    xsi_set_current_line(42, ng0);
    t12 = (t0 + 1208U);
    t13 = *((char **)t12);
    memset(t11, 0, 8);
    t12 = (t11 + 4);
    t14 = (t13 + 4);
    t15 = *((unsigned int *)t13);
    t16 = (t15 >> 5);
    *((unsigned int *)t11) = t16;
    t17 = *((unsigned int *)t14);
    t18 = (t17 >> 5);
    *((unsigned int *)t12) = t18;
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t19 & 7U);
    t20 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t20 & 7U);
    t21 = (t0 + 2728);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t25 = (t0 + 2728);
    t26 = (t25 + 72U);
    t27 = *((char **)t26);
    t28 = (t0 + 2728);
    t29 = (t28 + 64U);
    t30 = *((char **)t29);
    t32 = (t0 + 1208U);
    t33 = *((char **)t32);
    memset(t31, 0, 8);
    t32 = (t31 + 4);
    t34 = (t33 + 4);
    t35 = *((unsigned int *)t33);
    t36 = (t35 >> 2);
    *((unsigned int *)t31) = t36;
    t37 = *((unsigned int *)t34);
    t38 = (t37 >> 2);
    *((unsigned int *)t32) = t38;
    t39 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t39 & 7U);
    t40 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t40 & 7U);
    xsi_vlog_generic_get_array_select_value(t24, 3, t23, t27, t30, 2, 1, t31, 3, 2);
    memset(t41, 0, 8);
    t42 = (t11 + 4);
    t43 = (t24 + 4);
    t44 = *((unsigned int *)t11);
    t45 = *((unsigned int *)t24);
    t46 = (t44 ^ t45);
    t47 = *((unsigned int *)t42);
    t48 = *((unsigned int *)t43);
    t49 = (t47 ^ t48);
    t50 = (t46 | t49);
    t51 = *((unsigned int *)t42);
    t52 = *((unsigned int *)t43);
    t53 = (t51 | t52);
    t54 = (~(t53));
    t55 = (t50 & t54);
    if (t55 != 0)
        goto LAB12;

LAB9:    if (t53 != 0)
        goto LAB11;

LAB10:    *((unsigned int *)t41) = 1;

LAB12:    memset(t57, 0, 8);
    t58 = (t41 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (~(t59));
    t61 = *((unsigned int *)t41);
    t62 = (t61 & t60);
    t63 = (t62 & 1U);
    if (t63 != 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t58) != 0)
        goto LAB15;

LAB16:    t65 = (t57 + 4);
    t66 = *((unsigned int *)t57);
    t67 = *((unsigned int *)t65);
    t68 = (t66 || t67);
    if (t68 > 0)
        goto LAB17;

LAB18:    memcpy(t111, t57, 8);

LAB19:    t143 = (t111 + 4);
    t144 = *((unsigned int *)t143);
    t145 = (~(t144));
    t146 = *((unsigned int *)t111);
    t147 = (t146 & t145);
    t148 = (t147 != 0);
    if (t148 > 0)
        goto LAB31;

LAB32:    xsi_set_current_line(54, ng0);

LAB60:    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2888);
    t4 = (t0 + 2888);
    t5 = (t4 + 72U);
    t12 = *((char **)t5);
    t13 = (t0 + 1208U);
    t14 = *((char **)t13);
    memset(t24, 0, 8);
    t13 = (t24 + 4);
    t21 = (t14 + 4);
    t6 = *((unsigned int *)t14);
    t7 = (t6 >> 2);
    *((unsigned int *)t24) = t7;
    t8 = *((unsigned int *)t21);
    t9 = (t8 >> 2);
    *((unsigned int *)t13) = t9;
    t10 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t10 & 7U);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 & 7U);
    xsi_vlog_generic_convert_bit_index(t11, t12, 2, t24, 3, 2);
    t22 = (t11 + 4);
    t16 = *((unsigned int *)t22);
    t135 = (!(t16));
    if (t135 == 1)
        goto LAB61;

LAB62:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 5);
    *((unsigned int *)t11) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 5);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t10 & 7U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 7U);
    t5 = (t0 + 2728);
    t12 = (t0 + 2728);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t21 = (t0 + 2728);
    t22 = (t21 + 64U);
    t23 = *((char **)t22);
    t25 = (t0 + 1208U);
    t26 = *((char **)t25);
    memset(t41, 0, 8);
    t25 = (t41 + 4);
    t27 = (t26 + 4);
    t16 = *((unsigned int *)t26);
    t17 = (t16 >> 2);
    *((unsigned int *)t41) = t17;
    t18 = *((unsigned int *)t27);
    t19 = (t18 >> 2);
    *((unsigned int *)t25) = t19;
    t20 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t20 & 7U);
    t35 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t35 & 7U);
    xsi_vlog_generic_convert_array_indices(t24, t31, t14, t23, 2, 1, t41, 3, 2);
    t28 = (t24 + 4);
    t36 = *((unsigned int *)t28);
    t135 = (!(t36));
    t29 = (t31 + 4);
    t37 = *((unsigned int *)t29);
    t136 = (!(t37));
    t151 = (t135 && t136);
    if (t151 == 1)
        goto LAB63;

LAB64:    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    *((unsigned int *)t11) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t10 & 255U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 255U);
    t5 = (t0 + 2088);
    t12 = (t0 + 2088);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t21 = (t0 + 2088);
    t22 = (t21 + 64U);
    t23 = *((char **)t22);
    t25 = (t0 + 1208U);
    t26 = *((char **)t25);
    memset(t41, 0, 8);
    t25 = (t41 + 4);
    t27 = (t26 + 4);
    t16 = *((unsigned int *)t26);
    t17 = (t16 >> 5);
    *((unsigned int *)t41) = t17;
    t18 = *((unsigned int *)t27);
    t19 = (t18 >> 5);
    *((unsigned int *)t25) = t19;
    t20 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t20 & 7U);
    t35 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t35 & 7U);
    xsi_vlog_generic_convert_array_indices(t24, t31, t14, t23, 2, 1, t41, 3, 2);
    t28 = (t24 + 4);
    t36 = *((unsigned int *)t28);
    t135 = (!(t36));
    t29 = (t31 + 4);
    t37 = *((unsigned int *)t29);
    t136 = (!(t37));
    t151 = (t135 && t136);
    if (t151 == 1)
        goto LAB65;

LAB66:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 8);
    *((unsigned int *)t11) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 8);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t10 & 255U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 255U);
    t5 = (t0 + 2248);
    t12 = (t0 + 2248);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t21 = (t0 + 2248);
    t22 = (t21 + 64U);
    t23 = *((char **)t22);
    t25 = (t0 + 1208U);
    t26 = *((char **)t25);
    memset(t41, 0, 8);
    t25 = (t41 + 4);
    t27 = (t26 + 4);
    t16 = *((unsigned int *)t26);
    t17 = (t16 >> 5);
    *((unsigned int *)t41) = t17;
    t18 = *((unsigned int *)t27);
    t19 = (t18 >> 5);
    *((unsigned int *)t25) = t19;
    t20 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t20 & 7U);
    t35 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t35 & 7U);
    xsi_vlog_generic_convert_array_indices(t24, t31, t14, t23, 2, 1, t41, 3, 2);
    t28 = (t24 + 4);
    t36 = *((unsigned int *)t28);
    t135 = (!(t36));
    t29 = (t31 + 4);
    t37 = *((unsigned int *)t29);
    t136 = (!(t37));
    t151 = (t135 && t136);
    if (t151 == 1)
        goto LAB67;

LAB68:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 16);
    *((unsigned int *)t11) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 16);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t10 & 255U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 255U);
    t5 = (t0 + 2408);
    t12 = (t0 + 2408);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t21 = (t0 + 2408);
    t22 = (t21 + 64U);
    t23 = *((char **)t22);
    t25 = (t0 + 1208U);
    t26 = *((char **)t25);
    memset(t41, 0, 8);
    t25 = (t41 + 4);
    t27 = (t26 + 4);
    t16 = *((unsigned int *)t26);
    t17 = (t16 >> 5);
    *((unsigned int *)t41) = t17;
    t18 = *((unsigned int *)t27);
    t19 = (t18 >> 5);
    *((unsigned int *)t25) = t19;
    t20 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t20 & 7U);
    t35 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t35 & 7U);
    xsi_vlog_generic_convert_array_indices(t24, t31, t14, t23, 2, 1, t41, 3, 2);
    t28 = (t24 + 4);
    t36 = *((unsigned int *)t28);
    t135 = (!(t36));
    t29 = (t31 + 4);
    t37 = *((unsigned int *)t29);
    t136 = (!(t37));
    t151 = (t135 && t136);
    if (t151 == 1)
        goto LAB69;

LAB70:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 24);
    *((unsigned int *)t11) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 24);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t10 & 255U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 255U);
    t5 = (t0 + 2568);
    t12 = (t0 + 2568);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t21 = (t0 + 2568);
    t22 = (t21 + 64U);
    t23 = *((char **)t22);
    t25 = (t0 + 1208U);
    t26 = *((char **)t25);
    memset(t41, 0, 8);
    t25 = (t41 + 4);
    t27 = (t26 + 4);
    t16 = *((unsigned int *)t26);
    t17 = (t16 >> 5);
    *((unsigned int *)t41) = t17;
    t18 = *((unsigned int *)t27);
    t19 = (t18 >> 5);
    *((unsigned int *)t25) = t19;
    t20 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t20 & 7U);
    t35 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t35 & 7U);
    xsi_vlog_generic_convert_array_indices(t24, t31, t14, t23, 2, 1, t41, 3, 2);
    t28 = (t24 + 4);
    t36 = *((unsigned int *)t28);
    t135 = (!(t36));
    t29 = (t31 + 4);
    t37 = *((unsigned int *)t29);
    t136 = (!(t37));
    t151 = (t135 && t136);
    if (t151 == 1)
        goto LAB71;

LAB72:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    *((unsigned int *)t11) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t10 & 3U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 3U);
    t5 = ((char*)((ng3)));
    memset(t24, 0, 8);
    t12 = (t11 + 4);
    t13 = (t5 + 4);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t5);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t12);
    t20 = *((unsigned int *)t13);
    t35 = (t19 ^ t20);
    t36 = (t18 | t35);
    t37 = *((unsigned int *)t12);
    t38 = *((unsigned int *)t13);
    t39 = (t37 | t38);
    t40 = (~(t39));
    t44 = (t36 & t40);
    if (t44 != 0)
        goto LAB76;

LAB73:    if (t39 != 0)
        goto LAB75;

LAB74:    *((unsigned int *)t24) = 1;

LAB76:    t21 = (t24 + 4);
    t45 = *((unsigned int *)t21);
    t46 = (~(t45));
    t47 = *((unsigned int *)t24);
    t48 = (t47 & t46);
    t49 = (t48 != 0);
    if (t49 > 0)
        goto LAB77;

LAB78:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    *((unsigned int *)t11) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t10 & 3U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 3U);
    t5 = ((char*)((ng2)));
    memset(t24, 0, 8);
    t12 = (t11 + 4);
    t13 = (t5 + 4);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t5);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t12);
    t20 = *((unsigned int *)t13);
    t35 = (t19 ^ t20);
    t36 = (t18 | t35);
    t37 = *((unsigned int *)t12);
    t38 = *((unsigned int *)t13);
    t39 = (t37 | t38);
    t40 = (~(t39));
    t44 = (t36 & t40);
    if (t44 != 0)
        goto LAB84;

LAB81:    if (t39 != 0)
        goto LAB83;

LAB82:    *((unsigned int *)t24) = 1;

LAB84:    t21 = (t24 + 4);
    t45 = *((unsigned int *)t21);
    t46 = (~(t45));
    t47 = *((unsigned int *)t24);
    t48 = (t47 & t46);
    t49 = (t48 != 0);
    if (t49 > 0)
        goto LAB85;

LAB86:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    *((unsigned int *)t11) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t10 & 3U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 3U);
    t5 = ((char*)((ng4)));
    memset(t24, 0, 8);
    t12 = (t11 + 4);
    t13 = (t5 + 4);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t5);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t12);
    t20 = *((unsigned int *)t13);
    t35 = (t19 ^ t20);
    t36 = (t18 | t35);
    t37 = *((unsigned int *)t12);
    t38 = *((unsigned int *)t13);
    t39 = (t37 | t38);
    t40 = (~(t39));
    t44 = (t36 & t40);
    if (t44 != 0)
        goto LAB92;

LAB89:    if (t39 != 0)
        goto LAB91;

LAB90:    *((unsigned int *)t24) = 1;

LAB92:    t21 = (t24 + 4);
    t45 = *((unsigned int *)t21);
    t46 = (~(t45));
    t47 = *((unsigned int *)t24);
    t48 = (t47 & t46);
    t49 = (t48 != 0);
    if (t49 > 0)
        goto LAB93;

LAB94:    xsi_set_current_line(68, ng0);

LAB97:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2568);
    t12 = (t5 + 72U);
    t13 = *((char **)t12);
    t14 = (t0 + 2568);
    t21 = (t14 + 64U);
    t22 = *((char **)t21);
    t23 = (t0 + 1208U);
    t25 = *((char **)t23);
    memset(t24, 0, 8);
    t23 = (t24 + 4);
    t26 = (t25 + 4);
    t6 = *((unsigned int *)t25);
    t7 = (t6 >> 5);
    *((unsigned int *)t24) = t7;
    t8 = *((unsigned int *)t26);
    t9 = (t8 >> 5);
    *((unsigned int *)t23) = t9;
    t10 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t10 & 7U);
    t15 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t15 & 7U);
    xsi_vlog_generic_get_array_select_value(t11, 8, t4, t13, t22, 2, 1, t24, 3, 2);
    t27 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t27, t11, 0, 0, 8, 0LL);

LAB95:
LAB87:
LAB79:
LAB33:    goto LAB7;

LAB11:    t56 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t56) = 1;
    goto LAB12;

LAB13:    *((unsigned int *)t57) = 1;
    goto LAB16;

LAB15:    t64 = (t57 + 4);
    *((unsigned int *)t57) = 1;
    *((unsigned int *)t64) = 1;
    goto LAB16;

LAB17:    t69 = (t0 + 2888);
    t70 = (t69 + 56U);
    t71 = *((char **)t70);
    t73 = (t0 + 2888);
    t74 = (t73 + 72U);
    t75 = *((char **)t74);
    t77 = (t0 + 1208U);
    t78 = *((char **)t77);
    memset(t76, 0, 8);
    t77 = (t76 + 4);
    t79 = (t78 + 4);
    t80 = *((unsigned int *)t78);
    t81 = (t80 >> 5);
    *((unsigned int *)t76) = t81;
    t82 = *((unsigned int *)t79);
    t83 = (t82 >> 5);
    *((unsigned int *)t77) = t83;
    t84 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t84 & 7U);
    t85 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t85 & 7U);
    xsi_vlog_generic_get_index_select_value(t72, 32, t71, t75, 2, t76, 3, 2);
    t86 = ((char*)((ng2)));
    memset(t87, 0, 8);
    t88 = (t72 + 4);
    t89 = (t86 + 4);
    t90 = *((unsigned int *)t72);
    t91 = *((unsigned int *)t86);
    t92 = (t90 ^ t91);
    t93 = *((unsigned int *)t88);
    t94 = *((unsigned int *)t89);
    t95 = (t93 ^ t94);
    t96 = (t92 | t95);
    t97 = *((unsigned int *)t88);
    t98 = *((unsigned int *)t89);
    t99 = (t97 | t98);
    t100 = (~(t99));
    t101 = (t96 & t100);
    if (t101 != 0)
        goto LAB23;

LAB20:    if (t99 != 0)
        goto LAB22;

LAB21:    *((unsigned int *)t87) = 1;

LAB23:    memset(t103, 0, 8);
    t104 = (t87 + 4);
    t105 = *((unsigned int *)t104);
    t106 = (~(t105));
    t107 = *((unsigned int *)t87);
    t108 = (t107 & t106);
    t109 = (t108 & 1U);
    if (t109 != 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t104) != 0)
        goto LAB26;

LAB27:    t112 = *((unsigned int *)t57);
    t113 = *((unsigned int *)t103);
    t114 = (t112 & t113);
    *((unsigned int *)t111) = t114;
    t115 = (t57 + 4);
    t116 = (t103 + 4);
    t117 = (t111 + 4);
    t118 = *((unsigned int *)t115);
    t119 = *((unsigned int *)t116);
    t120 = (t118 | t119);
    *((unsigned int *)t117) = t120;
    t121 = *((unsigned int *)t117);
    t122 = (t121 != 0);
    if (t122 == 1)
        goto LAB28;

LAB29:
LAB30:    goto LAB19;

LAB22:    t102 = (t87 + 4);
    *((unsigned int *)t87) = 1;
    *((unsigned int *)t102) = 1;
    goto LAB23;

LAB24:    *((unsigned int *)t103) = 1;
    goto LAB27;

LAB26:    t110 = (t103 + 4);
    *((unsigned int *)t103) = 1;
    *((unsigned int *)t110) = 1;
    goto LAB27;

LAB28:    t123 = *((unsigned int *)t111);
    t124 = *((unsigned int *)t117);
    *((unsigned int *)t111) = (t123 | t124);
    t125 = (t57 + 4);
    t126 = (t103 + 4);
    t127 = *((unsigned int *)t57);
    t128 = (~(t127));
    t129 = *((unsigned int *)t125);
    t130 = (~(t129));
    t131 = *((unsigned int *)t103);
    t132 = (~(t131));
    t133 = *((unsigned int *)t126);
    t134 = (~(t133));
    t135 = (t128 & t130);
    t136 = (t132 & t134);
    t137 = (~(t135));
    t138 = (~(t136));
    t139 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t139 & t137);
    t140 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t140 & t138);
    t141 = *((unsigned int *)t111);
    *((unsigned int *)t111) = (t141 & t137);
    t142 = *((unsigned int *)t111);
    *((unsigned int *)t111) = (t142 & t138);
    goto LAB30;

LAB31:    xsi_set_current_line(42, ng0);

LAB34:    xsi_set_current_line(43, ng0);
    t149 = ((char*)((ng2)));
    t150 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t150, t149, 0, 0, 1, 0LL);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    *((unsigned int *)t11) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t10 & 3U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 3U);
    t5 = ((char*)((ng3)));
    memset(t24, 0, 8);
    t12 = (t11 + 4);
    t13 = (t5 + 4);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t5);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t12);
    t20 = *((unsigned int *)t13);
    t35 = (t19 ^ t20);
    t36 = (t18 | t35);
    t37 = *((unsigned int *)t12);
    t38 = *((unsigned int *)t13);
    t39 = (t37 | t38);
    t40 = (~(t39));
    t44 = (t36 & t40);
    if (t44 != 0)
        goto LAB38;

LAB35:    if (t39 != 0)
        goto LAB37;

LAB36:    *((unsigned int *)t24) = 1;

LAB38:    t21 = (t24 + 4);
    t45 = *((unsigned int *)t21);
    t46 = (~(t45));
    t47 = *((unsigned int *)t24);
    t48 = (t47 & t46);
    t49 = (t48 != 0);
    if (t49 > 0)
        goto LAB39;

LAB40:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    *((unsigned int *)t11) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t10 & 3U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 3U);
    t5 = ((char*)((ng2)));
    memset(t24, 0, 8);
    t12 = (t11 + 4);
    t13 = (t5 + 4);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t5);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t12);
    t20 = *((unsigned int *)t13);
    t35 = (t19 ^ t20);
    t36 = (t18 | t35);
    t37 = *((unsigned int *)t12);
    t38 = *((unsigned int *)t13);
    t39 = (t37 | t38);
    t40 = (~(t39));
    t44 = (t36 & t40);
    if (t44 != 0)
        goto LAB46;

LAB43:    if (t39 != 0)
        goto LAB45;

LAB44:    *((unsigned int *)t24) = 1;

LAB46:    t21 = (t24 + 4);
    t45 = *((unsigned int *)t21);
    t46 = (~(t45));
    t47 = *((unsigned int *)t24);
    t48 = (t47 & t46);
    t49 = (t48 != 0);
    if (t49 > 0)
        goto LAB47;

LAB48:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    *((unsigned int *)t11) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t10 & 3U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 3U);
    t5 = ((char*)((ng4)));
    memset(t24, 0, 8);
    t12 = (t11 + 4);
    t13 = (t5 + 4);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t5);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t12);
    t20 = *((unsigned int *)t13);
    t35 = (t19 ^ t20);
    t36 = (t18 | t35);
    t37 = *((unsigned int *)t12);
    t38 = *((unsigned int *)t13);
    t39 = (t37 | t38);
    t40 = (~(t39));
    t44 = (t36 & t40);
    if (t44 != 0)
        goto LAB54;

LAB51:    if (t39 != 0)
        goto LAB53;

LAB52:    *((unsigned int *)t24) = 1;

LAB54:    t21 = (t24 + 4);
    t45 = *((unsigned int *)t21);
    t46 = (~(t45));
    t47 = *((unsigned int *)t24);
    t48 = (t47 & t46);
    t49 = (t48 != 0);
    if (t49 > 0)
        goto LAB55;

LAB56:    xsi_set_current_line(50, ng0);

LAB59:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2568);
    t12 = (t5 + 72U);
    t13 = *((char **)t12);
    t14 = (t0 + 2568);
    t21 = (t14 + 64U);
    t22 = *((char **)t21);
    t23 = (t0 + 1208U);
    t25 = *((char **)t23);
    memset(t24, 0, 8);
    t23 = (t24 + 4);
    t26 = (t25 + 4);
    t6 = *((unsigned int *)t25);
    t7 = (t6 >> 5);
    *((unsigned int *)t24) = t7;
    t8 = *((unsigned int *)t26);
    t9 = (t8 >> 5);
    *((unsigned int *)t23) = t9;
    t10 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t10 & 7U);
    t15 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t15 & 7U);
    xsi_vlog_generic_get_array_select_value(t11, 8, t4, t13, t22, 2, 1, t24, 3, 2);
    t27 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t27, t11, 0, 0, 8, 0LL);

LAB57:
LAB49:
LAB41:    goto LAB33;

LAB37:    t14 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB38;

LAB39:    xsi_set_current_line(44, ng0);

LAB42:    xsi_set_current_line(45, ng0);
    t22 = (t0 + 2088);
    t23 = (t22 + 56U);
    t25 = *((char **)t23);
    t26 = (t0 + 2088);
    t27 = (t26 + 72U);
    t28 = *((char **)t27);
    t29 = (t0 + 2088);
    t30 = (t29 + 64U);
    t32 = *((char **)t30);
    t33 = (t0 + 1208U);
    t34 = *((char **)t33);
    memset(t41, 0, 8);
    t33 = (t41 + 4);
    t42 = (t34 + 4);
    t50 = *((unsigned int *)t34);
    t51 = (t50 >> 5);
    *((unsigned int *)t41) = t51;
    t52 = *((unsigned int *)t42);
    t53 = (t52 >> 5);
    *((unsigned int *)t33) = t53;
    t54 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t54 & 7U);
    t55 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t55 & 7U);
    xsi_vlog_generic_get_array_select_value(t31, 8, t25, t28, t32, 2, 1, t41, 3, 2);
    t43 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t43, t31, 0, 0, 8, 0LL);
    goto LAB41;

LAB45:    t14 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB46;

LAB47:    xsi_set_current_line(46, ng0);

LAB50:    xsi_set_current_line(47, ng0);
    t22 = (t0 + 2248);
    t23 = (t22 + 56U);
    t25 = *((char **)t23);
    t26 = (t0 + 2248);
    t27 = (t26 + 72U);
    t28 = *((char **)t27);
    t29 = (t0 + 2248);
    t30 = (t29 + 64U);
    t32 = *((char **)t30);
    t33 = (t0 + 1208U);
    t34 = *((char **)t33);
    memset(t41, 0, 8);
    t33 = (t41 + 4);
    t42 = (t34 + 4);
    t50 = *((unsigned int *)t34);
    t51 = (t50 >> 5);
    *((unsigned int *)t41) = t51;
    t52 = *((unsigned int *)t42);
    t53 = (t52 >> 5);
    *((unsigned int *)t33) = t53;
    t54 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t54 & 7U);
    t55 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t55 & 7U);
    xsi_vlog_generic_get_array_select_value(t31, 8, t25, t28, t32, 2, 1, t41, 3, 2);
    t43 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t43, t31, 0, 0, 8, 0LL);
    goto LAB49;

LAB53:    t14 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB54;

LAB55:    xsi_set_current_line(48, ng0);

LAB58:    xsi_set_current_line(49, ng0);
    t22 = (t0 + 2408);
    t23 = (t22 + 56U);
    t25 = *((char **)t23);
    t26 = (t0 + 2408);
    t27 = (t26 + 72U);
    t28 = *((char **)t27);
    t29 = (t0 + 2408);
    t30 = (t29 + 64U);
    t32 = *((char **)t30);
    t33 = (t0 + 1208U);
    t34 = *((char **)t33);
    memset(t41, 0, 8);
    t33 = (t41 + 4);
    t42 = (t34 + 4);
    t50 = *((unsigned int *)t34);
    t51 = (t50 >> 5);
    *((unsigned int *)t41) = t51;
    t52 = *((unsigned int *)t42);
    t53 = (t52 >> 5);
    *((unsigned int *)t33) = t53;
    t54 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t54 & 7U);
    t55 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t55 & 7U);
    xsi_vlog_generic_get_array_select_value(t31, 8, t25, t28, t32, 2, 1, t41, 3, 2);
    t43 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t43, t31, 0, 0, 8, 0LL);
    goto LAB57;

LAB61:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t11), 1, 0LL);
    goto LAB62;

LAB63:    t38 = *((unsigned int *)t24);
    t39 = *((unsigned int *)t31);
    t152 = (t38 - t39);
    t153 = (t152 + 1);
    xsi_vlogvar_wait_assign_value(t5, t11, 0, *((unsigned int *)t31), t153, 0LL);
    goto LAB64;

LAB65:    t38 = *((unsigned int *)t24);
    t39 = *((unsigned int *)t31);
    t152 = (t38 - t39);
    t153 = (t152 + 1);
    xsi_vlogvar_assign_value(t5, t11, 0, *((unsigned int *)t31), t153);
    goto LAB66;

LAB67:    t38 = *((unsigned int *)t24);
    t39 = *((unsigned int *)t31);
    t152 = (t38 - t39);
    t153 = (t152 + 1);
    xsi_vlogvar_assign_value(t5, t11, 0, *((unsigned int *)t31), t153);
    goto LAB68;

LAB69:    t38 = *((unsigned int *)t24);
    t39 = *((unsigned int *)t31);
    t152 = (t38 - t39);
    t153 = (t152 + 1);
    xsi_vlogvar_assign_value(t5, t11, 0, *((unsigned int *)t31), t153);
    goto LAB70;

LAB71:    t38 = *((unsigned int *)t24);
    t39 = *((unsigned int *)t31);
    t152 = (t38 - t39);
    t153 = (t152 + 1);
    xsi_vlogvar_assign_value(t5, t11, 0, *((unsigned int *)t31), t153);
    goto LAB72;

LAB75:    t14 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB76;

LAB77:    xsi_set_current_line(62, ng0);

LAB80:    xsi_set_current_line(63, ng0);
    t22 = (t0 + 2088);
    t23 = (t22 + 56U);
    t25 = *((char **)t23);
    t26 = (t0 + 2088);
    t27 = (t26 + 72U);
    t28 = *((char **)t27);
    t29 = (t0 + 2088);
    t30 = (t29 + 64U);
    t32 = *((char **)t30);
    t33 = (t0 + 1208U);
    t34 = *((char **)t33);
    memset(t41, 0, 8);
    t33 = (t41 + 4);
    t42 = (t34 + 4);
    t50 = *((unsigned int *)t34);
    t51 = (t50 >> 5);
    *((unsigned int *)t41) = t51;
    t52 = *((unsigned int *)t42);
    t53 = (t52 >> 5);
    *((unsigned int *)t33) = t53;
    t54 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t54 & 7U);
    t55 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t55 & 7U);
    xsi_vlog_generic_get_array_select_value(t31, 8, t25, t28, t32, 2, 1, t41, 3, 2);
    t43 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t43, t31, 0, 0, 8, 0LL);
    goto LAB79;

LAB83:    t14 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB84;

LAB85:    xsi_set_current_line(64, ng0);

LAB88:    xsi_set_current_line(65, ng0);
    t22 = (t0 + 2248);
    t23 = (t22 + 56U);
    t25 = *((char **)t23);
    t26 = (t0 + 2248);
    t27 = (t26 + 72U);
    t28 = *((char **)t27);
    t29 = (t0 + 2248);
    t30 = (t29 + 64U);
    t32 = *((char **)t30);
    t33 = (t0 + 1208U);
    t34 = *((char **)t33);
    memset(t41, 0, 8);
    t33 = (t41 + 4);
    t42 = (t34 + 4);
    t50 = *((unsigned int *)t34);
    t51 = (t50 >> 5);
    *((unsigned int *)t41) = t51;
    t52 = *((unsigned int *)t42);
    t53 = (t52 >> 5);
    *((unsigned int *)t33) = t53;
    t54 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t54 & 7U);
    t55 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t55 & 7U);
    xsi_vlog_generic_get_array_select_value(t31, 8, t25, t28, t32, 2, 1, t41, 3, 2);
    t43 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t43, t31, 0, 0, 8, 0LL);
    goto LAB87;

LAB91:    t14 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB92;

LAB93:    xsi_set_current_line(66, ng0);

LAB96:    xsi_set_current_line(67, ng0);
    t22 = (t0 + 2408);
    t23 = (t22 + 56U);
    t25 = *((char **)t23);
    t26 = (t0 + 2408);
    t27 = (t26 + 72U);
    t28 = *((char **)t27);
    t29 = (t0 + 2408);
    t30 = (t29 + 64U);
    t32 = *((char **)t30);
    t33 = (t0 + 1208U);
    t34 = *((char **)t33);
    memset(t41, 0, 8);
    t33 = (t41 + 4);
    t42 = (t34 + 4);
    t50 = *((unsigned int *)t34);
    t51 = (t50 >> 5);
    *((unsigned int *)t41) = t51;
    t52 = *((unsigned int *)t42);
    t53 = (t52 >> 5);
    *((unsigned int *)t33) = t53;
    t54 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t54 & 7U);
    t55 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t55 & 7U);
    xsi_vlog_generic_get_array_select_value(t31, 8, t25, t28, t32, 2, 1, t41, 3, 2);
    t43 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t43, t31, 0, 0, 8, 0LL);
    goto LAB95;

}


extern void work_m_00000000002226146735_1334121354_init()
{
	static char *pe[] = {(void *)Initial_36_0,(void *)Always_40_1};
	xsi_register_didat("work_m_00000000002226146735_1334121354", "isim/cache_test_isim_beh.exe.sim/work/m_00000000002226146735_1334121354.didat");
	xsi_register_executes(pe);
}
