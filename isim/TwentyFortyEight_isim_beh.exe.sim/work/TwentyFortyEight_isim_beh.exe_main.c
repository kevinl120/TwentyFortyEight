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
    work_m_13162058850210216427_2300215909_init();
    work_m_09462766184867321474_3962613427_init();
    work_m_15558157441485110501_3505899711_init();
    work_m_08269793263192239902_0584773881_init();
    work_m_15116705936046902657_2461167437_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_15116705936046902657_2461167437");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}
