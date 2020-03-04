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
    work_m_06380215879916293679_3631796253_init();
    work_m_04652218058272104226_1733832700_init();
    work_m_03561907951715685569_2138213552_init();
    work_m_06093123131232310136_0345418465_init();
    work_m_09090487261037243431_2528794150_init();
    work_m_01421378915526540703_1517544168_init();
    work_m_10263982529121264119_3037777339_init();
    work_m_10399397536682588136_3913188552_init();
    work_m_16366440898551563500_2933718039_init();
    work_m_05730648634217238658_3375560057_init();
    work_m_13622677063863929244_1421133406_init();
    work_m_16892255805414101641_0886308060_init();
    work_m_17780266582642989409_1263554105_init();
    work_m_08205644848732647003_4024466370_init();
    work_m_05544093390441599642_0266261463_init();
    work_m_14118827971108888837_1817558700_init();
    work_m_16544487924587851054_3258266500_init();
    work_m_15473103439637148388_1586474674_init();
    work_m_02426412337583038189_2098114829_init();
    work_m_09987272876555078640_0018034866_init();
    work_m_06318715603771319149_3409648901_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_06318715603771319149_3409648901");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}
