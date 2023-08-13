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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    xilinxcorelib_ver_m_00000000001358910285_4268702513_init();
    xilinxcorelib_ver_m_00000000001358910285_0042462556_init();
    xilinxcorelib_ver_m_00000000001687936702_3055161089_init();
    xilinxcorelib_ver_m_00000000000244915492_0589834921_init();
    xilinxcorelib_ver_m_00000000001603977570_2185801974_init();
    work_m_00000000003869038185_4153025050_init();
    work_m_00000000003599175368_1850807951_init();
    work_m_00000000003468242095_3592712571_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000003468242095_3592712571");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
