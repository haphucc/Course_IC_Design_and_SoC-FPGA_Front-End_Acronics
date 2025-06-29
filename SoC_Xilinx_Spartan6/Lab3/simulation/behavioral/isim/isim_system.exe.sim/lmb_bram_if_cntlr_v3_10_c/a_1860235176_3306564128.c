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
static const char *ng0 = "D:/Xilinx_14.7/14.7/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/lmb_bram_if_cntlr_v3_10_c/hdl/vhdl/lmb_bram_if_cntlr.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1605435078_503743352(char *, unsigned char , unsigned char );
char *ieee_p_2592010699_sub_3293060193_503743352(char *, char *, char *, char *, unsigned char );
char *ieee_p_2592010699_sub_393209765_503743352(char *, char *, char *, char *);


static void lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_0(char *t0)
{
    char t7[16];
    char t8[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(540, ng0);
    t1 = (t0 + 10144U);
    t2 = *((char **)t1);
    t1 = (t0 + 40584);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(542, ng0);
    t1 = (t0 + 10144U);
    t2 = *((char **)t1);
    t1 = (t0 + 76184U);
    t3 = ieee_p_2592010699_sub_3293060193_503743352(IEEE_P_2592010699, t8, t2, t1, (unsigned char)0);
    t4 = ieee_p_2592010699_sub_393209765_503743352(IEEE_P_2592010699, t7, t3, t8);
    t5 = (t7 + 12U);
    t9 = *((unsigned int *)t5);
    t9 = (t9 * 1U);
    t10 = (32U != t9);
    if (t10 == 1)
        goto LAB2;

LAB3:    t6 = (t0 + 40584);
    t11 = (t6 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t4, 32U);
    xsi_driver_first_trans_fast(t6);
    t1 = (t0 + 40312);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_size_not_matching(32U, t9, 0);
    goto LAB3;

}

static void lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(617, ng0);

LAB3:    t1 = (t0 + 40648);
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

static void lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(618, ng0);

LAB3:    t1 = (t0 + 1824U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 40712);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 40328);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_3(char *t0)
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
    unsigned char t10;
    unsigned char t11;
    char *t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    xsi_set_current_line(620, ng0);

LAB3:    t1 = (t0 + 21024U);
    t2 = *((char **)t1);
    t3 = (0 - 0);
    t4 = (t3 * 1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 20864U);
    t9 = *((char **)t8);
    t10 = *((unsigned char *)t9);
    t11 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t7, t10);
    t8 = (t0 + 21984U);
    t12 = *((char **)t8);
    t13 = *((unsigned char *)t12);
    t14 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t11, t13);
    t8 = (t0 + 40776);
    t15 = (t8 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = t14;
    xsi_driver_first_trans_delta(t8, 0U, 1, 0LL);

LAB2:    t19 = (t0 + 40344);
    *((int *)t19) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_4(char *t0)
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
    unsigned char t10;
    unsigned char t11;
    char *t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    xsi_set_current_line(621, ng0);

LAB3:    t1 = (t0 + 21024U);
    t2 = *((char **)t1);
    t3 = (1 - 0);
    t4 = (t3 * 1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 20864U);
    t9 = *((char **)t8);
    t10 = *((unsigned char *)t9);
    t11 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t7, t10);
    t8 = (t0 + 21984U);
    t12 = *((char **)t8);
    t13 = *((unsigned char *)t12);
    t14 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t11, t13);
    t8 = (t0 + 40840);
    t15 = (t8 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = t14;
    xsi_driver_first_trans_delta(t8, 1U, 1, 0LL);

LAB2:    t19 = (t0 + 40360);
    *((int *)t19) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_5(char *t0)
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
    unsigned char t10;
    unsigned char t11;
    char *t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    xsi_set_current_line(622, ng0);

LAB3:    t1 = (t0 + 21024U);
    t2 = *((char **)t1);
    t3 = (2 - 0);
    t4 = (t3 * 1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 20864U);
    t9 = *((char **)t8);
    t10 = *((unsigned char *)t9);
    t11 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t7, t10);
    t8 = (t0 + 21984U);
    t12 = *((char **)t8);
    t13 = *((unsigned char *)t12);
    t14 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t11, t13);
    t8 = (t0 + 40904);
    t15 = (t8 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = t14;
    xsi_driver_first_trans_delta(t8, 2U, 1, 0LL);

LAB2:    t19 = (t0 + 40376);
    *((int *)t19) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_6(char *t0)
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
    unsigned char t10;
    unsigned char t11;
    char *t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    xsi_set_current_line(623, ng0);

LAB3:    t1 = (t0 + 21024U);
    t2 = *((char **)t1);
    t3 = (3 - 0);
    t4 = (t3 * 1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 20864U);
    t9 = *((char **)t8);
    t10 = *((unsigned char *)t9);
    t11 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t7, t10);
    t8 = (t0 + 21984U);
    t12 = *((char **)t8);
    t13 = *((unsigned char *)t12);
    t14 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t11, t13);
    t8 = (t0 + 40968);
    t15 = (t8 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = t14;
    xsi_driver_first_trans_delta(t8, 3U, 1, 0LL);

LAB2:    t19 = (t0 + 40392);
    *((int *)t19) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_7(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(630, ng0);

LAB3:    t1 = (t0 + 20544U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 41032);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 40408);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_8(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(631, ng0);

LAB3:    t1 = (t0 + 22304U);
    t2 = *((char **)t1);
    t1 = (t0 + 41096);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 40424);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_9(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(632, ng0);

LAB3:    t1 = (t0 + 20384U);
    t2 = *((char **)t1);
    t1 = (t0 + 41160);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 40440);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_10(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(633, ng0);

LAB3:    t1 = (t0 + 22624U);
    t2 = *((char **)t1);
    t1 = (t0 + 41224);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast(t1);

LAB2:    t7 = (t0 + 40456);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_11(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(634, ng0);

LAB3:    t1 = (t0 + 20224U);
    t2 = *((char **)t1);
    t1 = (t0 + 41288);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 40472);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_12(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(637, ng0);

LAB3:    t1 = (t0 + 41352);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_13(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(638, ng0);

LAB3:    t1 = (t0 + 41416);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_14(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(639, ng0);

LAB3:    t1 = (t0 + 41480);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_15(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(640, ng0);

LAB3:    t1 = (t0 + 41544);
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

static void lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_16(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(641, ng0);

LAB3:    t1 = (t0 + 41608);
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

static void lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_17(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(642, ng0);

LAB3:    t1 = (t0 + 41672);
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

static void lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_18(char *t0)
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

LAB0:    xsi_set_current_line(649, ng0);
    t2 = (t0 + 1784U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 40488);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(650, ng0);
    t4 = (t0 + 1984U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(654, ng0);
    t2 = (t0 + 21984U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 41736);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(655, ng0);
    t2 = (t0 + 20544U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 41800);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1824U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(651, ng0);
    t4 = (t0 + 41736);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(652, ng0);
    t2 = (t0 + 41800);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

}

static void lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_19(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(660, ng0);

LAB3:    t1 = (t0 + 22464U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 22144U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t3, t5);
    t1 = (t0 + 41864);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast(t1);

LAB2:    t11 = (t0 + 40504);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_20(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(1348, ng0);

LAB3:    t1 = (t0 + 41928);
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

static void lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_21(char *t0)
{
    char *t1;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(1349, ng0);

LAB3:    t1 = (t0 + 77846);
    t3 = (t0 + 41992);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 2U);
    xsi_driver_first_trans_fast_port(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_22(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(1350, ng0);

LAB3:    t1 = (t0 + 42056);
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

static void lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_23(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(1351, ng0);

LAB3:    t1 = (t0 + 42120);
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

static void lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_24(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(1352, ng0);

LAB3:    t1 = (t0 + 42184);
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

static void lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_25(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(1353, ng0);

LAB3:    t1 = (t0 + 42248);
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

static void lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_26(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(1354, ng0);

LAB3:    t1 = (t0 + 42312);
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

static void lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_27(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(1355, ng0);

LAB3:    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t3 = (t0 + 42376);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 32U);
    xsi_driver_first_trans_fast_port(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_28(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(1356, ng0);

LAB3:    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t2 = t1;
    memset(t2, (unsigned char)2, 4U);
    t3 = (t0 + 42440);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 4U);
    xsi_driver_first_trans_fast_port(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_29(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(1357, ng0);

LAB3:    t1 = (t0 + 42504);
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

static void lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_30(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(1358, ng0);

LAB3:    t1 = (t0 + 42568);
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

static void lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_31(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(1359, ng0);

LAB3:    t1 = (t0 + 42632);
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

static void lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_32(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(1360, ng0);

LAB3:    t1 = xsi_get_transient_memory(1U);
    memset(t1, 0, 1U);
    t2 = t1;
    memset(t2, (unsigned char)2, 1U);
    t3 = (t0 + 42696);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 1U);
    xsi_driver_first_trans_fast_port(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_33(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(1361, ng0);

LAB3:    t1 = xsi_get_transient_memory(1U);
    memset(t1, 0, 1U);
    t2 = t1;
    memset(t2, (unsigned char)2, 1U);
    t3 = (t0 + 42760);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 1U);
    xsi_driver_first_trans_fast_port(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_34(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(1362, ng0);

LAB3:    t1 = xsi_get_transient_memory(1U);
    memset(t1, 0, 1U);
    t2 = t1;
    memset(t2, (unsigned char)2, 1U);
    t3 = (t0 + 42824);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 1U);
    xsi_driver_first_trans_fast_port(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_35(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(1363, ng0);

LAB3:    t1 = xsi_get_transient_memory(1U);
    memset(t1, 0, 1U);
    t2 = t1;
    memset(t2, (unsigned char)2, 1U);
    t3 = (t0 + 42888);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 1U);
    xsi_driver_first_trans_fast_port(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_36(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(1368, ng0);

LAB3:    t1 = (t0 + 42952);
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

static void lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_37(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(1369, ng0);

LAB3:    t1 = (t0 + 43016);
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

static void lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_38(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(1370, ng0);

LAB3:    t1 = xsi_get_transient_memory(2U);
    memset(t1, 0, 2U);
    t2 = t1;
    memset(t2, (unsigned char)2, 2U);
    t3 = (t0 + 43080);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 2U);
    xsi_driver_first_trans_fast_port(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_39(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(1371, ng0);

LAB3:    t1 = (t0 + 43144);
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

static void lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_40(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(1372, ng0);

LAB3:    t1 = (t0 + 43208);
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

static void lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_41(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(1373, ng0);

LAB3:    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t3 = (t0 + 43272);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 32U);
    xsi_driver_first_trans_fast_port(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_42(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(1374, ng0);

LAB3:    t1 = xsi_get_transient_memory(2U);
    memset(t1, 0, 2U);
    t2 = t1;
    memset(t2, (unsigned char)2, 2U);
    t3 = (t0 + 43336);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 2U);
    xsi_driver_first_trans_fast_port(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_43(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(1375, ng0);

LAB3:    t1 = (t0 + 43400);
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


extern void lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_init()
{
	static char *pe[] = {(void *)lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_0,(void *)lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_1,(void *)lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_2,(void *)lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_3,(void *)lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_4,(void *)lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_5,(void *)lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_6,(void *)lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_7,(void *)lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_8,(void *)lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_9,(void *)lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_10,(void *)lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_11,(void *)lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_12,(void *)lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_13,(void *)lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_14,(void *)lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_15,(void *)lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_16,(void *)lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_17,(void *)lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_18,(void *)lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_19,(void *)lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_20,(void *)lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_21,(void *)lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_22,(void *)lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_23,(void *)lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_24,(void *)lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_25,(void *)lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_26,(void *)lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_27,(void *)lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_28,(void *)lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_29,(void *)lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_30,(void *)lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_31,(void *)lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_32,(void *)lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_33,(void *)lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_34,(void *)lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_35,(void *)lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_36,(void *)lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_37,(void *)lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_38,(void *)lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_39,(void *)lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_40,(void *)lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_41,(void *)lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_42,(void *)lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128_p_43};
	xsi_register_didat("lmb_bram_if_cntlr_v3_10_c_a_1860235176_3306564128", "isim/isim_system.exe.sim/lmb_bram_if_cntlr_v3_10_c/a_1860235176_3306564128.didat");
	xsi_register_executes(pe);
}
