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
static const char *ng0 = "/home/csusb.edu/006198682/Documents/CSE 401/CSE401_Project/Lab 2/reg.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static int ng3[] = {32, 0};
static int ng4[] = {1, 0};
static const char *ng5 = "From Register Memory:";
static int ng6[] = {9, 0};
static const char *ng7 = "\tREG[%0d] = %0d";
static const char *ng8 = "\t...";
static int ng9[] = {31, 0};



static void Initial_18_0(char *t0)
{
    char t6[8];
    char t15[8];
    char t16[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    int t28;
    char *t29;
    unsigned int t30;
    int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    int t35;
    int t36;
    char *t37;
    char *t38;

LAB0:    t1 = (t0 + 3480U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(19, ng0);

LAB4:    xsi_set_current_line(21, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(22, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(25, ng0);
    xsi_set_current_line(25, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB5:    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 3288);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB11;

LAB1:    return;
LAB6:    xsi_set_current_line(26, ng0);

LAB8:    xsi_set_current_line(27, ng0);
    t13 = ((char*)((ng1)));
    t14 = (t0 + 2408);
    t17 = (t0 + 2408);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 2408);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t23 = (t0 + 2568);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    xsi_vlog_generic_convert_array_indices(t15, t16, t19, t22, 2, 1, t25, 32, 1);
    t26 = (t15 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (!(t27));
    t29 = (t16 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (!(t30));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB9;

LAB10:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2568);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB5;

LAB9:    t33 = *((unsigned int *)t15);
    t34 = *((unsigned int *)t16);
    t35 = (t33 - t34);
    t36 = (t35 + 1);
    xsi_vlogvar_wait_assign_value(t14, t13, 0, *((unsigned int *)t16), t36, 0LL);
    goto LAB10;

LAB11:    xsi_set_current_line(32, ng0);
    xsi_vlogfile_write(1, 0, 0, ng5, 1, t0);
    xsi_set_current_line(33, ng0);
    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB12:    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB13;

LAB14:    xsi_set_current_line(38, ng0);
    xsi_vlogfile_write(1, 0, 0, ng8, 1, t0);
    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2408);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 2408);
    t13 = (t7 + 72U);
    t14 = *((char **)t13);
    t17 = (t0 + 2408);
    t18 = (t17 + 64U);
    t19 = *((char **)t18);
    t20 = ((char*)((ng9)));
    xsi_vlog_generic_get_array_select_value(t6, 32, t5, t14, t19, 2, 1, t20, 32, 1);
    xsi_vlogfile_write(1, 0, 0, ng7, 3, t0, (char)119, t2, 32, (char)118, t6, 32);
    goto LAB1;

LAB13:    xsi_set_current_line(34, ng0);

LAB15:    xsi_set_current_line(35, ng0);
    t13 = (t0 + 2568);
    t14 = (t13 + 56U);
    t17 = *((char **)t14);
    t18 = (t0 + 2408);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t0 + 2408);
    t22 = (t21 + 72U);
    t23 = *((char **)t22);
    t24 = (t0 + 2408);
    t25 = (t24 + 64U);
    t26 = *((char **)t25);
    t29 = (t0 + 2568);
    t37 = (t29 + 56U);
    t38 = *((char **)t37);
    xsi_vlog_generic_get_array_select_value(t15, 32, t20, t23, t26, 2, 1, t38, 32, 1);
    xsi_vlogfile_write(1, 0, 0, ng7, 3, t0, (char)119, t17, 32, (char)118, t15, 32);
    xsi_set_current_line(33, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2568);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB12;

}

static void Always_42_1(char *t0)
{
    char t7[8];
    char t21[8];
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
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t22;
    int t23;
    unsigned int t24;
    int t25;
    int t26;
    unsigned int t27;
    unsigned int t28;
    int t29;
    int t30;

LAB0:    t1 = (t0 + 3728U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 4048);
    *((int *)t2) = 1;
    t3 = (t0 + 3760);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(43, ng0);

LAB5:    xsi_set_current_line(44, ng0);
    t4 = (t0 + 2408);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t0 + 2408);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 2408);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = (t0 + 1048U);
    t15 = *((char **)t14);
    xsi_vlog_generic_get_array_select_value(t7, 32, t6, t10, t13, 2, 1, t15, 5, 2);
    t14 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t14, t7, 0, 0, 32, 0LL);
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2408);
    t6 = (t5 + 72U);
    t8 = *((char **)t6);
    t9 = (t0 + 2408);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 1208U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t7, 32, t4, t8, t11, 2, 1, t13, 5, 2);
    t12 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t12, t7, 0, 0, 32, 0LL);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t16 = *((unsigned int *)t2);
    t17 = (~(t16));
    t18 = *((unsigned int *)t3);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(49, ng0);

LAB9:    xsi_set_current_line(50, ng0);
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);
    t4 = (t0 + 2408);
    t6 = (t0 + 2408);
    t8 = (t6 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 2408);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = (t0 + 1368U);
    t14 = *((char **)t13);
    xsi_vlog_generic_convert_array_indices(t7, t21, t9, t12, 2, 1, t14, 5, 2);
    t13 = (t7 + 4);
    t22 = *((unsigned int *)t13);
    t23 = (!(t22));
    t15 = (t21 + 4);
    t24 = *((unsigned int *)t15);
    t25 = (!(t24));
    t26 = (t23 && t25);
    if (t26 == 1)
        goto LAB10;

LAB11:    goto LAB8;

LAB10:    t27 = *((unsigned int *)t7);
    t28 = *((unsigned int *)t21);
    t29 = (t27 - t28);
    t30 = (t29 + 1);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, *((unsigned int *)t21), t30, 0LL);
    goto LAB11;

}


extern void work_m_10399397536682588136_3913188552_init()
{
	static char *pe[] = {(void *)Initial_18_0,(void *)Always_42_1};
	xsi_register_didat("work_m_10399397536682588136_3913188552", "isim/pipeline_isim_beh.exe.sim/work/m_10399397536682588136_3913188552.didat");
	xsi_register_executes(pe);
}
