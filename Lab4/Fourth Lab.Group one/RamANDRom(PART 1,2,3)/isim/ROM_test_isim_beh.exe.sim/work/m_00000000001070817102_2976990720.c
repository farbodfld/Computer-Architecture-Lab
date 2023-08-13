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
static const char *ng0 = "E:/Xilinx project/fourth lap.Group one/RamANDRom/ROM_256_to_8.v";
static unsigned int ng1[] = {1U, 0U};
static int ng2[] = {0, 0};
static int ng3[] = {20, 0};
static int ng4[] = {1, 0};
static int ng5[] = {40, 0};
static int ng6[] = {42, 0};
static int ng7[] = {60, 0};
static int ng8[] = {56, 0};
static int ng9[] = {80, 0};
static int ng10[] = {73, 0};
static int ng11[] = {100, 0};
static int ng12[] = {2, 0};
static int ng13[] = {120, 0};
static int ng14[] = {5, 0};
static int ng15[] = {140, 0};
static int ng16[] = {6, 0};
static int ng17[] = {160, 0};
static int ng18[] = {31, 0};
static int ng19[] = {180, 0};
static int ng20[] = {57, 0};
static int ng21[] = {200, 0};
static int ng22[] = {21, 0};
static int ng23[] = {220, 0};
static int ng24[] = {12, 0};
static int ng25[] = {240, 0};
static int ng26[] = {9, 0};
static int ng27[] = {256, 0};
static int ng28[] = {35, 0};



static void Always_25_0(char *t0)
{
    char t6[8];
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
    int t30;
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
    char *t43;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 3168);
    *((int *)t2) = 1;
    t3 = (t0 + 2880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(25, ng0);

LAB5:    xsi_set_current_line(27, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
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

LAB11:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(27, ng0);

LAB13:    xsi_set_current_line(29, ng0);
    xsi_set_current_line(29, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 1928);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 32);

LAB14:    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(34, ng0);
    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB22:    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB23;

LAB24:    xsi_set_current_line(40, ng0);
    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB30:    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB31;

LAB32:    xsi_set_current_line(46, ng0);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB38:    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng9)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB39;

LAB40:    xsi_set_current_line(52, ng0);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB46:    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng11)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB47;

LAB48:    xsi_set_current_line(58, ng0);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB54:    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng13)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB55;

LAB56:    xsi_set_current_line(64, ng0);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB62:    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng15)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB63;

LAB64:    xsi_set_current_line(70, ng0);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB70:    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng17)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB71;

LAB72:    xsi_set_current_line(76, ng0);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB78:    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng19)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB79;

LAB80:    xsi_set_current_line(82, ng0);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB86:    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng21)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB87;

LAB88:    xsi_set_current_line(88, ng0);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng21)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB94:    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng23)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB95;

LAB96:    xsi_set_current_line(94, ng0);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng23)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB102:    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng25)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB103;

LAB104:    xsi_set_current_line(100, ng0);
    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng25)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB110:    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng27)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB111;

LAB112:    goto LAB12;

LAB15:    xsi_set_current_line(29, ng0);

LAB17:    xsi_set_current_line(30, ng0);
    t8 = (t0 + 1368U);
    t21 = *((char **)t8);

LAB18:    t8 = (t0 + 1928);
    t22 = (t8 + 56U);
    t28 = *((char **)t22);
    t30 = xsi_vlog_unsigned_case_compare(t21, 8, t28, 32);
    if (t30 == 1)
        goto LAB19;

LAB20:
LAB21:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 1928);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB14;

LAB19:    xsi_set_current_line(31, ng0);
    t29 = ((char*)((ng3)));
    t31 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t31, t29, 0, 0, 8, 0LL);
    goto LAB21;

LAB23:    xsi_set_current_line(34, ng0);

LAB25:    xsi_set_current_line(35, ng0);
    t8 = (t0 + 1368U);
    t22 = *((char **)t8);

LAB26:    t8 = (t0 + 1928);
    t28 = (t8 + 56U);
    t29 = *((char **)t28);
    t30 = xsi_vlog_unsigned_case_compare(t22, 8, t29, 32);
    if (t30 == 1)
        goto LAB27;

LAB28:
LAB29:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 1928);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB22;

LAB27:    xsi_set_current_line(36, ng0);
    t31 = ((char*)((ng6)));
    t32 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t32, t31, 0, 0, 8, 0LL);
    goto LAB29;

LAB31:    xsi_set_current_line(40, ng0);

LAB33:    xsi_set_current_line(41, ng0);
    t8 = (t0 + 1368U);
    t28 = *((char **)t8);

LAB34:    t8 = (t0 + 1928);
    t29 = (t8 + 56U);
    t31 = *((char **)t29);
    t30 = xsi_vlog_unsigned_case_compare(t28, 8, t31, 32);
    if (t30 == 1)
        goto LAB35;

LAB36:
LAB37:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 1928);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB30;

LAB35:    xsi_set_current_line(42, ng0);
    t32 = ((char*)((ng8)));
    t33 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t33, t32, 0, 0, 8, 0LL);
    goto LAB37;

LAB39:    xsi_set_current_line(46, ng0);

LAB41:    xsi_set_current_line(47, ng0);
    t8 = (t0 + 1368U);
    t29 = *((char **)t8);

LAB42:    t8 = (t0 + 1928);
    t31 = (t8 + 56U);
    t32 = *((char **)t31);
    t30 = xsi_vlog_unsigned_case_compare(t29, 8, t32, 32);
    if (t30 == 1)
        goto LAB43;

LAB44:
LAB45:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 1928);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB38;

LAB43:    xsi_set_current_line(48, ng0);
    t33 = ((char*)((ng10)));
    t34 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t34, t33, 0, 0, 8, 0LL);
    goto LAB45;

LAB47:    xsi_set_current_line(52, ng0);

LAB49:    xsi_set_current_line(53, ng0);
    t8 = (t0 + 1368U);
    t31 = *((char **)t8);

LAB50:    t8 = (t0 + 1928);
    t32 = (t8 + 56U);
    t33 = *((char **)t32);
    t30 = xsi_vlog_unsigned_case_compare(t31, 8, t33, 32);
    if (t30 == 1)
        goto LAB51;

LAB52:
LAB53:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 1928);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB46;

LAB51:    xsi_set_current_line(54, ng0);
    t34 = ((char*)((ng12)));
    t35 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t35, t34, 0, 0, 8, 0LL);
    goto LAB53;

LAB55:    xsi_set_current_line(58, ng0);

LAB57:    xsi_set_current_line(59, ng0);
    t8 = (t0 + 1368U);
    t32 = *((char **)t8);

LAB58:    t8 = (t0 + 1928);
    t33 = (t8 + 56U);
    t34 = *((char **)t33);
    t30 = xsi_vlog_unsigned_case_compare(t32, 8, t34, 32);
    if (t30 == 1)
        goto LAB59;

LAB60:
LAB61:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 1928);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB54;

LAB59:    xsi_set_current_line(60, ng0);
    t35 = ((char*)((ng14)));
    t36 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t36, t35, 0, 0, 8, 0LL);
    goto LAB61;

LAB63:    xsi_set_current_line(64, ng0);

LAB65:    xsi_set_current_line(65, ng0);
    t8 = (t0 + 1368U);
    t33 = *((char **)t8);

LAB66:    t8 = (t0 + 1928);
    t34 = (t8 + 56U);
    t35 = *((char **)t34);
    t30 = xsi_vlog_unsigned_case_compare(t33, 8, t35, 32);
    if (t30 == 1)
        goto LAB67;

LAB68:
LAB69:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 1928);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB62;

LAB67:    xsi_set_current_line(66, ng0);
    t36 = ((char*)((ng16)));
    t37 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t37, t36, 0, 0, 8, 0LL);
    goto LAB69;

LAB71:    xsi_set_current_line(70, ng0);

LAB73:    xsi_set_current_line(71, ng0);
    t8 = (t0 + 1368U);
    t34 = *((char **)t8);

LAB74:    t8 = (t0 + 1928);
    t35 = (t8 + 56U);
    t36 = *((char **)t35);
    t30 = xsi_vlog_unsigned_case_compare(t34, 8, t36, 32);
    if (t30 == 1)
        goto LAB75;

LAB76:
LAB77:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 1928);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB70;

LAB75:    xsi_set_current_line(72, ng0);
    t37 = ((char*)((ng18)));
    t38 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t38, t37, 0, 0, 8, 0LL);
    goto LAB77;

LAB79:    xsi_set_current_line(76, ng0);

LAB81:    xsi_set_current_line(77, ng0);
    t8 = (t0 + 1368U);
    t35 = *((char **)t8);

LAB82:    t8 = (t0 + 1928);
    t36 = (t8 + 56U);
    t37 = *((char **)t36);
    t30 = xsi_vlog_unsigned_case_compare(t35, 8, t37, 32);
    if (t30 == 1)
        goto LAB83;

LAB84:
LAB85:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 1928);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB78;

LAB83:    xsi_set_current_line(78, ng0);
    t38 = ((char*)((ng20)));
    t39 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t39, t38, 0, 0, 8, 0LL);
    goto LAB85;

LAB87:    xsi_set_current_line(82, ng0);

LAB89:    xsi_set_current_line(83, ng0);
    t8 = (t0 + 1368U);
    t36 = *((char **)t8);

LAB90:    t8 = (t0 + 1928);
    t37 = (t8 + 56U);
    t38 = *((char **)t37);
    t30 = xsi_vlog_unsigned_case_compare(t36, 8, t38, 32);
    if (t30 == 1)
        goto LAB91;

LAB92:
LAB93:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 1928);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB86;

LAB91:    xsi_set_current_line(84, ng0);
    t39 = ((char*)((ng22)));
    t40 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t40, t39, 0, 0, 8, 0LL);
    goto LAB93;

LAB95:    xsi_set_current_line(88, ng0);

LAB97:    xsi_set_current_line(89, ng0);
    t8 = (t0 + 1368U);
    t37 = *((char **)t8);

LAB98:    t8 = (t0 + 1928);
    t38 = (t8 + 56U);
    t39 = *((char **)t38);
    t30 = xsi_vlog_unsigned_case_compare(t37, 8, t39, 32);
    if (t30 == 1)
        goto LAB99;

LAB100:
LAB101:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 1928);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB94;

LAB99:    xsi_set_current_line(90, ng0);
    t40 = ((char*)((ng24)));
    t41 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t41, t40, 0, 0, 8, 0LL);
    goto LAB101;

LAB103:    xsi_set_current_line(94, ng0);

LAB105:    xsi_set_current_line(95, ng0);
    t8 = (t0 + 1368U);
    t38 = *((char **)t8);

LAB106:    t8 = (t0 + 1928);
    t39 = (t8 + 56U);
    t40 = *((char **)t39);
    t30 = xsi_vlog_unsigned_case_compare(t38, 8, t40, 32);
    if (t30 == 1)
        goto LAB107;

LAB108:
LAB109:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 1928);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB102;

LAB107:    xsi_set_current_line(96, ng0);
    t41 = ((char*)((ng26)));
    t42 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t42, t41, 0, 0, 8, 0LL);
    goto LAB109;

LAB111:    xsi_set_current_line(100, ng0);

LAB113:    xsi_set_current_line(101, ng0);
    t8 = (t0 + 1368U);
    t39 = *((char **)t8);

LAB114:    t8 = (t0 + 1928);
    t40 = (t8 + 56U);
    t41 = *((char **)t40);
    t30 = xsi_vlog_unsigned_case_compare(t39, 8, t41, 32);
    if (t30 == 1)
        goto LAB115;

LAB116:
LAB117:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 1928);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB110;

LAB115:    xsi_set_current_line(102, ng0);
    t42 = ((char*)((ng28)));
    t43 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t43, t42, 0, 0, 8, 0LL);
    goto LAB117;

}


extern void work_m_00000000001070817102_2976990720_init()
{
	static char *pe[] = {(void *)Always_25_0};
	xsi_register_didat("work_m_00000000001070817102_2976990720", "isim/ROM_test_isim_beh.exe.sim/work/m_00000000001070817102_2976990720.didat");
	xsi_register_executes(pe);
}
