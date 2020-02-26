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
static const char *ng0 = "/home/csusb.edu/006198682/Documents/CSE 401/CSE401_Project/alu_test.v";
static unsigned int ng1[] = {16711935U, 0U};
static unsigned int ng2[] = {286331153U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {6U, 0U};
static int ng5[] = {0, 0};
static int ng6[] = {1, 0};
static unsigned int ng7[] = {0U, 0U};
static unsigned int ng8[] = {252645135U, 0U};
static unsigned int ng9[] = {4294967295U, 0U};
static unsigned int ng10[] = {1U, 0U};
static unsigned int ng11[] = {4042322160U, 0U};
static unsigned int ng12[] = {7U, 0U};
static unsigned int ng13[] = {268435455U, 0U};
static unsigned int ng14[] = {7U, 7U};



static void Initial_16_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 3520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(17, ng0);

LAB4:    xsi_set_current_line(20, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2288);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(21, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2448);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(22, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(24, ng0);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(24, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 2608);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    xsi_set_current_line(25, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2288);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(26, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2448);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(28, ng0);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(28, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 2608);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    xsi_set_current_line(29, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2288);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(30, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2448);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(32, ng0);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(32, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 2608);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2288);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 2448);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(36, ng0);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(36, ng0);
    t3 = ((char*)((ng12)));
    t4 = (t0 + 2608);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2288);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 2448);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(40, ng0);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(40, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 2448);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 2288);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(43, ng0);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(43, ng0);
    t3 = ((char*)((ng14)));
    t4 = (t0 + 2608);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(44, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

}


extern void work_m_02439426907217713294_2602956921_init()
{
	static char *pe[] = {(void *)Initial_16_0};
	xsi_register_didat("work_m_02439426907217713294_2602956921", "isim/alu_test_isim_beh.exe.sim/work/m_02439426907217713294_2602956921.didat");
	xsi_register_executes(pe);
}
