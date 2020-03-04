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
static const char *ng0 = "/home/csusb.edu/006198682/Documents/CSE 401/CSE401_Project/lab4/data_memory.v";
static int ng1[] = {0, 0};
static int ng2[] = {256, 0};
static int ng3[] = {1, 0};
static const char *ng4 = "From Data Memory (data.txt):";
static int ng5[] = {6, 0};
static const char *ng6 = "\tDMEM[%0d] = %0h";
static const char *ng7 = "From Data Memory (initial):";
static int ng8[] = {10, 0};
static const char *ng9 = "\tDMEM[%0d] = %0d";
static const char *ng10 = "\t...";
static int ng11[] = {255, 0};



static void Initial_15_0(char *t0)
{
    char t5[8];
    char t16[8];
    char t17[8];
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
    char *t15;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    int t29;
    char *t30;
    unsigned int t31;
    int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    int t36;
    int t37;

LAB0:    xsi_set_current_line(15, ng0);

LAB2:    xsi_set_current_line(17, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);
    xsi_set_current_line(35, ng0);
    xsi_set_current_line(35, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2248);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 2248);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng2)));
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

LAB5:    xsi_set_current_line(39, ng0);
    xsi_vlogfile_write(1, 0, 0, ng4, 1, t0);
    xsi_set_current_line(40, ng0);
    xsi_set_current_line(40, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2248);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB8:    t1 = (t0 + 2248);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng5)));
    memset(t5, 0, 8);
    xsi_vlog_signed_less(t5, 32, t3, 32, t4, 32);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(44, ng0);
    xsi_vlogfile_write(1, 0, 0, ng7, 1, t0);
    xsi_set_current_line(45, ng0);
    xsi_set_current_line(45, ng0);
    t1 = ((char*)((ng5)));
    t2 = (t0 + 2248);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB11:    t1 = (t0 + 2248);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng8)));
    memset(t5, 0, 8);
    xsi_vlog_signed_less(t5, 32, t3, 32, t4, 32);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(49, ng0);
    xsi_vlogfile_write(1, 0, 0, ng10, 1, t0);
    xsi_set_current_line(50, ng0);
    t1 = ((char*)((ng11)));
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 2088);
    t12 = (t6 + 72U);
    t13 = *((char **)t12);
    t14 = (t0 + 2088);
    t15 = (t14 + 64U);
    t18 = *((char **)t15);
    t19 = ((char*)((ng11)));
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t13, t18, 2, 1, t19, 32, 1);
    xsi_vlogfile_write(1, 0, 0, ng9, 3, t0, (char)119, t1, 32, (char)118, t5, 32);

LAB1:    return;
LAB4:    xsi_set_current_line(36, ng0);
    t12 = (t0 + 2248);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t0 + 2088);
    t18 = (t0 + 2088);
    t19 = (t18 + 72U);
    t20 = *((char **)t19);
    t21 = (t0 + 2088);
    t22 = (t21 + 64U);
    t23 = *((char **)t22);
    t24 = (t0 + 2248);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    xsi_vlog_generic_convert_array_indices(t16, t17, t20, t23, 2, 1, t26, 32, 1);
    t27 = (t16 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (!(t28));
    t30 = (t17 + 4);
    t31 = *((unsigned int *)t30);
    t32 = (!(t31));
    t33 = (t29 && t32);
    if (t33 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(35, ng0);
    t1 = (t0 + 2248);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng3)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 2248);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

LAB6:    t34 = *((unsigned int *)t16);
    t35 = *((unsigned int *)t17);
    t36 = (t34 - t35);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t15, t14, 0, *((unsigned int *)t17), t37);
    goto LAB7;

LAB9:    xsi_set_current_line(41, ng0);
    t12 = (t0 + 2248);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t0 + 2088);
    t18 = (t15 + 56U);
    t19 = *((char **)t18);
    t20 = (t0 + 2088);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t23 = (t0 + 2088);
    t24 = (t23 + 64U);
    t25 = *((char **)t24);
    t26 = (t0 + 2248);
    t27 = (t26 + 56U);
    t30 = *((char **)t27);
    xsi_vlog_generic_get_array_select_value(t16, 32, t19, t22, t25, 2, 1, t30, 32, 1);
    xsi_vlogfile_write(1, 0, 0, ng6, 3, t0, (char)119, t14, 32, (char)118, t16, 32);
    xsi_set_current_line(40, ng0);
    t1 = (t0 + 2248);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng3)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 2248);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB8;

LAB12:    xsi_set_current_line(46, ng0);
    t12 = (t0 + 2248);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t0 + 2088);
    t18 = (t15 + 56U);
    t19 = *((char **)t18);
    t20 = (t0 + 2088);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t23 = (t0 + 2088);
    t24 = (t23 + 64U);
    t25 = *((char **)t24);
    t26 = (t0 + 2248);
    t27 = (t26 + 56U);
    t30 = *((char **)t27);
    xsi_vlog_generic_get_array_select_value(t16, 32, t19, t22, t25, 2, 1, t30, 32, 1);
    xsi_vlogfile_write(1, 0, 0, ng9, 3, t0, (char)119, t14, 32, (char)118, t16, 32);
    xsi_set_current_line(45, ng0);
    t1 = (t0 + 2248);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng3)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 2248);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB11;

}

static void Always_54_1(char *t0)
{
    char t6[8];
    char t28[8];
    char t29[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    unsigned int t38;
    int t39;
    char *t40;
    unsigned int t41;
    int t42;
    int t43;
    unsigned int t44;
    unsigned int t45;
    int t46;
    int t47;

LAB0:    t1 = (t0 + 3408U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 3728);
    *((int *)t2) = 1;
    t3 = (t0 + 3440);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(54, ng0);

LAB5:    xsi_set_current_line(57, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB9;

LAB6:    if (t16 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t20 = (t6 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB10;

LAB11:
LAB12:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB19;

LAB16:    if (t16 != 0)
        goto LAB18;

LAB17:    *((unsigned int *)t6) = 1;

LAB19:    t20 = (t6 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB20;

LAB21:
LAB22:    goto LAB2;

LAB8:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(59, ng0);

LAB13:    xsi_set_current_line(60, ng0);
    t26 = (t0 + 1208U);
    t27 = *((char **)t26);
    t26 = (t0 + 2088);
    t30 = (t0 + 2088);
    t31 = (t30 + 72U);
    t32 = *((char **)t31);
    t33 = (t0 + 2088);
    t34 = (t33 + 64U);
    t35 = *((char **)t34);
    t36 = (t0 + 1048U);
    t37 = *((char **)t36);
    xsi_vlog_generic_convert_array_indices(t28, t29, t32, t35, 2, 1, t37, 32, 2);
    t36 = (t28 + 4);
    t38 = *((unsigned int *)t36);
    t39 = (!(t38));
    t40 = (t29 + 4);
    t41 = *((unsigned int *)t40);
    t42 = (!(t41));
    t43 = (t39 && t42);
    if (t43 == 1)
        goto LAB14;

LAB15:    goto LAB12;

LAB14:    t44 = *((unsigned int *)t28);
    t45 = *((unsigned int *)t29);
    t46 = (t44 - t45);
    t47 = (t46 + 1);
    xsi_vlogvar_wait_assign_value(t26, t27, 0, *((unsigned int *)t29), t47, 0LL);
    goto LAB15;

LAB18:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB19;

LAB20:    xsi_set_current_line(63, ng0);

LAB23:    xsi_set_current_line(64, ng0);
    t26 = (t0 + 2088);
    t27 = (t26 + 56U);
    t30 = *((char **)t27);
    t31 = (t0 + 2088);
    t32 = (t31 + 72U);
    t33 = *((char **)t32);
    t34 = (t0 + 2088);
    t35 = (t34 + 64U);
    t36 = *((char **)t35);
    t37 = (t0 + 1048U);
    t40 = *((char **)t37);
    xsi_vlog_generic_get_array_select_value(t28, 32, t30, t33, t36, 2, 1, t40, 32, 2);
    t37 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t37, t28, 0, 0, 32, 0LL);
    goto LAB22;

}


extern void work_m_16544487924587851054_3258266500_init()
{
	static char *pe[] = {(void *)Initial_15_0,(void *)Always_54_1};
	xsi_register_didat("work_m_16544487924587851054_3258266500", "isim/data_memory_isim_beh.exe.sim/work/m_16544487924587851054_3258266500.didat");
	xsi_register_executes(pe);
}
