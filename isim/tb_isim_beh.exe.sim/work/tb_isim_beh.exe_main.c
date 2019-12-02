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
    work_m_12021512767085117067_2260019474_init();
    work_m_05267640789141144617_3671711236_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_05267640789141144617_3671711236");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}
