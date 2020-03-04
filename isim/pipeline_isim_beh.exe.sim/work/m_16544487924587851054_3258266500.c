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
static const char *ng2 = "data.txt";
static unsigned int ng3[] = {2293930U, 0U};
static unsigned int ng4[] = {275071777U, 0U};
static int ng5[] = {1, 0};
static unsigned int ng6[] = {1048610U, 0U};
static int ng7[] = {2, 0};
static unsigned int ng8[] = {2350003286U, 0U};
static int ng9[] = {3, 0};
static unsigned int ng10[] = {2400334934U, 0U};
static int ng11[] = {4, 0};
static unsigned int ng12[] = {2909094689U, 0U};
static int ng13[] = {5, 0};
static unsigned int ng14[] = {318841669U, 0U};
static int ng15[] = {6, 0};
static unsigned int ng16[] = {2892317473U, 0U};
static int ng17[] = {7, 0};
static unsigned int ng18[] = {302064453U, 0U};
static int ng19[] = {8, 0};
static int ng20[] = {256, 0};
static const char *ng21 = "From Data Memory (data.txt):";
static const char *ng22 = "\tDMEM[%0d] = %0h";
static const char *ng23 = "From Data Memory (initial):";
static int ng24[] = {10, 0};
static const char *ng25 = "\tDMEM[%0d] = %0d";
static const char *ng26 = "\t...";
static int ng27[] = {255, 0};



static void Initial_15_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t24[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    int t14;
    char *t15;
    unsigned int t16;
    int t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    int t21;
    int t22;
    unsigned int t23;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;

LAB0:    xsi_set_current_line(15, ng0);

LAB2:    xsi_set_current_line(17, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);
    xsi_set_current_line(21, ng0);
    t1 = (t0 + 2088);
    xsi_vlogfile_readmemb(ng2, 0, t1, 0, 0, 0, 0);
    xsi_set_current_line(23, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 2088);
    t5 = (t0 + 2088);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 2088);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB3;

LAB4:    xsi_set_current_line(24, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 2088);
    t5 = (t0 + 2088);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 2088);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng5)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB5;

LAB6:    xsi_set_current_line(25, ng0);
    t1 = ((char*)((ng6)));
    t2 = (t0 + 2088);
    t5 = (t0 + 2088);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 2088);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng7)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(26, ng0);
    t1 = ((char*)((ng8)));
    t2 = (t0 + 2088);
    t5 = (t0 + 2088);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 2088);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng9)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB9;

LAB10:    xsi_set_current_line(27, ng0);
    t1 = ((char*)((ng10)));
    t2 = (t0 + 2088);
    t5 = (t0 + 2088);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 2088);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng11)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB11;

LAB12:    xsi_set_current_line(28, ng0);
    t1 = ((char*)((ng12)));
    t2 = (t0 + 2088);
    t5 = (t0 + 2088);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 2088);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng13)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB13;

LAB14:    xsi_set_current_line(29, ng0);
    t1 = ((char*)((ng14)));
    t2 = (t0 + 2088);
    t5 = (t0 + 2088);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 2088);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng15)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(30, ng0);
    t1 = ((char*)((ng16)));
    t2 = (t0 + 2088);
    t5 = (t0 + 2088);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 2088);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng17)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB17;

LAB18:    xsi_set_current_line(31, ng0);
    t1 = ((char*)((ng18)));
    t2 = (t0 + 2088);
    t5 = (t0 + 2088);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 2088);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng19)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB19;

LAB20:    xsi_set_current_line(35, ng0);
    xsi_set_current_line(35, ng0);
    t1 = ((char*)((ng19)));
    t2 = (t0 + 2248);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB21:    t1 = (t0 + 2248);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = ((char*)((ng20)));
    memset(t3, 0, 8);
    xsi_vlog_signed_less(t3, 32, t5, 32, t6, 32);
    t7 = (t3 + 4);
    t13 = *((unsigned int *)t7);
    t16 = (~(t13));
    t19 = *((unsigned int *)t3);
    t20 = (t19 & t16);
    t23 = (t20 != 0);
    if (t23 > 0)
        goto LAB22;

LAB23:    xsi_set_current_line(40, ng0);
    xsi_vlogfile_write(1, 0, 0, ng21, 1, t0);
    xsi_set_current_line(41, ng0);
    xsi_set_current_line(41, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2248);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB26:    t1 = (t0 + 2248);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = ((char*)((ng15)));
    memset(t3, 0, 8);
    xsi_vlog_signed_less(t3, 32, t5, 32, t6, 32);
    t7 = (t3 + 4);
    t13 = *((unsigned int *)t7);
    t16 = (~(t13));
    t19 = *((unsigned int *)t3);
    t20 = (t19 & t16);
    t23 = (t20 != 0);
    if (t23 > 0)
        goto LAB27;

LAB28:    xsi_set_current_line(45, ng0);
    xsi_vlogfile_write(1, 0, 0, ng23, 1, t0);
    xsi_set_current_line(46, ng0);
    xsi_set_current_line(46, ng0);
    t1 = ((char*)((ng15)));
    t2 = (t0 + 2248);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB29:    t1 = (t0 + 2248);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = ((char*)((ng24)));
    memset(t3, 0, 8);
    xsi_vlog_signed_less(t3, 32, t5, 32, t6, 32);
    t7 = (t3 + 4);
    t13 = *((unsigned int *)t7);
    t16 = (~(t13));
    t19 = *((unsigned int *)t3);
    t20 = (t19 & t16);
    t23 = (t20 != 0);
    if (t23 > 0)
        goto LAB30;

LAB31:    xsi_set_current_line(50, ng0);
    xsi_vlogfile_write(1, 0, 0, ng26, 1, t0);
    xsi_set_current_line(51, ng0);
    t1 = ((char*)((ng27)));
    t2 = (t0 + 2088);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 2088);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 2088);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t15 = ((char*)((ng27)));
    xsi_vlog_generic_get_array_select_value(t3, 32, t6, t9, t12, 2, 1, t15, 32, 1);
    xsi_vlogfile_write(1, 0, 0, ng25, 3, t0, (char)119, t1, 32, (char)118, t3, 32);

LAB1:    return;
LAB3:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, *((unsigned int *)t4), t22, 0LL);
    goto LAB4;

LAB5:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, *((unsigned int *)t4), t22, 0LL);
    goto LAB6;

LAB7:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, *((unsigned int *)t4), t22, 0LL);
    goto LAB8;

LAB9:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, *((unsigned int *)t4), t22, 0LL);
    goto LAB10;

LAB11:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, *((unsigned int *)t4), t22, 0LL);
    goto LAB12;

LAB13:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, *((unsigned int *)t4), t22, 0LL);
    goto LAB14;

LAB15:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, *((unsigned int *)t4), t22, 0LL);
    goto LAB16;

LAB17:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, *((unsigned int *)t4), t22, 0LL);
    goto LAB18;

LAB19:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, *((unsigned int *)t4), t22, 0LL);
    goto LAB20;

LAB22:    xsi_set_current_line(37, ng0);
    t8 = (t0 + 2248);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t0 + 2088);
    t12 = (t0 + 2088);
    t15 = (t12 + 72U);
    t25 = *((char **)t15);
    t26 = (t0 + 2088);
    t27 = (t26 + 64U);
    t28 = *((char **)t27);
    t29 = (t0 + 2248);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    xsi_vlog_generic_convert_array_indices(t4, t24, t25, t28, 2, 1, t31, 32, 1);
    t32 = (t4 + 4);
    t33 = *((unsigned int *)t32);
    t14 = (!(t33));
    t34 = (t24 + 4);
    t35 = *((unsigned int *)t34);
    t17 = (!(t35));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB24;

LAB25:    xsi_set_current_line(35, ng0);
    t1 = (t0 + 2248);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = ((char*)((ng5)));
    memset(t3, 0, 8);
    xsi_vlog_signed_add(t3, 32, t5, 32, t6, 32);
    t7 = (t0 + 2248);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 32);
    goto LAB21;

LAB24:    t36 = *((unsigned int *)t4);
    t37 = *((unsigned int *)t24);
    t21 = (t36 - t37);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t11, t10, 0, *((unsigned int *)t24), t22);
    goto LAB25;

LAB27:    xsi_set_current_line(42, ng0);
    t8 = (t0 + 2248);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t0 + 2088);
    t12 = (t11 + 56U);
    t15 = *((char **)t12);
    t25 = (t0 + 2088);
    t26 = (t25 + 72U);
    t27 = *((char **)t26);
    t28 = (t0 + 2088);
    t29 = (t28 + 64U);
    t30 = *((char **)t29);
    t31 = (t0 + 2248);
    t32 = (t31 + 56U);
    t34 = *((char **)t32);
    xsi_vlog_generic_get_array_select_value(t4, 32, t15, t27, t30, 2, 1, t34, 32, 1);
    xsi_vlogfile_write(1, 0, 0, ng22, 3, t0, (char)119, t10, 32, (char)118, t4, 32);
    xsi_set_current_line(41, ng0);
    t1 = (t0 + 2248);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = ((char*)((ng5)));
    memset(t3, 0, 8);
    xsi_vlog_signed_add(t3, 32, t5, 32, t6, 32);
    t7 = (t0 + 2248);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 32);
    goto LAB26;

LAB30:    xsi_set_current_line(47, ng0);
    t8 = (t0 + 2248);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t0 + 2088);
    t12 = (t11 + 56U);
    t15 = *((char **)t12);
    t25 = (t0 + 2088);
    t26 = (t25 + 72U);
    t27 = *((char **)t26);
    t28 = (t0 + 2088);
    t29 = (t28 + 64U);
    t30 = *((char **)t29);
    t31 = (t0 + 2248);
    t32 = (t31 + 56U);
    t34 = *((char **)t32);
    xsi_vlog_generic_get_array_select_value(t4, 32, t15, t27, t30, 2, 1, t34, 32, 1);
    xsi_vlogfile_write(1, 0, 0, ng25, 3, t0, (char)119, t10, 32, (char)118, t4, 32);
    xsi_set_current_line(46, ng0);
    t1 = (t0 + 2248);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = ((char*)((ng5)));
    memset(t3, 0, 8);
    xsi_vlog_signed_add(t3, 32, t5, 32, t6, 32);
    t7 = (t0 + 2248);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 32);
    goto LAB29;

}

static void Always_55_1(char *t0)
{
    char t6[8];
    char t30[8];
    char t31[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
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
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    unsigned int t40;
    int t41;
    char *t42;
    unsigned int t43;
    int t44;
    int t45;
    unsigned int t46;
    unsigned int t47;
    int t48;
    int t49;

LAB0:    t1 = (t0 + 3408U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 3728);
    *((int *)t2) = 1;
    t3 = (t0 + 3440);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(55, ng0);

LAB5:    xsi_set_current_line(58, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng5)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:
LAB12:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB19;

LAB16:    if (t18 != 0)
        goto LAB18;

LAB17:    *((unsigned int *)t6) = 1;

LAB19:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB20;

LAB21:
LAB22:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(59, ng0);

LAB13:    xsi_set_current_line(60, ng0);
    t28 = (t0 + 1208U);
    t29 = *((char **)t28);
    t28 = (t0 + 2088);
    t32 = (t0 + 2088);
    t33 = (t32 + 72U);
    t34 = *((char **)t33);
    t35 = (t0 + 2088);
    t36 = (t35 + 64U);
    t37 = *((char **)t36);
    t38 = (t0 + 1048U);
    t39 = *((char **)t38);
    xsi_vlog_generic_convert_array_indices(t30, t31, t34, t37, 2, 1, t39, 32, 2);
    t38 = (t30 + 4);
    t40 = *((unsigned int *)t38);
    t41 = (!(t40));
    t42 = (t31 + 4);
    t43 = *((unsigned int *)t42);
    t44 = (!(t43));
    t45 = (t41 && t44);
    if (t45 == 1)
        goto LAB14;

LAB15:    goto LAB12;

LAB14:    t46 = *((unsigned int *)t30);
    t47 = *((unsigned int *)t31);
    t48 = (t46 - t47);
    t49 = (t48 + 1);
    xsi_vlogvar_wait_assign_value(t28, t29, 0, *((unsigned int *)t31), t49, 0LL);
    goto LAB15;

LAB18:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB19;

LAB20:    xsi_set_current_line(63, ng0);

LAB23:    xsi_set_current_line(64, ng0);
    t21 = (t0 + 2088);
    t22 = (t21 + 56U);
    t28 = *((char **)t22);
    t29 = (t0 + 2088);
    t32 = (t29 + 72U);
    t33 = *((char **)t32);
    t34 = (t0 + 2088);
    t35 = (t34 + 64U);
    t36 = *((char **)t35);
    t37 = (t0 + 1048U);
    t38 = *((char **)t37);
    xsi_vlog_generic_get_array_select_value(t30, 32, t28, t33, t36, 2, 1, t38, 32, 2);
    t37 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t37, t30, 0, 0, 32, 0LL);
    goto LAB22;

}


extern void work_m_16544487924587851054_3258266500_init()
{
	static char *pe[] = {(void *)Initial_15_0,(void *)Always_55_1};
	xsi_register_didat("work_m_16544487924587851054_3258266500", "isim/pipeline_isim_beh.exe.sim/work/m_16544487924587851054_3258266500.didat");
	xsi_register_executes(pe);
}
