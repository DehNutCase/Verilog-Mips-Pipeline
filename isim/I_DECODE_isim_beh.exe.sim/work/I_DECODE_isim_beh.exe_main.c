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
    work_m_10263982529121264119_3037777339_init();
    work_m_10399397536682588136_3913188552_init();
    work_m_16366440898551563500_2933718039_init();
    work_m_05730648634217238658_3375560057_init();
    work_m_13622677063863929244_1421133406_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_13622677063863929244_1421133406");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}
