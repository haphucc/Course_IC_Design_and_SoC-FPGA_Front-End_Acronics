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
static const char *ng0 = "D:/Xilinx_14.7/14.7/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/microblaze_v8_50_c/hdl/vhdl/shift_logic_gti.vhd";
extern char *MICROBLAZE_V8_50_C_P_1761634766;
extern char *IEEE_P_2592010699;



static void microblaze_v8_50_c_a_1907334540_3306564128_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    unsigned int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned char t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    xsi_set_current_line(203, ng0);
    t1 = (t0 + 19888U);
    t2 = *((char **)t1);
    t1 = ((MICROBLAZE_V8_50_C_P_1761634766) + 19648U);
    t3 = *((char **)t1);
    t4 = (1 - 0);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t1 = (t3 + t6);
    t7 = 1;
    if (2U == 2U)
        goto LAB5;

LAB6:    t7 = 0;

LAB7:    if (t7 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 19888U);
    t2 = *((char **)t1);
    t1 = ((MICROBLAZE_V8_50_C_P_1761634766) + 19768U);
    t3 = *((char **)t1);
    t4 = (1 - 0);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t1 = (t3 + t6);
    t7 = 1;
    if (2U == 2U)
        goto LAB13;

LAB14:    t7 = 0;

LAB15:    if (t7 != 0)
        goto LAB11;

LAB12:    xsi_set_current_line(208, ng0);
    t1 = (t0 + 38320);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t9 = (t3 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB3:    t1 = (t0 + 37968);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(204, ng0);
    t11 = (t0 + 19248U);
    t12 = *((char **)t11);
    t13 = (0 - 0);
    t14 = (t13 * 1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t11 = (t12 + t16);
    t17 = *((unsigned char *)t11);
    t18 = (t0 + 38320);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    *((unsigned char *)t22) = t17;
    xsi_driver_first_trans_fast(t18);
    goto LAB3;

LAB5:    t8 = 0;

LAB8:    if (t8 < 2U)
        goto LAB9;
    else
        goto LAB7;

LAB9:    t9 = (t2 + t8);
    t10 = (t1 + t8);
    if (*((unsigned char *)t9) != *((unsigned char *)t10))
        goto LAB6;

LAB10:    t8 = (t8 + 1);
    goto LAB8;

LAB11:    xsi_set_current_line(206, ng0);
    t11 = (t0 + 19568U);
    t12 = *((char **)t11);
    t17 = *((unsigned char *)t12);
    t11 = (t0 + 38320);
    t18 = (t11 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = t17;
    xsi_driver_first_trans_fast(t11);
    goto LAB3;

LAB13:    t8 = 0;

LAB16:    if (t8 < 2U)
        goto LAB17;
    else
        goto LAB15;

LAB17:    t9 = (t2 + t8);
    t10 = (t1 + t8);
    if (*((unsigned char *)t9) != *((unsigned char *)t10))
        goto LAB14;

LAB18:    t8 = (t8 + 1);
    goto LAB16;

}

static void microblaze_v8_50_c_a_1907334540_3306564128_p_1(char *t0)
{
    char t9[16];
    char t11[16];
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    char *t8;
    char *t10;
    char *t12;
    char *t13;
    int t14;
    unsigned int t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(213, ng0);

LAB3:    t1 = (t0 + 21648U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 19248U);
    t4 = *((char **)t1);
    t5 = (0 - 0);
    t6 = (t5 * 1U);
    t7 = (0 + t6);
    t1 = (t4 + t7);
    t10 = ((IEEE_P_2592010699) + 4024);
    t12 = (t11 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = 0;
    t13 = (t12 + 4U);
    *((int *)t13) = 30;
    t13 = (t12 + 8U);
    *((int *)t13) = 1;
    t14 = (30 - 0);
    t15 = (t14 * 1);
    t15 = (t15 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t15;
    t8 = xsi_base_array_concat(t8, t9, t10, (char)99, t3, (char)97, t1, t11, (char)101);
    t15 = (1U + 31U);
    t16 = (32U != t15);
    if (t16 == 1)
        goto LAB5;

LAB6:    t13 = (t0 + 38384);
    t17 = (t13 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t8, 32U);
    xsi_driver_first_trans_fast(t13);

LAB2:    t21 = (t0 + 37984);
    *((int *)t21) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(32U, t15, 0);
    goto LAB6;

}

static void microblaze_v8_50_c_a_1907334540_3306564128_p_2(char *t0)
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

LAB0:    xsi_set_current_line(216, ng0);

LAB3:    t1 = (t0 + 19248U);
    t2 = *((char **)t1);
    t3 = (31 - 0);
    t4 = (t3 * 1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 38448);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t13 = (t0 + 38000);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void microblaze_v8_50_c_a_1907334540_3306564128_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    int t10;
    int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned char t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(408, ng0);
    t1 = (t0 + 19728U);
    t2 = *((char **)t1);
    t1 = ((MICROBLAZE_V8_50_C_P_1761634766) + 21448U);
    t3 = *((char **)t1);
    t4 = 1;
    if (2U == 2U)
        goto LAB5;

LAB6:    t4 = 0;

LAB7:    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 19728U);
    t2 = *((char **)t1);
    t1 = ((MICROBLAZE_V8_50_C_P_1761634766) + 21568U);
    t3 = *((char **)t1);
    t4 = 1;
    if (2U == 2U)
        goto LAB13;

LAB14:    t4 = 0;

LAB15:    if (t4 != 0)
        goto LAB11;

LAB12:    xsi_set_current_line(417, ng0);
    t1 = (t0 + 38512);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t6 = (t3 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(418, ng0);
    t1 = (t0 + 38576);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t6 = (t3 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB3:    t1 = (t0 + 38016);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(409, ng0);
    t7 = (t0 + 19248U);
    t8 = *((char **)t7);
    t7 = ((MICROBLAZE_V8_50_C_P_1761634766) + 9568U);
    t9 = *((char **)t7);
    t10 = *((int *)t9);
    t11 = (t10 - 0);
    t12 = (t11 * 1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t7 = (t8 + t14);
    t15 = *((unsigned char *)t7);
    t16 = (t0 + 27864U);
    t17 = *((char **)t16);
    t16 = (t17 + 0);
    *((unsigned char *)t16) = t15;
    xsi_set_current_line(410, ng0);
    t1 = (t0 + 27864U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t1 = (t0 + 38512);
    t3 = (t1 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(411, ng0);
    t1 = (t0 + 27864U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t1 = (t0 + 38576);
    t3 = (t1 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    t5 = 0;

LAB8:    if (t5 < 2U)
        goto LAB9;
    else
        goto LAB7;

LAB9:    t1 = (t2 + t5);
    t6 = (t3 + t5);
    if (*((unsigned char *)t1) != *((unsigned char *)t6))
        goto LAB6;

LAB10:    t5 = (t5 + 1);
    goto LAB8;

LAB11:    xsi_set_current_line(413, ng0);
    t7 = (t0 + 19248U);
    t8 = *((char **)t7);
    t7 = ((MICROBLAZE_V8_50_C_P_1761634766) + 9688U);
    t9 = *((char **)t7);
    t10 = *((int *)t9);
    t11 = (t10 - 0);
    t12 = (t11 * 1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t7 = (t8 + t14);
    t15 = *((unsigned char *)t7);
    t16 = (t0 + 27864U);
    t17 = *((char **)t16);
    t16 = (t17 + 0);
    *((unsigned char *)t16) = t15;
    xsi_set_current_line(414, ng0);
    t1 = (t0 + 27864U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t1 = (t0 + 38512);
    t3 = (t1 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(415, ng0);
    t1 = (t0 + 38576);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t6 = (t3 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB13:    t5 = 0;

LAB16:    if (t5 < 2U)
        goto LAB17;
    else
        goto LAB15;

LAB17:    t1 = (t2 + t5);
    t6 = (t3 + t5);
    if (*((unsigned char *)t1) != *((unsigned char *)t6))
        goto LAB14;

LAB18:    t5 = (t5 + 1);
    goto LAB16;

}

static void microblaze_v8_50_c_a_1907334540_3306564128_p_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    xsi_set_current_line(422, ng0);

LAB3:    t1 = xsi_get_transient_memory(16U);
    memset(t1, 0, 16U);
    t2 = t1;
    t3 = (t0 + 22768U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    memset(t2, t5, 16U);
    t3 = (t0 + 38640);
    t6 = (t3 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 16U);
    xsi_driver_first_trans_delta(t3, 0U, 16U, 0LL);

LAB2:    t10 = (t0 + 38032);
    *((int *)t10) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void microblaze_v8_50_c_a_1907334540_3306564128_p_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    xsi_set_current_line(423, ng0);

LAB3:    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    t3 = (t0 + 22928U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    memset(t2, t5, 8U);
    t3 = (t0 + 38704);
    t6 = (t3 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_delta(t3, 16U, 8U, 0LL);

LAB2:    t10 = (t0 + 38048);
    *((int *)t10) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void microblaze_v8_50_c_a_1907334540_3306564128_p_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(424, ng0);

LAB3:    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)2, 8U);
    t3 = (t0 + 38768);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 8U);
    xsi_driver_first_trans_delta(t3, 24U, 8U, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void microblaze_v8_50_c_a_1907334540_3306564128_p_7(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;

LAB0:    xsi_set_current_line(503, ng0);
    t1 = (t0 + 20688U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    if (t3 != 0)
        goto LAB3;

LAB4:
LAB5:    t13 = (t0 + 21968U);
    t14 = *((char **)t13);
    t15 = (0 - 0);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t13 = (t14 + t17);
    t18 = (t0 + 38832);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t13, 26U);
    xsi_driver_first_trans_delta(t18, 0U, 26U, 0LL);

LAB2:    t23 = (t0 + 38064);
    *((int *)t23) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 22608U);
    t4 = *((char **)t1);
    t5 = (0 - 0);
    t6 = (t5 * 1U);
    t7 = (0 + t6);
    t1 = (t4 + t7);
    t8 = (t0 + 38832);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 26U);
    xsi_driver_first_trans_delta(t8, 0U, 26U, 0LL);
    goto LAB2;

LAB6:    goto LAB2;

}

static void microblaze_v8_50_c_a_1907334540_3306564128_p_8(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned char t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;

LAB0:    xsi_set_current_line(506, ng0);
    t1 = (t0 + 20528U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    if (t3 != 0)
        goto LAB3;

LAB4:    t13 = (t0 + 20688U);
    t14 = *((char **)t13);
    t15 = *((unsigned char *)t14);
    if (t15 != 0)
        goto LAB5;

LAB6:
LAB7:    t25 = (t0 + 21968U);
    t26 = *((char **)t25);
    t27 = (29 - 0);
    t28 = (t27 * 1U);
    t29 = (0 + t28);
    t25 = (t26 + t29);
    t30 = (t0 + 38896);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    memcpy(t34, t25, 3U);
    xsi_driver_first_trans_fast(t30);

LAB2:    t35 = (t0 + 38080);
    *((int *)t35) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 22448U);
    t4 = *((char **)t1);
    t5 = (29 - 0);
    t6 = (t5 * 1U);
    t7 = (0 + t6);
    t1 = (t4 + t7);
    t8 = (t0 + 38896);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 3U);
    xsi_driver_first_trans_fast(t8);
    goto LAB2;

LAB5:    t13 = (t0 + 22608U);
    t16 = *((char **)t13);
    t17 = (29 - 0);
    t18 = (t17 * 1U);
    t19 = (0 + t18);
    t13 = (t16 + t19);
    t20 = (t0 + 38896);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t13, 3U);
    xsi_driver_first_trans_fast(t20);
    goto LAB2;

LAB8:    goto LAB2;

}

static void microblaze_v8_50_c_a_1907334540_3306564128_p_9(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;

LAB0:    xsi_set_current_line(510, ng0);
    t1 = (t0 + 20688U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    if (t3 != 0)
        goto LAB3;

LAB4:
LAB5:    t13 = (t0 + 21968U);
    t14 = *((char **)t13);
    t15 = (26 - 0);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t13 = (t14 + t17);
    t18 = (t0 + 38960);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t13, 3U);
    xsi_driver_first_trans_fast(t18);

LAB2:    t23 = (t0 + 38096);
    *((int *)t23) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 22608U);
    t4 = *((char **)t1);
    t5 = (26 - 0);
    t6 = (t5 * 1U);
    t7 = (0 + t6);
    t1 = (t4 + t7);
    t8 = (t0 + 38960);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 3U);
    xsi_driver_first_trans_fast(t8);
    goto LAB2;

LAB6:    goto LAB2;

}

static void microblaze_v8_50_c_a_1907334540_3306564128_p_10(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(513, ng0);
    t1 = (t0 + 20368U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    if (t3 != 0)
        goto LAB3;

LAB4:
LAB5:    t8 = (t0 + 39024);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast(t8);

LAB2:    t13 = (t0 + 38112);
    *((int *)t13) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 39024);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void microblaze_v8_50_c_a_1907334540_3306564128_p_11(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(514, ng0);
    t1 = (t0 + 20528U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    if (t3 != 0)
        goto LAB3;

LAB4:
LAB5:    t8 = (t0 + 39088);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast(t8);

LAB2:    t13 = (t0 + 38128);
    *((int *)t13) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 39088);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void microblaze_v8_50_c_a_1907334540_3306564128_p_12(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;

LAB0:    xsi_set_current_line(577, ng0);
    t1 = (t0 + 20848U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    if (t3 != 0)
        goto LAB3;

LAB4:
LAB5:    t13 = (t0 + 19248U);
    t14 = *((char **)t13);
    t15 = (16 - 0);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t13 = (t14 + t17);
    t18 = (t0 + 39152);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t13, 8U);
    xsi_driver_first_trans_delta(t18, 0U, 8U, 0LL);

LAB2:    t23 = (t0 + 38144);
    *((int *)t23) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 19248U);
    t4 = *((char **)t1);
    t5 = (24 - 0);
    t6 = (t5 * 1U);
    t7 = (0 + t6);
    t1 = (t4 + t7);
    t8 = (t0 + 39152);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 8U);
    xsi_driver_first_trans_delta(t8, 0U, 8U, 0LL);
    goto LAB2;

LAB6:    goto LAB2;

}

static void microblaze_v8_50_c_a_1907334540_3306564128_p_13(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;

LAB0:    xsi_set_current_line(580, ng0);
    t1 = (t0 + 20848U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    if (t3 != 0)
        goto LAB3;

LAB4:
LAB5:    t13 = (t0 + 19248U);
    t14 = *((char **)t13);
    t15 = (24 - 0);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t13 = (t14 + t17);
    t18 = (t0 + 39216);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t13, 8U);
    xsi_driver_first_trans_delta(t18, 8U, 8U, 0LL);

LAB2:    t23 = (t0 + 38160);
    *((int *)t23) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 19248U);
    t4 = *((char **)t1);
    t5 = (16 - 0);
    t6 = (t5 * 1U);
    t7 = (0 + t6);
    t1 = (t4 + t7);
    t8 = (t0 + 39216);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 8U);
    xsi_driver_first_trans_delta(t8, 8U, 8U, 0LL);
    goto LAB2;

LAB6:    goto LAB2;

}

static void microblaze_v8_50_c_a_1907334540_3306564128_p_14(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;

LAB0:    xsi_set_current_line(583, ng0);
    t1 = (t0 + 20848U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    if (t3 != 0)
        goto LAB3;

LAB4:
LAB5:    t13 = (t0 + 19248U);
    t14 = *((char **)t13);
    t15 = (0 - 0);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t13 = (t14 + t17);
    t18 = (t0 + 39280);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t13, 8U);
    xsi_driver_first_trans_delta(t18, 16U, 8U, 0LL);

LAB2:    t23 = (t0 + 38176);
    *((int *)t23) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 19248U);
    t4 = *((char **)t1);
    t5 = (8 - 0);
    t6 = (t5 * 1U);
    t7 = (0 + t6);
    t1 = (t4 + t7);
    t8 = (t0 + 39280);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 8U);
    xsi_driver_first_trans_delta(t8, 16U, 8U, 0LL);
    goto LAB2;

LAB6:    goto LAB2;

}

static void microblaze_v8_50_c_a_1907334540_3306564128_p_15(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;

LAB0:    xsi_set_current_line(586, ng0);
    t1 = (t0 + 20848U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    if (t3 != 0)
        goto LAB3;

LAB4:
LAB5:    t13 = (t0 + 19248U);
    t14 = *((char **)t13);
    t15 = (8 - 0);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t13 = (t14 + t17);
    t18 = (t0 + 39344);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t13, 8U);
    xsi_driver_first_trans_delta(t18, 24U, 8U, 0LL);

LAB2:    t23 = (t0 + 38192);
    *((int *)t23) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 19248U);
    t4 = *((char **)t1);
    t5 = (0 - 0);
    t6 = (t5 * 1U);
    t7 = (0 + t6);
    t1 = (t4 + t7);
    t8 = (t0 + 39344);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 8U);
    xsi_driver_first_trans_delta(t8, 24U, 8U, 0LL);
    goto LAB2;

LAB6:    goto LAB2;

}

static void microblaze_v8_50_c_a_1907334540_3306564128_p_16(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(606, ng0);

LAB3:    t1 = xsi_get_transient_memory(26U);
    memset(t1, 0, 26U);
    t2 = t1;
    memset(t2, (unsigned char)2, 26U);
    t3 = (t0 + 39408);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 26U);
    xsi_driver_first_trans_delta(t3, 0U, 26U, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void microblaze_v8_50_c_a_1907334540_3306564128_p_17(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(607, ng0);

LAB3:    t1 = (t0 + 24848U);
    t2 = *((char **)t1);
    t1 = (t0 + 39472);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 6U);
    xsi_driver_first_trans_delta(t1, 26U, 6U, 0LL);

LAB2:    t7 = (t0 + 38208);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void microblaze_v8_50_c_a_1907334540_3306564128_p_18(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(609, ng0);

LAB3:    t1 = xsi_get_transient_memory(29U);
    memset(t1, 0, 29U);
    t2 = t1;
    memset(t2, (unsigned char)2, 29U);
    t3 = (t0 + 39536);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 29U);
    xsi_driver_first_trans_delta(t3, 0U, 29U, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void microblaze_v8_50_c_a_1907334540_3306564128_p_19(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(631, ng0);
    t1 = (t0 + 20368U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    if (t3 != 0)
        goto LAB3;

LAB4:
LAB5:    t8 = (t0 + 39600);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast(t8);

LAB2:    t13 = (t0 + 38224);
    *((int *)t13) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 39600);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void microblaze_v8_50_c_a_1907334540_3306564128_p_20(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    char *t5;
    char *t6;
    int t7;
    int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned char t12;
    char *t13;
    char *t14;
    unsigned char t15;
    unsigned char t16;
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

LAB0:    xsi_set_current_line(632, ng0);
    t2 = (t0 + 20368U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    if (t4 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB8:    t21 = (t0 + 39664);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    *((unsigned char *)t25) = (unsigned char)2;
    xsi_driver_first_trans_fast(t21);

LAB2:    t26 = (t0 + 38240);
    *((int *)t26) = 1;

LAB1:    return;
LAB3:    t13 = (t0 + 39664);
    t17 = (t13 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = (unsigned char)3;
    xsi_driver_first_trans_fast(t13);
    goto LAB2;

LAB5:    t2 = (t0 + 20048U);
    t5 = *((char **)t2);
    t2 = ((MICROBLAZE_V8_50_C_P_1761634766) + 40528U);
    t6 = *((char **)t2);
    t7 = *((int *)t6);
    t8 = (t7 - 0);
    t9 = (t8 * 1);
    t10 = (1U * t9);
    t11 = (0 + t10);
    t2 = (t5 + t11);
    t12 = *((unsigned char *)t2);
    t13 = ((MICROBLAZE_V8_50_C_P_1761634766) + 40648U);
    t14 = *((char **)t13);
    t15 = *((unsigned char *)t14);
    t16 = (t12 == t15);
    t1 = t16;
    goto LAB7;

LAB9:    goto LAB2;

}


extern void microblaze_v8_50_c_a_1907334540_3306564128_init()
{
	static char *pe[] = {(void *)microblaze_v8_50_c_a_1907334540_3306564128_p_0,(void *)microblaze_v8_50_c_a_1907334540_3306564128_p_1,(void *)microblaze_v8_50_c_a_1907334540_3306564128_p_2,(void *)microblaze_v8_50_c_a_1907334540_3306564128_p_3,(void *)microblaze_v8_50_c_a_1907334540_3306564128_p_4,(void *)microblaze_v8_50_c_a_1907334540_3306564128_p_5,(void *)microblaze_v8_50_c_a_1907334540_3306564128_p_6,(void *)microblaze_v8_50_c_a_1907334540_3306564128_p_7,(void *)microblaze_v8_50_c_a_1907334540_3306564128_p_8,(void *)microblaze_v8_50_c_a_1907334540_3306564128_p_9,(void *)microblaze_v8_50_c_a_1907334540_3306564128_p_10,(void *)microblaze_v8_50_c_a_1907334540_3306564128_p_11,(void *)microblaze_v8_50_c_a_1907334540_3306564128_p_12,(void *)microblaze_v8_50_c_a_1907334540_3306564128_p_13,(void *)microblaze_v8_50_c_a_1907334540_3306564128_p_14,(void *)microblaze_v8_50_c_a_1907334540_3306564128_p_15,(void *)microblaze_v8_50_c_a_1907334540_3306564128_p_16,(void *)microblaze_v8_50_c_a_1907334540_3306564128_p_17,(void *)microblaze_v8_50_c_a_1907334540_3306564128_p_18,(void *)microblaze_v8_50_c_a_1907334540_3306564128_p_19,(void *)microblaze_v8_50_c_a_1907334540_3306564128_p_20};
	xsi_register_didat("microblaze_v8_50_c_a_1907334540_3306564128", "isim/isim_system.exe.sim/microblaze_v8_50_c/a_1907334540_3306564128.didat");
	xsi_register_executes(pe);
}
