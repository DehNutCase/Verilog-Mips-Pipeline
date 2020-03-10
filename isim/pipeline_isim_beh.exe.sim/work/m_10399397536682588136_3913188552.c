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



static void Initial_18_0(char *t0)
{
    char t5[8];
    char t14[8];
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
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    int t34;
    int t35;

LAB0:    xsi_set_current_line(19, ng0);

LAB2:    xsi_set_current_line(21, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);
    xsi_set_current_line(22, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);
    xsi_set_current_line(25, ng0);
    xsi_set_current_line(25, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 2568);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 2568);
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
LAB4:    xsi_set_current_line(26, ng0);

LAB6:    xsi_set_current_line(27, ng0);
    t12 = ((char*)((ng1)));
    t13 = (t0 + 2408);
    t16 = (t0 + 2408);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 2408);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 2568);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_generic_convert_array_indices(t14, t15, t18, t21, 2, 1, t24, 32, 1);
    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(25, ng0);
    t1 = (t0 + 2568);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng4)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 2568);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

LAB7:    t32 = *((unsigned int *)t14);
    t33 = *((unsigned int *)t15);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, *((unsigned int *)t15), t35, 0LL);
    goto LAB8;

}

static void Always_45_1(char *t0)
{
    char t7[8];
    char t28[8];
    char t61[8];
    char t62[8];
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
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    int t47;
    int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    char *t63;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    unsigned int t71;
    int t72;
    char *t73;
    unsigned int t74;
    int t75;
    int t76;
    unsigned int t77;
    unsigned int t78;
    int t79;
    int t80;

LAB0:    t1 = (t0 + 3728U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 4048);
    *((int *)t2) = 1;
    t3 = (t0 + 3760);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(46, ng0);

LAB5:    xsi_set_current_line(47, ng0);
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
    xsi_set_current_line(48, ng0);
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
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t7, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t16 = *((unsigned int *)t3);
    t17 = *((unsigned int *)t2);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t5);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t4);
    t24 = *((unsigned int *)t5);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB7;

LAB6:    if (t25 != 0)
        goto LAB8;

LAB9:    t8 = (t0 + 1688U);
    t9 = *((char **)t8);
    t29 = *((unsigned int *)t7);
    t30 = *((unsigned int *)t9);
    t31 = (t29 & t30);
    *((unsigned int *)t28) = t31;
    t8 = (t7 + 4);
    t10 = (t9 + 4);
    t11 = (t28 + 4);
    t32 = *((unsigned int *)t8);
    t33 = *((unsigned int *)t10);
    t34 = (t32 | t33);
    *((unsigned int *)t11) = t34;
    t35 = *((unsigned int *)t11);
    t36 = (t35 != 0);
    if (t36 == 1)
        goto LAB10;

LAB11:
LAB12:    t14 = (t28 + 4);
    t55 = *((unsigned int *)t14);
    t56 = (~(t55));
    t57 = *((unsigned int *)t28);
    t58 = (t57 & t56);
    t59 = (t58 != 0);
    if (t59 > 0)
        goto LAB13;

LAB14:
LAB15:    goto LAB2;

LAB7:    *((unsigned int *)t7) = 1;
    goto LAB9;

LAB8:    t6 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB10:    t37 = *((unsigned int *)t28);
    t38 = *((unsigned int *)t11);
    *((unsigned int *)t28) = (t37 | t38);
    t12 = (t7 + 4);
    t13 = (t9 + 4);
    t39 = *((unsigned int *)t7);
    t40 = (~(t39));
    t41 = *((unsigned int *)t12);
    t42 = (~(t41));
    t43 = *((unsigned int *)t9);
    t44 = (~(t43));
    t45 = *((unsigned int *)t13);
    t46 = (~(t45));
    t47 = (t40 & t42);
    t48 = (t44 & t46);
    t49 = (~(t47));
    t50 = (~(t48));
    t51 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t51 & t49);
    t52 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t52 & t50);
    t53 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t53 & t49);
    t54 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t54 & t50);
    goto LAB12;

LAB13:    xsi_set_current_line(53, ng0);

LAB16:    xsi_set_current_line(54, ng0);
    t15 = (t0 + 1528U);
    t60 = *((char **)t15);
    t15 = (t0 + 2408);
    t63 = (t0 + 2408);
    t64 = (t63 + 72U);
    t65 = *((char **)t64);
    t66 = (t0 + 2408);
    t67 = (t66 + 64U);
    t68 = *((char **)t67);
    t69 = (t0 + 1368U);
    t70 = *((char **)t69);
    xsi_vlog_generic_convert_array_indices(t61, t62, t65, t68, 2, 1, t70, 5, 2);
    t69 = (t61 + 4);
    t71 = *((unsigned int *)t69);
    t72 = (!(t71));
    t73 = (t62 + 4);
    t74 = *((unsigned int *)t73);
    t75 = (!(t74));
    t76 = (t72 && t75);
    if (t76 == 1)
        goto LAB17;

LAB18:    goto LAB15;

LAB17:    t77 = *((unsigned int *)t61);
    t78 = *((unsigned int *)t62);
    t79 = (t77 - t78);
    t80 = (t79 + 1);
    xsi_vlogvar_wait_assign_value(t15, t60, 0, *((unsigned int *)t62), t80, 0LL);
    goto LAB18;

}


extern void work_m_10399397536682588136_3913188552_init()
{
	static char *pe[] = {(void *)Initial_18_0,(void *)Always_45_1};
	xsi_register_didat("work_m_10399397536682588136_3913188552", "isim/pipeline_isim_beh.exe.sim/work/m_10399397536682588136_3913188552.didat");
	xsi_register_executes(pe);
}
