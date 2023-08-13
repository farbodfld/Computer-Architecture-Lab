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
static const char *ng0 = "/home/parsa/ISEProjects/ARMCPU/condlogic.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {2U, 0U};
static unsigned int ng3[] = {3U, 0U};
static unsigned int ng4[] = {4U, 0U};
static unsigned int ng5[] = {0U, 0U};
static unsigned int ng6[] = {5U, 0U};
static unsigned int ng7[] = {6U, 0U};



static void Always_33_0(char *t0)
{
    char t9[8];
    char t18[8];
    char t33[8];
    char t36[8];
    char t61[8];
    char t94[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t34;
    char *t35;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
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
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    int t85;
    int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    char *t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    char *t101;

LAB0:    t1 = (t0 + 2520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 2840);
    *((int *)t2) = 1;
    t3 = (t0 + 2552);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(34, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);

LAB5:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 3);
    if (t6 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB16;

LAB17:
LAB19:
LAB18:    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB20:    goto LAB2;

LAB6:    xsi_set_current_line(36, ng0);
    t7 = (t0 + 1208U);
    t8 = *((char **)t7);
    memset(t9, 0, 8);
    t7 = (t9 + 4);
    t10 = (t8 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 2);
    t13 = (t12 & 1);
    *((unsigned int *)t9) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 >> 2);
    t16 = (t15 & 1);
    *((unsigned int *)t7) = t16;
    t17 = (t0 + 1608);
    xsi_vlogvar_assign_value(t17, t9, 0, 0, 1);
    goto LAB20;

LAB8:    xsi_set_current_line(39, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    memset(t9, 0, 8);
    t3 = (t9 + 4);
    t7 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 1);
    t13 = (t12 & 1);
    *((unsigned int *)t9) = t13;
    t14 = *((unsigned int *)t7);
    t15 = (t14 >> 1);
    t16 = (t15 & 1);
    *((unsigned int *)t3) = t16;
    t8 = (t0 + 1608);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 1);
    goto LAB20;

LAB10:    xsi_set_current_line(42, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    memset(t18, 0, 8);
    t3 = (t18 + 4);
    t7 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 1);
    t13 = (t12 & 1);
    *((unsigned int *)t18) = t13;
    t14 = *((unsigned int *)t7);
    t15 = (t14 >> 1);
    t16 = (t15 & 1);
    *((unsigned int *)t3) = t16;
    memset(t9, 0, 8);
    t8 = (t18 + 4);
    t19 = *((unsigned int *)t8);
    t20 = (~(t19));
    t21 = *((unsigned int *)t18);
    t22 = (t21 & t20);
    t23 = (t22 & 1U);
    if (t23 != 0)
        goto LAB24;

LAB22:    if (*((unsigned int *)t8) == 0)
        goto LAB21;

LAB23:    t10 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t10) = 1;

LAB24:    t17 = (t9 + 4);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    t26 = (~(t25));
    *((unsigned int *)t9) = t26;
    *((unsigned int *)t17) = 0;
    if (*((unsigned int *)t24) != 0)
        goto LAB26;

LAB25:    t31 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t31 & 1U);
    t32 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t32 & 1U);
    t34 = (t0 + 1208U);
    t35 = *((char **)t34);
    memset(t36, 0, 8);
    t34 = (t36 + 4);
    t37 = (t35 + 4);
    t38 = *((unsigned int *)t35);
    t39 = (t38 >> 2);
    t40 = (t39 & 1);
    *((unsigned int *)t36) = t40;
    t41 = *((unsigned int *)t37);
    t42 = (t41 >> 2);
    t43 = (t42 & 1);
    *((unsigned int *)t34) = t43;
    memset(t33, 0, 8);
    t44 = (t36 + 4);
    t45 = *((unsigned int *)t44);
    t46 = (~(t45));
    t47 = *((unsigned int *)t36);
    t48 = (t47 & t46);
    t49 = (t48 & 1U);
    if (t49 != 0)
        goto LAB30;

LAB28:    if (*((unsigned int *)t44) == 0)
        goto LAB27;

LAB29:    t50 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t50) = 1;

LAB30:    t51 = (t33 + 4);
    t52 = (t36 + 4);
    t53 = *((unsigned int *)t36);
    t54 = (~(t53));
    *((unsigned int *)t33) = t54;
    *((unsigned int *)t51) = 0;
    if (*((unsigned int *)t52) != 0)
        goto LAB32;

LAB31:    t59 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t59 & 1U);
    t60 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t60 & 1U);
    t62 = *((unsigned int *)t9);
    t63 = *((unsigned int *)t33);
    t64 = (t62 & t63);
    *((unsigned int *)t61) = t64;
    t65 = (t9 + 4);
    t66 = (t33 + 4);
    t67 = (t61 + 4);
    t68 = *((unsigned int *)t65);
    t69 = *((unsigned int *)t66);
    t70 = (t68 | t69);
    *((unsigned int *)t67) = t70;
    t71 = *((unsigned int *)t67);
    t72 = (t71 != 0);
    if (t72 == 1)
        goto LAB33;

LAB34:
LAB35:    t93 = (t0 + 1608);
    xsi_vlogvar_assign_value(t93, t61, 0, 0, 1);
    goto LAB20;

LAB12:    xsi_set_current_line(45, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    memset(t33, 0, 8);
    t3 = (t33 + 4);
    t7 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 1);
    t13 = (t12 & 1);
    *((unsigned int *)t33) = t13;
    t14 = *((unsigned int *)t7);
    t15 = (t14 >> 1);
    t16 = (t15 & 1);
    *((unsigned int *)t3) = t16;
    t8 = (t0 + 1208U);
    t10 = *((char **)t8);
    memset(t61, 0, 8);
    t8 = (t61 + 4);
    t17 = (t10 + 4);
    t19 = *((unsigned int *)t10);
    t20 = (t19 >> 2);
    t21 = (t20 & 1);
    *((unsigned int *)t61) = t21;
    t22 = *((unsigned int *)t17);
    t23 = (t22 >> 2);
    t25 = (t23 & 1);
    *((unsigned int *)t8) = t25;
    memset(t36, 0, 8);
    t24 = (t61 + 4);
    t26 = *((unsigned int *)t24);
    t27 = (~(t26));
    t28 = *((unsigned int *)t61);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB39;

LAB37:    if (*((unsigned int *)t24) == 0)
        goto LAB36;

LAB38:    t34 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t34) = 1;

LAB39:    t35 = (t36 + 4);
    t37 = (t61 + 4);
    t31 = *((unsigned int *)t61);
    t32 = (~(t31));
    *((unsigned int *)t36) = t32;
    *((unsigned int *)t35) = 0;
    if (*((unsigned int *)t37) != 0)
        goto LAB41;

LAB40:    t42 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t42 & 1U);
    t43 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t43 & 1U);
    memset(t94, 0, 8);
    t44 = (t33 + 4);
    t50 = (t36 + 4);
    t45 = *((unsigned int *)t33);
    t46 = *((unsigned int *)t36);
    t47 = (t45 ^ t46);
    t48 = *((unsigned int *)t44);
    t49 = *((unsigned int *)t50);
    t53 = (t48 ^ t49);
    t54 = (t47 | t53);
    t55 = *((unsigned int *)t44);
    t56 = *((unsigned int *)t50);
    t57 = (t55 | t56);
    t58 = (~(t57));
    t59 = (t54 & t58);
    if (t59 != 0)
        goto LAB45;

LAB42:    if (t57 != 0)
        goto LAB44;

LAB43:    *((unsigned int *)t94) = 1;

LAB45:    memset(t18, 0, 8);
    t52 = (t94 + 4);
    t60 = *((unsigned int *)t52);
    t62 = (~(t60));
    t63 = *((unsigned int *)t94);
    t64 = (t63 & t62);
    t68 = (t64 & 1U);
    if (t68 != 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t52) != 0)
        goto LAB48;

LAB49:    t66 = (t18 + 4);
    t69 = *((unsigned int *)t18);
    t70 = *((unsigned int *)t66);
    t71 = (t69 || t70);
    if (t71 > 0)
        goto LAB50;

LAB51:    t72 = *((unsigned int *)t18);
    t73 = (~(t72));
    t74 = *((unsigned int *)t66);
    t77 = (t73 || t74);
    if (t77 > 0)
        goto LAB52;

LAB53:    if (*((unsigned int *)t66) > 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t18) > 0)
        goto LAB56;

LAB57:    memcpy(t9, t75, 8);

LAB58:    t76 = (t0 + 1608);
    xsi_vlogvar_assign_value(t76, t9, 0, 0, 1);
    goto LAB20;

LAB14:    xsi_set_current_line(48, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    memset(t9, 0, 8);
    t3 = (t9 + 4);
    t7 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 3);
    t13 = (t12 & 1);
    *((unsigned int *)t9) = t13;
    t14 = *((unsigned int *)t7);
    t15 = (t14 >> 3);
    t16 = (t15 & 1);
    *((unsigned int *)t3) = t16;
    t8 = (t0 + 1208U);
    t10 = *((char **)t8);
    memset(t18, 0, 8);
    t8 = (t18 + 4);
    t17 = (t10 + 4);
    t19 = *((unsigned int *)t10);
    t20 = (t19 >> 0);
    t21 = (t20 & 1);
    *((unsigned int *)t18) = t21;
    t22 = *((unsigned int *)t17);
    t23 = (t22 >> 0);
    t25 = (t23 & 1);
    *((unsigned int *)t8) = t25;
    memset(t33, 0, 8);
    t24 = (t9 + 4);
    t34 = (t18 + 4);
    t26 = *((unsigned int *)t9);
    t27 = *((unsigned int *)t18);
    t28 = (t26 ^ t27);
    t29 = *((unsigned int *)t24);
    t30 = *((unsigned int *)t34);
    t31 = (t29 ^ t30);
    t32 = (t28 | t31);
    t38 = *((unsigned int *)t24);
    t39 = *((unsigned int *)t34);
    t40 = (t38 | t39);
    t41 = (~(t40));
    t42 = (t32 & t41);
    if (t42 != 0)
        goto LAB62;

LAB59:    if (t40 != 0)
        goto LAB61;

LAB60:    *((unsigned int *)t33) = 1;

LAB62:    t37 = (t0 + 1208U);
    t44 = *((char **)t37);
    memset(t61, 0, 8);
    t37 = (t61 + 4);
    t50 = (t44 + 4);
    t43 = *((unsigned int *)t44);
    t45 = (t43 >> 2);
    t46 = (t45 & 1);
    *((unsigned int *)t61) = t46;
    t47 = *((unsigned int *)t50);
    t48 = (t47 >> 2);
    t49 = (t48 & 1);
    *((unsigned int *)t37) = t49;
    memset(t36, 0, 8);
    t51 = (t61 + 4);
    t53 = *((unsigned int *)t51);
    t54 = (~(t53));
    t55 = *((unsigned int *)t61);
    t56 = (t55 & t54);
    t57 = (t56 & 1U);
    if (t57 != 0)
        goto LAB66;

LAB64:    if (*((unsigned int *)t51) == 0)
        goto LAB63;

LAB65:    t52 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t52) = 1;

LAB66:    t65 = (t36 + 4);
    t66 = (t61 + 4);
    t58 = *((unsigned int *)t61);
    t59 = (~(t58));
    *((unsigned int *)t36) = t59;
    *((unsigned int *)t65) = 0;
    if (*((unsigned int *)t66) != 0)
        goto LAB68;

LAB67:    t68 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t68 & 1U);
    t69 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t69 & 1U);
    t70 = *((unsigned int *)t33);
    t71 = *((unsigned int *)t36);
    t72 = (t70 & t71);
    *((unsigned int *)t94) = t72;
    t67 = (t33 + 4);
    t75 = (t36 + 4);
    t76 = (t94 + 4);
    t73 = *((unsigned int *)t67);
    t74 = *((unsigned int *)t75);
    t77 = (t73 | t74);
    *((unsigned int *)t76) = t77;
    t78 = *((unsigned int *)t76);
    t79 = (t78 != 0);
    if (t79 == 1)
        goto LAB69;

LAB70:
LAB71:    t101 = (t0 + 1608);
    xsi_vlogvar_assign_value(t101, t94, 0, 0, 1);
    goto LAB20;

LAB16:    xsi_set_current_line(51, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB20;

LAB21:    *((unsigned int *)t9) = 1;
    goto LAB24;

LAB26:    t27 = *((unsigned int *)t9);
    t28 = *((unsigned int *)t24);
    *((unsigned int *)t9) = (t27 | t28);
    t29 = *((unsigned int *)t17);
    t30 = *((unsigned int *)t24);
    *((unsigned int *)t17) = (t29 | t30);
    goto LAB25;

LAB27:    *((unsigned int *)t33) = 1;
    goto LAB30;

LAB32:    t55 = *((unsigned int *)t33);
    t56 = *((unsigned int *)t52);
    *((unsigned int *)t33) = (t55 | t56);
    t57 = *((unsigned int *)t51);
    t58 = *((unsigned int *)t52);
    *((unsigned int *)t51) = (t57 | t58);
    goto LAB31;

LAB33:    t73 = *((unsigned int *)t61);
    t74 = *((unsigned int *)t67);
    *((unsigned int *)t61) = (t73 | t74);
    t75 = (t9 + 4);
    t76 = (t33 + 4);
    t77 = *((unsigned int *)t9);
    t78 = (~(t77));
    t79 = *((unsigned int *)t75);
    t80 = (~(t79));
    t81 = *((unsigned int *)t33);
    t82 = (~(t81));
    t83 = *((unsigned int *)t76);
    t84 = (~(t83));
    t85 = (t78 & t80);
    t86 = (t82 & t84);
    t87 = (~(t85));
    t88 = (~(t86));
    t89 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t89 & t87);
    t90 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t90 & t88);
    t91 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t91 & t87);
    t92 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t92 & t88);
    goto LAB35;

LAB36:    *((unsigned int *)t36) = 1;
    goto LAB39;

LAB41:    t38 = *((unsigned int *)t36);
    t39 = *((unsigned int *)t37);
    *((unsigned int *)t36) = (t38 | t39);
    t40 = *((unsigned int *)t35);
    t41 = *((unsigned int *)t37);
    *((unsigned int *)t35) = (t40 | t41);
    goto LAB40;

LAB44:    t51 = (t94 + 4);
    *((unsigned int *)t94) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB45;

LAB46:    *((unsigned int *)t18) = 1;
    goto LAB49;

LAB48:    t65 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t65) = 1;
    goto LAB49;

LAB50:    t67 = ((char*)((ng1)));
    goto LAB51;

LAB52:    t75 = ((char*)((ng5)));
    goto LAB53;

LAB54:    xsi_vlog_unsigned_bit_combine(t9, 1, t67, 1, t75, 1);
    goto LAB58;

LAB56:    memcpy(t9, t67, 8);
    goto LAB58;

LAB61:    t35 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB62;

LAB63:    *((unsigned int *)t36) = 1;
    goto LAB66;

LAB68:    t60 = *((unsigned int *)t36);
    t62 = *((unsigned int *)t66);
    *((unsigned int *)t36) = (t60 | t62);
    t63 = *((unsigned int *)t65);
    t64 = *((unsigned int *)t66);
    *((unsigned int *)t65) = (t63 | t64);
    goto LAB67;

LAB69:    t80 = *((unsigned int *)t94);
    t81 = *((unsigned int *)t76);
    *((unsigned int *)t94) = (t80 | t81);
    t93 = (t33 + 4);
    t95 = (t36 + 4);
    t82 = *((unsigned int *)t33);
    t83 = (~(t82));
    t84 = *((unsigned int *)t93);
    t87 = (~(t84));
    t88 = *((unsigned int *)t36);
    t89 = (~(t88));
    t90 = *((unsigned int *)t95);
    t91 = (~(t90));
    t85 = (t83 & t87);
    t86 = (t89 & t91);
    t92 = (~(t85));
    t96 = (~(t86));
    t97 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t97 & t92);
    t98 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t98 & t96);
    t99 = *((unsigned int *)t94);
    *((unsigned int *)t94) = (t99 & t92);
    t100 = *((unsigned int *)t94);
    *((unsigned int *)t94) = (t100 & t96);
    goto LAB71;

}


extern void work_m_00556142764880725549_1925617879_init()
{
	static char *pe[] = {(void *)Always_33_0};
	xsi_register_didat("work_m_00556142764880725549_1925617879", "isim/top_tb_isim_beh.exe.sim/work/m_00556142764880725549_1925617879.didat");
	xsi_register_executes(pe);
}
