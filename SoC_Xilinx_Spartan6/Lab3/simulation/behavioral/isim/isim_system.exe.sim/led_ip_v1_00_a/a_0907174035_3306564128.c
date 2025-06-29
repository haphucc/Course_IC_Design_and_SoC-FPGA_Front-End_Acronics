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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "E:/KhoaHoc_TKVM_ACRONICS/Xilinx_Platform_Studio/Lab3/pcores/led_ip_v1_00_a/hdl/vhdl/user_logic.vhd";



static void led_ip_v1_00_a_a_0907174035_3306564128_p_0(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;

LAB0:    xsi_set_current_line(155, ng0);
    t2 = (t0 + 1152U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 8200);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(156, ng0);
    t4 = (t0 + 1352U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)2);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(159, ng0);
    t2 = (t0 + 1992U);
    t4 = *((char **)t2);
    t17 = (0 - 0);
    t18 = (t17 * -1);
    t19 = (1U * t18);
    t20 = (0 + t19);
    t2 = (t4 + t20);
    t1 = *((unsigned char *)t2);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB13:
LAB12:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1192U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(157, ng0);
    t4 = xsi_get_transient_memory(4U);
    memset(t4, 0, 4U);
    t11 = t4;
    memset(t11, (unsigned char)2, 4U);
    t12 = (t0 + 8440);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t4, 4U);
    xsi_driver_first_trans_fast(t12);
    goto LAB9;

LAB11:    xsi_set_current_line(160, ng0);
    t5 = (t0 + 1512U);
    t8 = *((char **)t5);
    t21 = (31 - 3);
    t22 = (t21 * 1U);
    t23 = (0 + t22);
    t5 = (t8 + t23);
    t11 = (t0 + 8440);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t5, 4U);
    xsi_driver_first_trans_fast(t11);
    goto LAB12;

}

static void led_ip_v1_00_a_a_0907174035_3306564128_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(166, ng0);

LAB3:    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t1 = (t0 + 8504);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 8216);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void led_ip_v1_00_a_a_0907174035_3306564128_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(187, ng0);

LAB3:    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t3 = (0 - 0);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 8568);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 1U);
    xsi_driver_first_trans_fast(t6);

LAB2:    t11 = (t0 + 8232);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void led_ip_v1_00_a_a_0907174035_3306564128_p_3(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(188, ng0);

LAB3:    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = (0 - 0);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 8632);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 1U);
    xsi_driver_first_trans_fast(t6);

LAB2:    t11 = (t0 + 8248);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void led_ip_v1_00_a_a_0907174035_3306564128_p_4(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(189, ng0);

LAB3:    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t3 = (0 - 0);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 8696);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast(t8);

LAB2:    t13 = (t0 + 8264);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void led_ip_v1_00_a_a_0907174035_3306564128_p_5(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(190, ng0);

LAB3:    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = (0 - 0);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 8760);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast(t8);

LAB2:    t13 = (t0 + 8280);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void led_ip_v1_00_a_a_0907174035_3306564128_p_6(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    int t27;
    int t28;
    int t29;
    unsigned int t30;
    char *t31;
    int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    int t38;
    int t39;
    int t40;
    char *t41;
    int t42;
    int t43;
    int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    int t48;
    int t49;
    int t50;
    char *t51;
    int t52;
    int t53;
    int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    int t58;
    int t59;
    int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    int t70;
    int t71;
    int t72;
    char *t73;
    int t74;
    int t75;
    int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    int t80;
    int t81;
    int t82;
    char *t83;
    int t84;
    int t85;
    int t86;
    unsigned int t87;
    unsigned int t88;

LAB0:    xsi_set_current_line(196, ng0);
    t2 = (t0 + 1152U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 8296);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(197, ng0);
    t4 = (t0 + 1352U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)2);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(200, ng0);
    t2 = (t0 + 3112U);
    t4 = *((char **)t2);
    t2 = (t0 + 14568);
    t17 = xsi_mem_cmp(t2, t4, 1U);
    if (t17 == 1)
        goto LAB12;

LAB14:
LAB13:    xsi_set_current_line(207, ng0);

LAB11:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1192U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(198, ng0);
    t4 = xsi_get_transient_memory(32U);
    memset(t4, 0, 32U);
    t11 = t4;
    memset(t11, (unsigned char)2, 32U);
    t12 = (t0 + 8824);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t4, 32U);
    xsi_driver_first_trans_fast(t12);
    goto LAB9;

LAB12:    xsi_set_current_line(202, ng0);
    t18 = (32 / 8);
    t19 = (t18 - 1);
    t8 = (t0 + 14569);
    *((int *)t8) = 0;
    t11 = (t0 + 14573);
    *((int *)t11) = t19;
    t20 = 0;
    t21 = t19;

LAB16:    if (t20 <= t21)
        goto LAB17;

LAB19:    goto LAB11;

LAB15:;
LAB17:    xsi_set_current_line(203, ng0);
    t12 = (t0 + 1672U);
    t13 = *((char **)t12);
    t12 = (t0 + 14569);
    t22 = *((int *)t12);
    t23 = (t22 - 3);
    t24 = (t23 * -1);
    xsi_vhdl_check_range_of_index(3, 0, -1, *((int *)t12));
    t25 = (1U * t24);
    t26 = (0 + t25);
    t14 = (t13 + t26);
    t1 = *((unsigned char *)t14);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB20;

LAB22:
LAB21:
LAB18:    t2 = (t0 + 14569);
    t20 = *((int *)t2);
    t4 = (t0 + 14573);
    t21 = *((int *)t4);
    if (t20 == t21)
        goto LAB19;

LAB25:    t17 = (t20 + 1);
    t20 = t17;
    t5 = (t0 + 14569);
    *((int *)t5) = t20;
    goto LAB16;

LAB20:    xsi_set_current_line(204, ng0);
    t15 = (t0 + 1512U);
    t16 = *((char **)t15);
    t15 = (t0 + 14569);
    t27 = *((int *)t15);
    t28 = (t27 * 8);
    t29 = (t28 + 7);
    t30 = (31 - t29);
    t31 = (t0 + 14569);
    t32 = *((int *)t31);
    t33 = (t32 * 8);
    xsi_vhdl_check_range_of_slice(31, 0, -1, t29, t33, -1);
    t34 = (t30 * 1U);
    t35 = (0 + t34);
    t36 = (t16 + t35);
    t37 = (t0 + 14569);
    t38 = *((int *)t37);
    t39 = (t38 * 8);
    t40 = (t39 + 7);
    t41 = (t0 + 14569);
    t42 = *((int *)t41);
    t43 = (t42 * 8);
    t44 = (t43 - t40);
    t45 = (t44 * -1);
    t45 = (t45 + 1);
    t46 = (1U * t45);
    t47 = (t0 + 14569);
    t48 = *((int *)t47);
    t49 = (t48 * 8);
    t50 = (t49 + 7);
    t51 = (t0 + 14569);
    t52 = *((int *)t51);
    t53 = (t52 * 8);
    t54 = (t53 - t50);
    t55 = (t54 * -1);
    t55 = (t55 + 1);
    t56 = (1U * t55);
    t6 = (t46 != t56);
    if (t6 == 1)
        goto LAB23;

LAB24:    t57 = (t0 + 14569);
    t58 = *((int *)t57);
    t59 = (t58 * 8);
    t60 = (t59 + 7);
    t61 = (31 - t60);
    t62 = (1U * t61);
    t63 = (0U + t62);
    t64 = (t0 + 8824);
    t65 = (t64 + 56U);
    t66 = *((char **)t65);
    t67 = (t66 + 56U);
    t68 = *((char **)t67);
    t69 = (t0 + 14569);
    t70 = *((int *)t69);
    t71 = (t70 * 8);
    t72 = (t71 + 7);
    t73 = (t0 + 14569);
    t74 = *((int *)t73);
    t75 = (t74 * 8);
    t76 = (t75 - t72);
    t77 = (t76 * -1);
    t77 = (t77 + 1);
    t78 = (1U * t77);
    memcpy(t68, t36, t78);
    t79 = (t0 + 14569);
    t80 = *((int *)t79);
    t81 = (t80 * 8);
    t82 = (t81 + 7);
    t83 = (t0 + 14569);
    t84 = *((int *)t83);
    t85 = (t84 * 8);
    t86 = (t85 - t82);
    t87 = (t86 * -1);
    t87 = (t87 + 1);
    t88 = (1U * t87);
    xsi_driver_first_trans_delta(t64, t63, t88, 0LL);
    goto LAB21;

LAB23:    xsi_size_not_matching(t46, t56, 0);
    goto LAB24;

}

static void led_ip_v1_00_a_a_0907174035_3306564128_p_7(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    xsi_set_current_line(218, ng0);
    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t1 = (t0 + 14577);
    t4 = xsi_mem_cmp(t1, t2, 1U);
    if (t4 == 1)
        goto LAB3;

LAB5:
LAB4:    xsi_set_current_line(220, ng0);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t3 = (t0 + 8888);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 32U);
    xsi_driver_first_trans_fast(t3);

LAB2:    t1 = (t0 + 8312);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(219, ng0);
    t5 = (t0 + 2952U);
    t6 = *((char **)t5);
    t5 = (t0 + 8888);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t6, 32U);
    xsi_driver_first_trans_fast(t5);
    goto LAB2;

LAB6:;
}

static void led_ip_v1_00_a_a_0907174035_3306564128_p_8(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(228, ng0);
    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t10 = xsi_get_transient_memory(32U);
    memset(t10, 0, 32U);
    t11 = t10;
    memset(t11, (unsigned char)2, 32U);
    t12 = (t0 + 8952);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t10, 32U);
    xsi_driver_first_trans_fast_port(t12);

LAB2:    t17 = (t0 + 8328);
    *((int *)t17) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 3432U);
    t5 = *((char **)t1);
    t1 = (t0 + 8952);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 32U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void led_ip_v1_00_a_a_0907174035_3306564128_p_9(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(231, ng0);

LAB3:    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 9016);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 8344);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void led_ip_v1_00_a_a_0907174035_3306564128_p_10(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(232, ng0);

LAB3:    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 9080);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 8360);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void led_ip_v1_00_a_a_0907174035_3306564128_p_11(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(233, ng0);

LAB3:    t1 = (t0 + 9144);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}


extern void led_ip_v1_00_a_a_0907174035_3306564128_init()
{
	static char *pe[] = {(void *)led_ip_v1_00_a_a_0907174035_3306564128_p_0,(void *)led_ip_v1_00_a_a_0907174035_3306564128_p_1,(void *)led_ip_v1_00_a_a_0907174035_3306564128_p_2,(void *)led_ip_v1_00_a_a_0907174035_3306564128_p_3,(void *)led_ip_v1_00_a_a_0907174035_3306564128_p_4,(void *)led_ip_v1_00_a_a_0907174035_3306564128_p_5,(void *)led_ip_v1_00_a_a_0907174035_3306564128_p_6,(void *)led_ip_v1_00_a_a_0907174035_3306564128_p_7,(void *)led_ip_v1_00_a_a_0907174035_3306564128_p_8,(void *)led_ip_v1_00_a_a_0907174035_3306564128_p_9,(void *)led_ip_v1_00_a_a_0907174035_3306564128_p_10,(void *)led_ip_v1_00_a_a_0907174035_3306564128_p_11};
	xsi_register_didat("led_ip_v1_00_a_a_0907174035_3306564128", "isim/isim_system.exe.sim/led_ip_v1_00_a/a_0907174035_3306564128.didat");
	xsi_register_executes(pe);
}
