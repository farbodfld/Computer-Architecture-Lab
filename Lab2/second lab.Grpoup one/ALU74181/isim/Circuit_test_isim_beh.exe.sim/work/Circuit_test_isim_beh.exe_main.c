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
    work_m_00000000000242956194_1853023195_init();
    work_m_00000000003485415541_3355830383_init();
    work_m_00000000003035800014_1779738493_init();
    work_m_00000000000141353709_1414266546_init();
    work_m_00000000003573987713_2075046820_init();
    work_m_00000000001938188986_2612103659_init();
    work_m_00000000000749564873_3614001383_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000749564873_3614001383");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
