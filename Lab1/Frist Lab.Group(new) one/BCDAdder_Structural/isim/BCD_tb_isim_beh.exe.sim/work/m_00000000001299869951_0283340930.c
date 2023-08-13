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
static const char *ng0 = "E:/Xilinx project/experiment 02/BCDAdder_Structural/BCD_tb.v";
static int ng1[] = {1, 0};
static int ng2[] = {100, 0};
static int ng3[] = {10, 0};
static int ng4[] = {0, 0};



static void Initial_48_0(char *t0)
{
    char t6[8];
    char t19[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t20;

LAB0:    t1 = (t0 + 3600U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);

LAB4:    xsi_set_current_line(50, ng0);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2680);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB5:    t2 = (t0 + 2680);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(57, ng0);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2680);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB12:    t2 = (t0 + 2680);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB13;

LAB14:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 3408);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB19;

LAB1:    return;
LAB6:    xsi_set_current_line(50, ng0);

LAB8:    t13 = (t0 + 280);
    xsi_vlog_namedbase_setdisablestate(t13, &&LAB9);
    t14 = (t0 + 3408);
    xsi_vlog_namedbase_pushprocess(t13, t14);

LAB10:    xsi_set_current_line(51, ng0);
    t15 = (t0 + 2680);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng3)));
    memset(t19, 0, 8);
    xsi_vlog_signed_mod(t19, 32, t17, 32, t18, 32);
    t20 = (t0 + 2200);
    xsi_vlogvar_assign_value(t20, t19, 0, 0, 4);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2680);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_divide(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2360);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 3408);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB9:    t3 = (t0 + 3408);
    xsi_vlog_dispose_process_subprogram_invocation(t3);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2680);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2680);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB5;

LAB11:    t2 = (t0 + 280);
    xsi_vlog_namedbase_popprocess(t2);
    goto LAB9;

LAB13:    xsi_set_current_line(57, ng0);

LAB15:    t13 = (t0 + 576);
    xsi_vlog_namedbase_setdisablestate(t13, &&LAB16);
    t14 = (t0 + 3408);
    xsi_vlog_namedbase_pushprocess(t13, t14);

LAB17:    xsi_set_current_line(58, ng0);
    t15 = (t0 + 2680);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng3)));
    memset(t19, 0, 8);
    xsi_vlog_signed_mod(t19, 32, t17, 32, t18, 32);
    t20 = (t0 + 2200);
    xsi_vlogvar_assign_value(t20, t19, 0, 0, 4);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2680);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_divide(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2360);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 3408);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB18;
    goto LAB1;

LAB16:    t3 = (t0 + 3408);
    xsi_vlog_dispose_process_subprogram_invocation(t3);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 2680);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2680);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB12;

LAB18:    t2 = (t0 + 576);
    xsi_vlog_namedbase_popprocess(t2);
    goto LAB16;

LAB19:    goto LAB1;

}


extern void work_m_00000000001299869951_0283340930_init()
{
	static char *pe[] = {(void *)Initial_48_0};
	xsi_register_didat("work_m_00000000001299869951_0283340930", "isim/BCD_tb_isim_beh.exe.sim/work/m_00000000001299869951_0283340930.didat");
	xsi_register_executes(pe);
}
