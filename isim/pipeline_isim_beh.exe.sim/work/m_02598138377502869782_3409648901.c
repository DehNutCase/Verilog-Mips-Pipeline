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
static const char *ng0 = "/home/csusb.edu/006198682/Documents/CSE 401/CSE401_Project/Pipeline.v";



static void Initial_16_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 6840U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(16, ng0);

LAB4:    xsi_set_current_line(21, ng0);
    t2 = (t0 + 6648);
    xsi_process_wait(t2, 24000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(22, ng0);
    xsi_vlog_stop(1);
    goto LAB1;

}


extern void work_m_02598138377502869782_3409648901_init()
{
	static char *pe[] = {(void *)Initial_16_0};
	xsi_register_didat("work_m_02598138377502869782_3409648901", "isim/pipeline_isim_beh.exe.sim/work/m_02598138377502869782_3409648901.didat");
	xsi_register_executes(pe);
}
