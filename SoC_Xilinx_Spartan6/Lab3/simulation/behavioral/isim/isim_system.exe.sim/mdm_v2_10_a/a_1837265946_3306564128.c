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
extern char *PROC_COMMON_V3_00_A_P_4147123038;
extern char *STD_STANDARD;
static const char *ng2 = "Function native_bscan ended without a return statement";
static const char *ng3 = "D:/Xilinx_14.7/14.7/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/mdm_v2_10_a/hdl/vhdl/mdm.vhd";

unsigned char proc_common_v3_00_a_p_4147123038_sub_4150234446_2651761233(char *, char *, char *, int );


int mdm_v2_10_a_a_1837265946_3306564128_sub_4021089453_229454594(char *t1, char *t2, char *t3)
{
    char t5[24];
    char t15[16];
    char t17[16];
    int t0;
    char *t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    int t11;
    unsigned char t12;
    char *t13;
    int t14;
    char *t16;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;

LAB0:    t6 = (t5 + 4U);
    t7 = (t2 != 0);
    if (t7 == 1)
        goto LAB3;

LAB2:    t8 = (t5 + 12U);
    *((char **)t8) = t3;
    t9 = ((PROC_COMMON_V3_00_A_P_4147123038) + 71368U);
    t10 = *((char **)t9);
    t11 = *((int *)t10);
    t12 = proc_common_v3_00_a_p_4147123038_sub_4150234446_2651761233(PROC_COMMON_V3_00_A_P_4147123038, t2, t3, t11);
    if (t12 != 0)
        goto LAB4;

LAB6:    t9 = ((PROC_COMMON_V3_00_A_P_4147123038) + 2848U);
    t10 = *((char **)t9);
    t11 = *((int *)t10);
    t7 = proc_common_v3_00_a_p_4147123038_sub_4150234446_2651761233(PROC_COMMON_V3_00_A_P_4147123038, t2, t3, t11);
    if (t7 != 0)
        goto LAB8;

LAB9:    t9 = ((PROC_COMMON_V3_00_A_P_4147123038) + 2728U);
    t10 = *((char **)t9);
    t11 = *((int *)t10);
    t7 = proc_common_v3_00_a_p_4147123038_sub_4150234446_2651761233(PROC_COMMON_V3_00_A_P_4147123038, t2, t3, t11);
    if (t7 != 0)
        goto LAB11;

LAB12:    t9 = ((PROC_COMMON_V3_00_A_P_4147123038) + 2608U);
    t10 = *((char **)t9);
    t11 = *((int *)t10);
    t7 = proc_common_v3_00_a_p_4147123038_sub_4150234446_2651761233(PROC_COMMON_V3_00_A_P_4147123038, t2, t3, t11);
    if (t7 != 0)
        goto LAB14;

LAB15:    t9 = ((PROC_COMMON_V3_00_A_P_4147123038) + 2248U);
    t10 = *((char **)t9);
    t11 = *((int *)t10);
    t7 = proc_common_v3_00_a_p_4147123038_sub_4150234446_2651761233(PROC_COMMON_V3_00_A_P_4147123038, t2, t3, t11);
    if (t7 != 0)
        goto LAB17;

LAB18:    t9 = ((PROC_COMMON_V3_00_A_P_4147123038) + 2008U);
    t10 = *((char **)t9);
    t11 = *((int *)t10);
    t7 = proc_common_v3_00_a_p_4147123038_sub_4150234446_2651761233(PROC_COMMON_V3_00_A_P_4147123038, t2, t3, t11);
    if (t7 != 0)
        goto LAB20;

LAB21:    t9 = ((PROC_COMMON_V3_00_A_P_4147123038) + 1888U);
    t10 = *((char **)t9);
    t11 = *((int *)t10);
    t7 = proc_common_v3_00_a_p_4147123038_sub_4150234446_2651761233(PROC_COMMON_V3_00_A_P_4147123038, t2, t3, t11);
    if (t7 != 0)
        goto LAB23;

LAB24:    if ((unsigned char)0 == 0)
        goto LAB26;

LAB27:    t9 = ((PROC_COMMON_V3_00_A_P_4147123038) + 71368U);
    t10 = *((char **)t9);
    t11 = *((int *)t10);
    t0 = t11;

LAB1:    return t0;
LAB3:    *((char **)t6) = t2;
    goto LAB2;

LAB4:    t9 = ((PROC_COMMON_V3_00_A_P_4147123038) + 71368U);
    t13 = *((char **)t9);
    t14 = *((int *)t13);
    t0 = t14;
    goto LAB1;

LAB5:    xsi_error(ng2);
    t0 = 0;
    goto LAB1;

LAB7:    goto LAB5;

LAB8:    t9 = ((PROC_COMMON_V3_00_A_P_4147123038) + 2848U);
    t13 = *((char **)t9);
    t14 = *((int *)t13);
    t0 = t14;
    goto LAB1;

LAB10:    goto LAB5;

LAB11:    t9 = ((PROC_COMMON_V3_00_A_P_4147123038) + 2728U);
    t13 = *((char **)t9);
    t14 = *((int *)t13);
    t0 = t14;
    goto LAB1;

LAB13:    goto LAB5;

LAB14:    t9 = ((PROC_COMMON_V3_00_A_P_4147123038) + 2608U);
    t13 = *((char **)t9);
    t14 = *((int *)t13);
    t0 = t14;
    goto LAB1;

LAB16:    goto LAB5;

LAB17:    t9 = ((PROC_COMMON_V3_00_A_P_4147123038) + 2248U);
    t13 = *((char **)t9);
    t14 = *((int *)t13);
    t0 = t14;
    goto LAB1;

LAB19:    goto LAB5;

LAB20:    t9 = ((PROC_COMMON_V3_00_A_P_4147123038) + 2008U);
    t13 = *((char **)t9);
    t14 = *((int *)t13);
    t0 = t14;
    goto LAB1;

LAB22:    goto LAB5;

LAB23:    t9 = ((PROC_COMMON_V3_00_A_P_4147123038) + 1888U);
    t13 = *((char **)t9);
    t14 = *((int *)t13);
    t0 = t14;
    goto LAB1;

LAB25:    goto LAB5;

LAB26:    t9 = (t1 + 119712);
    t16 = ((STD_STANDARD) + 1008);
    t18 = (t17 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = 1;
    t19 = (t18 + 4U);
    *((int *)t19) = 47;
    t19 = (t18 + 8U);
    *((int *)t19) = 1;
    t11 = (47 - 1);
    t20 = (t11 * 1);
    t20 = (t20 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t20;
    t13 = xsi_base_array_concat(t13, t15, t16, (char)97, t9, t17, (char)97, t2, t3, (char)101);
    t19 = (t3 + 12U);
    t20 = *((unsigned int *)t19);
    t20 = (t20 * 1U);
    t21 = (47U + t20);
    xsi_report(t13, t21, (unsigned char)2);
    goto LAB27;

LAB28:    goto LAB5;

}

static void mdm_v2_10_a_a_1837265946_3306564128_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(1042, ng3);

LAB3:    t1 = (t0 + 68056);
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

static void mdm_v2_10_a_a_1837265946_3306564128_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(1043, ng3);

LAB3:    t1 = (t0 + 68120);
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

static void mdm_v2_10_a_a_1837265946_3306564128_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(1044, ng3);

LAB3:    t1 = (t0 + 68184);
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

static void mdm_v2_10_a_a_1837265946_3306564128_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(1045, ng3);

LAB3:    t1 = (t0 + 68248);
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

static void mdm_v2_10_a_a_1837265946_3306564128_p_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(1046, ng3);

LAB3:    t1 = (t0 + 68312);
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

static void mdm_v2_10_a_a_1837265946_3306564128_p_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(1047, ng3);

LAB3:    t1 = (t0 + 68376);
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

static void mdm_v2_10_a_a_1837265946_3306564128_p_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(1048, ng3);

LAB3:    t1 = (t0 + 68440);
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

static void mdm_v2_10_a_a_1837265946_3306564128_p_7(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(1049, ng3);

LAB3:    t1 = (t0 + 68504);
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

static void mdm_v2_10_a_a_1837265946_3306564128_p_8(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(1110, ng3);

LAB3:    t1 = (t0 + 68568);
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

static void mdm_v2_10_a_a_1837265946_3306564128_p_9(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(1111, ng3);

LAB3:    t1 = (t0 + 68632);
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

static void mdm_v2_10_a_a_1837265946_3306564128_p_10(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(1264, ng3);

LAB3:    t1 = (t0 + 59264U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 68696);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);

LAB2:    t8 = (t0 + 67976);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void mdm_v2_10_a_a_1837265946_3306564128_p_11(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(1686, ng3);

LAB3:    t1 = xsi_get_transient_memory(24U);
    memset(t1, 0, 24U);
    t2 = t1;
    memset(t2, (unsigned char)2, 24U);
    t3 = (t0 + 68760);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 24U);
    xsi_driver_first_trans_delta(t3, 0U, 24U, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}


extern void mdm_v2_10_a_a_1837265946_3306564128_init()
{
	static char *pe[] = {(void *)mdm_v2_10_a_a_1837265946_3306564128_p_0,(void *)mdm_v2_10_a_a_1837265946_3306564128_p_1,(void *)mdm_v2_10_a_a_1837265946_3306564128_p_2,(void *)mdm_v2_10_a_a_1837265946_3306564128_p_3,(void *)mdm_v2_10_a_a_1837265946_3306564128_p_4,(void *)mdm_v2_10_a_a_1837265946_3306564128_p_5,(void *)mdm_v2_10_a_a_1837265946_3306564128_p_6,(void *)mdm_v2_10_a_a_1837265946_3306564128_p_7,(void *)mdm_v2_10_a_a_1837265946_3306564128_p_8,(void *)mdm_v2_10_a_a_1837265946_3306564128_p_9,(void *)mdm_v2_10_a_a_1837265946_3306564128_p_10,(void *)mdm_v2_10_a_a_1837265946_3306564128_p_11};
	static char *se[] = {(void *)mdm_v2_10_a_a_1837265946_3306564128_sub_4021089453_229454594};
	xsi_register_didat("mdm_v2_10_a_a_1837265946_3306564128", "isim/isim_system.exe.sim/mdm_v2_10_a/a_1837265946_3306564128.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
