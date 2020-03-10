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
static const char *ng0 = "/home/csusb.edu/006198682/Documents/CSE 401/CSE401_Project/InstructionMemory.v";
static const char *ng1 = "instruction_final.txt";
static int ng2[] = {0, 0};
static int ng3[] = {24, 0};
static const char *ng4 = "";
static int ng5[] = {1, 0};



static void Initial_28_0(char *t0)
{
    char t5[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;

LAB0:    xsi_set_current_line(29, ng0);

LAB2:    xsi_set_current_line(30, ng0);
    t1 = (t0 + 1768);
    xsi_vlogfile_readmemb(ng1, 0, t1, 0, 0, 0, 0);
    xsi_set_current_line(31, ng0);
    xsi_set_current_line(31, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 1448);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 1448);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng3)));
    memset(t5, 0, 8);
    xsi_vlog_signed_less(t5, 32, t3, 32, t4, 32);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    xsi_set_current_line(32, ng0);
    t12 = (t0 + 1768);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t16 = (t0 + 1768);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 1768);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 1448);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_generic_get_array_select_value(t15, 32, t14, t18, t21, 2, 1, t24, 32, 1);
    xsi_vlogfile_write(1, 0, 0, ng4, 2, t0, (char)118, t15, 32);
    xsi_set_current_line(31, ng0);
    t1 = (t0 + 1448);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng5)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 1448);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

}

static void Always_35_1(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    t1 = (t0 + 2928U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 3248);
    *((int *)t2) = 1;
    t3 = (t0 + 2960);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(36, ng0);

LAB5:    xsi_set_current_line(37, ng0);
    t4 = (t0 + 1768);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t0 + 1768);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 1768);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = (t0 + 1048U);
    t15 = *((char **)t14);
    xsi_vlog_generic_get_array_select_value(t7, 32, t6, t10, t13, 2, 1, t15, 32, 2);
    t14 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t14, t7, 0, 0, 32, 0LL);
    goto LAB2;

}


extern void work_m_06893984085458987666_2138213552_init()
{
	static char *pe[] = {(void *)Initial_28_0,(void *)Always_35_1};
	xsi_register_didat("work_m_06893984085458987666_2138213552", "isim/pipeline_isim_beh.exe.sim/work/m_06893984085458987666_2138213552.didat");
	xsi_register_executes(pe);
}
