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
static const char *ng0 = "/home/csusb.edu/006198682/Documents/CSE 401/CSE401_Project/I_FETCH.v";
static int ng1[] = {1, 0};

static void NetReassign_39_1(char *);


static void Initial_37_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(38, ng0);

LAB2:    xsi_set_current_line(39, ng0);
    t1 = (t0 + 2568);
    xsi_set_assignedflag(t1);
    t2 = (t0 + 6032);
    *((int *)t2) = 1;
    NetReassign_39_1(t0);

LAB1:    return;
}

static void NetReassign_39_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 3728U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t3 = 0;
    t2 = ((char*)((ng1)));
    t4 = (t0 + 6032);
    if (*((int *)t4) > 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    t5 = (t0 + 2568);
    xsi_vlogvar_assignassignvalue(t5, t2, 0, 0, 0, 32, ((int*)(t4)));
    t3 = 1;
    goto LAB5;

}


extern void work_m_01421378915526540703_1517544168_init()
{
	static char *pe[] = {(void *)Initial_37_0,(void *)NetReassign_39_1};
	xsi_register_didat("work_m_01421378915526540703_1517544168", "isim/pipeline_isim_beh.exe.sim/work/m_01421378915526540703_1517544168.didat");
	xsi_register_executes(pe);
}
