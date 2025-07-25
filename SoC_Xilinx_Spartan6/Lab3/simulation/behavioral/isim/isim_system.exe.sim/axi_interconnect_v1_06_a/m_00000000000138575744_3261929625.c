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
static const char *ng0 = "D:/Xilinx_14.7/14.7/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/axi_interconnect_v1_06_a/hdl/verilog/ict106_mux_enc.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {0U, 0U};
static int ng5[] = {4, 0};
static int ng6[] = {5, 0};



static int sp_f_mux(char *t1, char *t2)
{
    char t5[8];
    char t6[8];
    char t7[8];
    char t12[8];
    char t45[8];
    char t57[8];
    char t90[8];
    char t91[8];
    char t92[8];
    char t127[8];
    char t128[8];
    char t134[8];
    char t154[8];
    char t155[8];
    char t156[8];
    char t165[8];
    int t0;
    char *t3;
    char *t4;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    unsigned int t15;
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
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    char *t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    int t81;
    int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    char *t93;
    char *t94;
    char *t95;
    char *t96;
    char *t97;
    char *t98;
    unsigned int t99;
    int t100;
    char *t101;
    unsigned int t102;
    int t103;
    int t104;
    char *t105;
    unsigned int t106;
    int t107;
    int t108;
    unsigned int t109;
    int t110;
    unsigned int t111;
    unsigned int t112;
    int t113;
    int t114;
    char *t115;
    char *t116;
    char *t117;
    char *t118;
    char *t119;
    char *t120;
    char *t121;
    char *t122;
    char *t123;
    char *t124;
    char *t125;
    char *t126;
    char *t129;
    char *t130;
    char *t131;
    char *t132;
    char *t133;
    char *t135;
    char *t136;
    char *t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    char *t141;
    char *t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    char *t153;
    char *t157;
    char *t158;
    char *t159;
    char *t160;
    char *t161;
    char *t162;
    char *t163;
    char *t164;
    char *t166;
    unsigned int t167;
    char *t168;
    unsigned int t169;
    char *t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    int t175;
    int t176;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    xsi_set_current_line(90, ng0);

LAB4:    xsi_set_current_line(91, ng0);
    t4 = ((char*)((ng1)));
    t8 = (t1 + 5048);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng2)));
    memset(t12, 0, 8);
    t13 = (t10 + 4);
    t14 = (t11 + 4);
    t15 = *((unsigned int *)t10);
    t16 = *((unsigned int *)t11);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t14);
    t20 = (t18 ^ t19);
    t21 = (t17 | t20);
    t22 = *((unsigned int *)t13);
    t23 = *((unsigned int *)t14);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB8;

LAB5:    if (t24 != 0)
        goto LAB7;

LAB6:    *((unsigned int *)t12) = 1;

LAB8:    memset(t7, 0, 8);
    t28 = (t12 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (~(t29));
    t31 = *((unsigned int *)t12);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB9;

LAB10:    if (*((unsigned int *)t28) != 0)
        goto LAB11;

LAB12:    t35 = (t7 + 4);
    t36 = *((unsigned int *)t7);
    t37 = *((unsigned int *)t35);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB13;

LAB14:    t40 = *((unsigned int *)t7);
    t41 = (~(t40));
    t42 = *((unsigned int *)t35);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t35) > 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t7) > 0)
        goto LAB19;

LAB20:    memcpy(t6, t44, 8);

LAB21:    xsi_vlog_mul_concat(t5, 1, 1, t4, 1U, t6, 1);
    t46 = (t1 + 5208);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    memset(t45, 0, 8);
    t49 = (t45 + 4);
    t50 = (t48 + 4);
    t51 = *((unsigned int *)t48);
    t52 = (t51 >> 0);
    *((unsigned int *)t45) = t52;
    t53 = *((unsigned int *)t50);
    t54 = (t53 >> 0);
    *((unsigned int *)t49) = t54;
    t55 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t55 & 1U);
    t56 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t56 & 1U);
    t58 = *((unsigned int *)t5);
    t59 = *((unsigned int *)t45);
    t60 = (t58 & t59);
    *((unsigned int *)t57) = t60;
    t61 = (t5 + 4);
    t62 = (t45 + 4);
    t63 = (t57 + 4);
    t64 = *((unsigned int *)t61);
    t65 = *((unsigned int *)t62);
    t66 = (t64 | t65);
    *((unsigned int *)t63) = t66;
    t67 = *((unsigned int *)t63);
    t68 = (t67 != 0);
    if (t68 == 1)
        goto LAB22;

LAB23:
LAB24:    t89 = (t1 + 5688);
    t93 = (t1 + 5688);
    t94 = (t93 + 72U);
    t95 = *((char **)t94);
    t96 = ((char*)((ng2)));
    t97 = ((char*)((ng2)));
    xsi_vlog_convert_partindices(t90, t91, t92, ((int*)(t95)), 2, t96, 32, 1, t97, 32, 1);
    t98 = (t90 + 4);
    t99 = *((unsigned int *)t98);
    t100 = (!(t99));
    t101 = (t91 + 4);
    t102 = *((unsigned int *)t101);
    t103 = (!(t102));
    t104 = (t100 && t103);
    t105 = (t92 + 4);
    t106 = *((unsigned int *)t105);
    t107 = (!(t106));
    t108 = (t104 && t107);
    if (t108 == 1)
        goto LAB25;

LAB26:    xsi_set_current_line(92, ng0);
    xsi_set_current_line(92, ng0);
    t4 = ((char*)((ng1)));
    t8 = (t1 + 5528);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 32);

LAB27:    t4 = (t1 + 5528);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    t10 = (t1 + 1200);
    t11 = *((char **)t10);
    memset(t5, 0, 8);
    xsi_vlog_signed_less(t5, 32, t9, 32, t11, 32);
    t10 = (t5 + 4);
    t15 = *((unsigned int *)t10);
    t16 = (~(t15));
    t17 = *((unsigned int *)t5);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB28;

LAB29:    xsi_set_current_line(97, ng0);
    t4 = (t1 + 5688);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    memset(t5, 0, 8);
    t10 = (t5 + 4);
    t11 = (t9 + 4);
    t15 = *((unsigned int *)t9);
    t16 = (t15 >> 5);
    *((unsigned int *)t5) = t16;
    t17 = *((unsigned int *)t11);
    t18 = (t17 >> 5);
    *((unsigned int *)t10) = t18;
    t19 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t19 & 1U);
    t20 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t20 & 1U);
    t13 = (t1 + 5368);
    xsi_vlogvar_assign_value(t13, t5, 0, 0, 1);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB7:    t27 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB8;

LAB9:    *((unsigned int *)t7) = 1;
    goto LAB12;

LAB11:    t34 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB12;

LAB13:    t39 = ((char*)((ng3)));
    goto LAB14;

LAB15:    t44 = ((char*)((ng4)));
    goto LAB16;

LAB17:    xsi_vlog_unsigned_bit_combine(t6, 1, t39, 1, t44, 1);
    goto LAB21;

LAB19:    memcpy(t6, t39, 8);
    goto LAB21;

LAB22:    t69 = *((unsigned int *)t57);
    t70 = *((unsigned int *)t63);
    *((unsigned int *)t57) = (t69 | t70);
    t71 = (t5 + 4);
    t72 = (t45 + 4);
    t73 = *((unsigned int *)t5);
    t74 = (~(t73));
    t75 = *((unsigned int *)t71);
    t76 = (~(t75));
    t77 = *((unsigned int *)t45);
    t78 = (~(t77));
    t79 = *((unsigned int *)t72);
    t80 = (~(t79));
    t81 = (t74 & t76);
    t82 = (t78 & t80);
    t83 = (~(t81));
    t84 = (~(t82));
    t85 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t85 & t83);
    t86 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t86 & t84);
    t87 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t87 & t83);
    t88 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t88 & t84);
    goto LAB24;

LAB25:    t109 = *((unsigned int *)t92);
    t110 = (t109 + 0);
    t111 = *((unsigned int *)t90);
    t112 = *((unsigned int *)t91);
    t113 = (t111 - t112);
    t114 = (t113 + 1);
    xsi_vlogvar_assign_value(t89, t57, t110, *((unsigned int *)t91), t114);
    goto LAB26;

LAB28:    xsi_set_current_line(92, ng0);

LAB30:    t13 = (t1 + 280);
    xsi_vlog_namedbase_setdisablestate(t13, &&LAB31);
    xsi_vlog_namedbase_pushprocess(t13, t2);

LAB32:    xsi_set_current_line(93, ng0);
    t14 = (t1 + 5688);
    t27 = (t14 + 56U);
    t28 = *((char **)t27);
    t34 = (t1 + 5688);
    t35 = (t34 + 72U);
    t39 = *((char **)t35);
    t44 = (t1 + 5528);
    t46 = (t44 + 56U);
    t47 = *((char **)t46);
    t48 = ((char*)((ng1)));
    memset(t7, 0, 8);
    xsi_vlog_signed_minus(t7, 32, t47, 32, t48, 32);
    t49 = (t1 + 1472);
    t50 = *((char **)t49);
    memset(t12, 0, 8);
    xsi_vlog_signed_multiply(t12, 32, t7, 32, t50, 32);
    t49 = ((char*)((ng1)));
    xsi_vlog_get_indexed_partselect(t6, 1, t28, ((int*)(t39)), 2, t12, 32, 1, t49, 32, 1, 1);
    t61 = ((char*)((ng1)));
    t62 = (t1 + 5048);
    t63 = (t62 + 56U);
    t71 = *((char **)t63);
    t72 = (t1 + 5528);
    t89 = (t72 + 56U);
    t93 = *((char **)t89);
    memset(t91, 0, 8);
    t94 = (t71 + 4);
    t95 = (t93 + 4);
    t20 = *((unsigned int *)t71);
    t21 = *((unsigned int *)t93);
    t22 = (t20 ^ t21);
    t23 = *((unsigned int *)t94);
    t24 = *((unsigned int *)t95);
    t25 = (t23 ^ t24);
    t26 = (t22 | t25);
    t29 = *((unsigned int *)t94);
    t30 = *((unsigned int *)t95);
    t31 = (t29 | t30);
    t32 = (~(t31));
    t33 = (t26 & t32);
    if (t33 != 0)
        goto LAB36;

LAB33:    if (t31 != 0)
        goto LAB35;

LAB34:    *((unsigned int *)t91) = 1;

LAB36:    memset(t90, 0, 8);
    t97 = (t91 + 4);
    t36 = *((unsigned int *)t97);
    t37 = (~(t36));
    t38 = *((unsigned int *)t91);
    t40 = (t38 & t37);
    t41 = (t40 & 1U);
    if (t41 != 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t97) != 0)
        goto LAB39;

LAB40:    t101 = (t90 + 4);
    t42 = *((unsigned int *)t90);
    t43 = *((unsigned int *)t101);
    t51 = (t42 || t43);
    if (t51 > 0)
        goto LAB41;

LAB42:    t52 = *((unsigned int *)t90);
    t53 = (~(t52));
    t54 = *((unsigned int *)t101);
    t55 = (t53 || t54);
    if (t55 > 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t101) > 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t90) > 0)
        goto LAB47;

LAB48:    memcpy(t57, t115, 8);

LAB49:    xsi_vlog_mul_concat(t45, 1, 1, t61, 1U, t57, 1);
    t116 = (t1 + 5208);
    t117 = (t116 + 56U);
    t118 = *((char **)t117);
    t119 = (t1 + 5208);
    t120 = (t119 + 72U);
    t121 = *((char **)t120);
    t122 = (t1 + 5528);
    t123 = (t122 + 56U);
    t124 = *((char **)t123);
    t125 = (t1 + 1472);
    t126 = *((char **)t125);
    memset(t127, 0, 8);
    xsi_vlog_signed_multiply(t127, 32, t124, 32, t126, 32);
    t125 = ((char*)((ng1)));
    xsi_vlog_get_indexed_partselect(t92, 1, t118, ((int*)(t121)), 2, t127, 32, 1, t125, 32, 1, 1);
    t56 = *((unsigned int *)t45);
    t58 = *((unsigned int *)t92);
    t59 = (t56 & t58);
    *((unsigned int *)t128) = t59;
    t129 = (t45 + 4);
    t130 = (t92 + 4);
    t131 = (t128 + 4);
    t60 = *((unsigned int *)t129);
    t64 = *((unsigned int *)t130);
    t65 = (t60 | t64);
    *((unsigned int *)t131) = t65;
    t66 = *((unsigned int *)t131);
    t67 = (t66 != 0);
    if (t67 == 1)
        goto LAB50;

LAB51:
LAB52:    t88 = *((unsigned int *)t6);
    t99 = *((unsigned int *)t128);
    t102 = (t88 | t99);
    *((unsigned int *)t134) = t102;
    t135 = (t6 + 4);
    t136 = (t128 + 4);
    t137 = (t134 + 4);
    t106 = *((unsigned int *)t135);
    t109 = *((unsigned int *)t136);
    t111 = (t106 | t109);
    *((unsigned int *)t137) = t111;
    t112 = *((unsigned int *)t137);
    t138 = (t112 != 0);
    if (t138 == 1)
        goto LAB53;

LAB54:
LAB55:    t153 = (t1 + 5688);
    t157 = (t1 + 5688);
    t158 = (t157 + 72U);
    t159 = *((char **)t158);
    t160 = (t1 + 5528);
    t161 = (t160 + 56U);
    t162 = *((char **)t161);
    t163 = (t1 + 1472);
    t164 = *((char **)t163);
    memset(t165, 0, 8);
    xsi_vlog_signed_multiply(t165, 32, t162, 32, t164, 32);
    t163 = ((char*)((ng1)));
    xsi_vlog_convert_indexed_partindices(t154, t155, t156, ((int*)(t159)), 2, t165, 32, 1, t163, 32, 1, 1);
    t166 = (t154 + 4);
    t167 = *((unsigned int *)t166);
    t104 = (!(t167));
    t168 = (t155 + 4);
    t169 = *((unsigned int *)t168);
    t107 = (!(t169));
    t108 = (t104 && t107);
    t170 = (t156 + 4);
    t171 = *((unsigned int *)t170);
    t110 = (!(t171));
    t113 = (t108 && t110);
    if (t113 == 1)
        goto LAB56;

LAB57:    t4 = (t1 + 280);
    xsi_vlog_namedbase_popprocess(t4);

LAB31:    xsi_vlog_dispose_subprogram_invocation(t2);
    xsi_set_current_line(92, ng0);
    t4 = (t1 + 5528);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng1)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t9, 32, t10, 32);
    t11 = (t1 + 5528);
    xsi_vlogvar_assign_value(t11, t5, 0, 0, 32);
    goto LAB27;

LAB35:    t96 = (t91 + 4);
    *((unsigned int *)t91) = 1;
    *((unsigned int *)t96) = 1;
    goto LAB36;

LAB37:    *((unsigned int *)t90) = 1;
    goto LAB40;

LAB39:    t98 = (t90 + 4);
    *((unsigned int *)t90) = 1;
    *((unsigned int *)t98) = 1;
    goto LAB40;

LAB41:    t105 = ((char*)((ng3)));
    goto LAB42;

LAB43:    t115 = ((char*)((ng4)));
    goto LAB44;

LAB45:    xsi_vlog_unsigned_bit_combine(t57, 1, t105, 1, t115, 1);
    goto LAB49;

LAB47:    memcpy(t57, t105, 8);
    goto LAB49;

LAB50:    t68 = *((unsigned int *)t128);
    t69 = *((unsigned int *)t131);
    *((unsigned int *)t128) = (t68 | t69);
    t132 = (t45 + 4);
    t133 = (t92 + 4);
    t70 = *((unsigned int *)t45);
    t73 = (~(t70));
    t74 = *((unsigned int *)t132);
    t75 = (~(t74));
    t76 = *((unsigned int *)t92);
    t77 = (~(t76));
    t78 = *((unsigned int *)t133);
    t79 = (~(t78));
    t81 = (t73 & t75);
    t82 = (t77 & t79);
    t80 = (~(t81));
    t83 = (~(t82));
    t84 = *((unsigned int *)t131);
    *((unsigned int *)t131) = (t84 & t80);
    t85 = *((unsigned int *)t131);
    *((unsigned int *)t131) = (t85 & t83);
    t86 = *((unsigned int *)t128);
    *((unsigned int *)t128) = (t86 & t80);
    t87 = *((unsigned int *)t128);
    *((unsigned int *)t128) = (t87 & t83);
    goto LAB52;

LAB53:    t139 = *((unsigned int *)t134);
    t140 = *((unsigned int *)t137);
    *((unsigned int *)t134) = (t139 | t140);
    t141 = (t6 + 4);
    t142 = (t128 + 4);
    t143 = *((unsigned int *)t141);
    t144 = (~(t143));
    t145 = *((unsigned int *)t6);
    t100 = (t145 & t144);
    t146 = *((unsigned int *)t142);
    t147 = (~(t146));
    t148 = *((unsigned int *)t128);
    t103 = (t148 & t147);
    t149 = (~(t100));
    t150 = (~(t103));
    t151 = *((unsigned int *)t137);
    *((unsigned int *)t137) = (t151 & t149);
    t152 = *((unsigned int *)t137);
    *((unsigned int *)t137) = (t152 & t150);
    goto LAB55;

LAB56:    t172 = *((unsigned int *)t156);
    t114 = (t172 + 0);
    t173 = *((unsigned int *)t154);
    t174 = *((unsigned int *)t155);
    t175 = (t173 - t174);
    t176 = (t175 + 1);
    xsi_vlogvar_assign_value(t153, t134, t114, *((unsigned int *)t155), t176);
    goto LAB57;

}

static int sp_f_mux4(char *t1, char *t2)
{
    char t5[8];
    char t6[8];
    char t7[8];
    char t12[8];
    char t45[8];
    char t57[8];
    char t90[8];
    char t91[8];
    char t92[8];
    char t127[8];
    char t128[8];
    char t134[8];
    char t154[8];
    char t155[8];
    char t156[8];
    char t165[8];
    int t0;
    char *t3;
    char *t4;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    unsigned int t15;
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
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    char *t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    int t81;
    int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    char *t93;
    char *t94;
    char *t95;
    char *t96;
    char *t97;
    char *t98;
    unsigned int t99;
    int t100;
    char *t101;
    unsigned int t102;
    int t103;
    int t104;
    char *t105;
    unsigned int t106;
    int t107;
    int t108;
    unsigned int t109;
    int t110;
    unsigned int t111;
    unsigned int t112;
    int t113;
    int t114;
    char *t115;
    char *t116;
    char *t117;
    char *t118;
    char *t119;
    char *t120;
    char *t121;
    char *t122;
    char *t123;
    char *t124;
    char *t125;
    char *t126;
    char *t129;
    char *t130;
    char *t131;
    char *t132;
    char *t133;
    char *t135;
    char *t136;
    char *t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    char *t141;
    char *t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    char *t153;
    char *t157;
    char *t158;
    char *t159;
    char *t160;
    char *t161;
    char *t162;
    char *t163;
    char *t164;
    char *t166;
    unsigned int t167;
    char *t168;
    unsigned int t169;
    char *t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    int t175;
    int t176;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    xsi_set_current_line(108, ng0);

LAB4:    xsi_set_current_line(109, ng0);
    t4 = ((char*)((ng1)));
    t8 = (t1 + 5848);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng2)));
    memset(t12, 0, 8);
    t13 = (t10 + 4);
    t14 = (t11 + 4);
    t15 = *((unsigned int *)t10);
    t16 = *((unsigned int *)t11);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t14);
    t20 = (t18 ^ t19);
    t21 = (t17 | t20);
    t22 = *((unsigned int *)t13);
    t23 = *((unsigned int *)t14);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB8;

LAB5:    if (t24 != 0)
        goto LAB7;

LAB6:    *((unsigned int *)t12) = 1;

LAB8:    memset(t7, 0, 8);
    t28 = (t12 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (~(t29));
    t31 = *((unsigned int *)t12);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB9;

LAB10:    if (*((unsigned int *)t28) != 0)
        goto LAB11;

LAB12:    t35 = (t7 + 4);
    t36 = *((unsigned int *)t7);
    t37 = *((unsigned int *)t35);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB13;

LAB14:    t40 = *((unsigned int *)t7);
    t41 = (~(t40));
    t42 = *((unsigned int *)t35);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t35) > 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t7) > 0)
        goto LAB19;

LAB20:    memcpy(t6, t44, 8);

LAB21:    xsi_vlog_mul_concat(t5, 1, 1, t4, 1U, t6, 1);
    t46 = (t1 + 6008);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    memset(t45, 0, 8);
    t49 = (t45 + 4);
    t50 = (t48 + 4);
    t51 = *((unsigned int *)t48);
    t52 = (t51 >> 0);
    *((unsigned int *)t45) = t52;
    t53 = *((unsigned int *)t50);
    t54 = (t53 >> 0);
    *((unsigned int *)t49) = t54;
    t55 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t55 & 1U);
    t56 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t56 & 1U);
    t58 = *((unsigned int *)t5);
    t59 = *((unsigned int *)t45);
    t60 = (t58 & t59);
    *((unsigned int *)t57) = t60;
    t61 = (t5 + 4);
    t62 = (t45 + 4);
    t63 = (t57 + 4);
    t64 = *((unsigned int *)t61);
    t65 = *((unsigned int *)t62);
    t66 = (t64 | t65);
    *((unsigned int *)t63) = t66;
    t67 = *((unsigned int *)t63);
    t68 = (t67 != 0);
    if (t68 == 1)
        goto LAB22;

LAB23:
LAB24:    t89 = (t1 + 6488);
    t93 = (t1 + 6488);
    t94 = (t93 + 72U);
    t95 = *((char **)t94);
    t96 = ((char*)((ng2)));
    t97 = ((char*)((ng2)));
    xsi_vlog_convert_partindices(t90, t91, t92, ((int*)(t95)), 2, t96, 32, 1, t97, 32, 1);
    t98 = (t90 + 4);
    t99 = *((unsigned int *)t98);
    t100 = (!(t99));
    t101 = (t91 + 4);
    t102 = *((unsigned int *)t101);
    t103 = (!(t102));
    t104 = (t100 && t103);
    t105 = (t92 + 4);
    t106 = *((unsigned int *)t105);
    t107 = (!(t106));
    t108 = (t104 && t107);
    if (t108 == 1)
        goto LAB25;

LAB26:    xsi_set_current_line(110, ng0);
    xsi_set_current_line(110, ng0);
    t4 = ((char*)((ng1)));
    t8 = (t1 + 6328);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 32);

LAB27:    t4 = (t1 + 6328);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng5)));
    memset(t5, 0, 8);
    xsi_vlog_signed_less(t5, 32, t9, 32, t10, 32);
    t11 = (t5 + 4);
    t15 = *((unsigned int *)t11);
    t16 = (~(t15));
    t17 = *((unsigned int *)t5);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB28;

LAB29:    xsi_set_current_line(115, ng0);
    t4 = (t1 + 6488);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    memset(t5, 0, 8);
    t10 = (t5 + 4);
    t11 = (t9 + 4);
    t15 = *((unsigned int *)t9);
    t16 = (t15 >> 3);
    *((unsigned int *)t5) = t16;
    t17 = *((unsigned int *)t11);
    t18 = (t17 >> 3);
    *((unsigned int *)t10) = t18;
    t19 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t19 & 1U);
    t20 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t20 & 1U);
    t13 = (t1 + 6168);
    xsi_vlogvar_assign_value(t13, t5, 0, 0, 1);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB7:    t27 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB8;

LAB9:    *((unsigned int *)t7) = 1;
    goto LAB12;

LAB11:    t34 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB12;

LAB13:    t39 = ((char*)((ng3)));
    goto LAB14;

LAB15:    t44 = ((char*)((ng4)));
    goto LAB16;

LAB17:    xsi_vlog_unsigned_bit_combine(t6, 1, t39, 1, t44, 1);
    goto LAB21;

LAB19:    memcpy(t6, t39, 8);
    goto LAB21;

LAB22:    t69 = *((unsigned int *)t57);
    t70 = *((unsigned int *)t63);
    *((unsigned int *)t57) = (t69 | t70);
    t71 = (t5 + 4);
    t72 = (t45 + 4);
    t73 = *((unsigned int *)t5);
    t74 = (~(t73));
    t75 = *((unsigned int *)t71);
    t76 = (~(t75));
    t77 = *((unsigned int *)t45);
    t78 = (~(t77));
    t79 = *((unsigned int *)t72);
    t80 = (~(t79));
    t81 = (t74 & t76);
    t82 = (t78 & t80);
    t83 = (~(t81));
    t84 = (~(t82));
    t85 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t85 & t83);
    t86 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t86 & t84);
    t87 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t87 & t83);
    t88 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t88 & t84);
    goto LAB24;

LAB25:    t109 = *((unsigned int *)t92);
    t110 = (t109 + 0);
    t111 = *((unsigned int *)t90);
    t112 = *((unsigned int *)t91);
    t113 = (t111 - t112);
    t114 = (t113 + 1);
    xsi_vlogvar_assign_value(t89, t57, t110, *((unsigned int *)t91), t114);
    goto LAB26;

LAB28:    xsi_set_current_line(110, ng0);

LAB30:    t13 = (t1 + 576);
    xsi_vlog_namedbase_setdisablestate(t13, &&LAB31);
    xsi_vlog_namedbase_pushprocess(t13, t2);

LAB32:    xsi_set_current_line(111, ng0);
    t14 = (t1 + 6488);
    t27 = (t14 + 56U);
    t28 = *((char **)t27);
    t34 = (t1 + 6488);
    t35 = (t34 + 72U);
    t39 = *((char **)t35);
    t44 = (t1 + 6328);
    t46 = (t44 + 56U);
    t47 = *((char **)t46);
    t48 = ((char*)((ng1)));
    memset(t7, 0, 8);
    xsi_vlog_signed_minus(t7, 32, t47, 32, t48, 32);
    t49 = (t1 + 1472);
    t50 = *((char **)t49);
    memset(t12, 0, 8);
    xsi_vlog_signed_multiply(t12, 32, t7, 32, t50, 32);
    t49 = ((char*)((ng1)));
    xsi_vlog_get_indexed_partselect(t6, 1, t28, ((int*)(t39)), 2, t12, 32, 1, t49, 32, 1, 1);
    t61 = ((char*)((ng1)));
    t62 = (t1 + 5848);
    t63 = (t62 + 56U);
    t71 = *((char **)t63);
    t72 = (t1 + 6328);
    t89 = (t72 + 56U);
    t93 = *((char **)t89);
    memset(t91, 0, 8);
    t94 = (t71 + 4);
    t95 = (t93 + 4);
    t20 = *((unsigned int *)t71);
    t21 = *((unsigned int *)t93);
    t22 = (t20 ^ t21);
    t23 = *((unsigned int *)t94);
    t24 = *((unsigned int *)t95);
    t25 = (t23 ^ t24);
    t26 = (t22 | t25);
    t29 = *((unsigned int *)t94);
    t30 = *((unsigned int *)t95);
    t31 = (t29 | t30);
    t32 = (~(t31));
    t33 = (t26 & t32);
    if (t33 != 0)
        goto LAB36;

LAB33:    if (t31 != 0)
        goto LAB35;

LAB34:    *((unsigned int *)t91) = 1;

LAB36:    memset(t90, 0, 8);
    t97 = (t91 + 4);
    t36 = *((unsigned int *)t97);
    t37 = (~(t36));
    t38 = *((unsigned int *)t91);
    t40 = (t38 & t37);
    t41 = (t40 & 1U);
    if (t41 != 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t97) != 0)
        goto LAB39;

LAB40:    t101 = (t90 + 4);
    t42 = *((unsigned int *)t90);
    t43 = *((unsigned int *)t101);
    t51 = (t42 || t43);
    if (t51 > 0)
        goto LAB41;

LAB42:    t52 = *((unsigned int *)t90);
    t53 = (~(t52));
    t54 = *((unsigned int *)t101);
    t55 = (t53 || t54);
    if (t55 > 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t101) > 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t90) > 0)
        goto LAB47;

LAB48:    memcpy(t57, t115, 8);

LAB49:    xsi_vlog_mul_concat(t45, 1, 1, t61, 1U, t57, 1);
    t116 = (t1 + 6008);
    t117 = (t116 + 56U);
    t118 = *((char **)t117);
    t119 = (t1 + 6008);
    t120 = (t119 + 72U);
    t121 = *((char **)t120);
    t122 = (t1 + 6328);
    t123 = (t122 + 56U);
    t124 = *((char **)t123);
    t125 = (t1 + 1472);
    t126 = *((char **)t125);
    memset(t127, 0, 8);
    xsi_vlog_signed_multiply(t127, 32, t124, 32, t126, 32);
    t125 = ((char*)((ng1)));
    xsi_vlog_get_indexed_partselect(t92, 1, t118, ((int*)(t121)), 2, t127, 32, 1, t125, 32, 1, 1);
    t56 = *((unsigned int *)t45);
    t58 = *((unsigned int *)t92);
    t59 = (t56 & t58);
    *((unsigned int *)t128) = t59;
    t129 = (t45 + 4);
    t130 = (t92 + 4);
    t131 = (t128 + 4);
    t60 = *((unsigned int *)t129);
    t64 = *((unsigned int *)t130);
    t65 = (t60 | t64);
    *((unsigned int *)t131) = t65;
    t66 = *((unsigned int *)t131);
    t67 = (t66 != 0);
    if (t67 == 1)
        goto LAB50;

LAB51:
LAB52:    t88 = *((unsigned int *)t6);
    t99 = *((unsigned int *)t128);
    t102 = (t88 | t99);
    *((unsigned int *)t134) = t102;
    t135 = (t6 + 4);
    t136 = (t128 + 4);
    t137 = (t134 + 4);
    t106 = *((unsigned int *)t135);
    t109 = *((unsigned int *)t136);
    t111 = (t106 | t109);
    *((unsigned int *)t137) = t111;
    t112 = *((unsigned int *)t137);
    t138 = (t112 != 0);
    if (t138 == 1)
        goto LAB53;

LAB54:
LAB55:    t153 = (t1 + 6488);
    t157 = (t1 + 6488);
    t158 = (t157 + 72U);
    t159 = *((char **)t158);
    t160 = (t1 + 6328);
    t161 = (t160 + 56U);
    t162 = *((char **)t161);
    t163 = (t1 + 1472);
    t164 = *((char **)t163);
    memset(t165, 0, 8);
    xsi_vlog_signed_multiply(t165, 32, t162, 32, t164, 32);
    t163 = ((char*)((ng1)));
    xsi_vlog_convert_indexed_partindices(t154, t155, t156, ((int*)(t159)), 2, t165, 32, 1, t163, 32, 1, 1);
    t166 = (t154 + 4);
    t167 = *((unsigned int *)t166);
    t104 = (!(t167));
    t168 = (t155 + 4);
    t169 = *((unsigned int *)t168);
    t107 = (!(t169));
    t108 = (t104 && t107);
    t170 = (t156 + 4);
    t171 = *((unsigned int *)t170);
    t110 = (!(t171));
    t113 = (t108 && t110);
    if (t113 == 1)
        goto LAB56;

LAB57:    t4 = (t1 + 576);
    xsi_vlog_namedbase_popprocess(t4);

LAB31:    xsi_vlog_dispose_subprogram_invocation(t2);
    xsi_set_current_line(110, ng0);
    t4 = (t1 + 6328);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng1)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t9, 32, t10, 32);
    t11 = (t1 + 6328);
    xsi_vlogvar_assign_value(t11, t5, 0, 0, 32);
    goto LAB27;

LAB35:    t96 = (t91 + 4);
    *((unsigned int *)t91) = 1;
    *((unsigned int *)t96) = 1;
    goto LAB36;

LAB37:    *((unsigned int *)t90) = 1;
    goto LAB40;

LAB39:    t98 = (t90 + 4);
    *((unsigned int *)t90) = 1;
    *((unsigned int *)t98) = 1;
    goto LAB40;

LAB41:    t105 = ((char*)((ng3)));
    goto LAB42;

LAB43:    t115 = ((char*)((ng4)));
    goto LAB44;

LAB45:    xsi_vlog_unsigned_bit_combine(t57, 1, t105, 1, t115, 1);
    goto LAB49;

LAB47:    memcpy(t57, t105, 8);
    goto LAB49;

LAB50:    t68 = *((unsigned int *)t128);
    t69 = *((unsigned int *)t131);
    *((unsigned int *)t128) = (t68 | t69);
    t132 = (t45 + 4);
    t133 = (t92 + 4);
    t70 = *((unsigned int *)t45);
    t73 = (~(t70));
    t74 = *((unsigned int *)t132);
    t75 = (~(t74));
    t76 = *((unsigned int *)t92);
    t77 = (~(t76));
    t78 = *((unsigned int *)t133);
    t79 = (~(t78));
    t81 = (t73 & t75);
    t82 = (t77 & t79);
    t80 = (~(t81));
    t83 = (~(t82));
    t84 = *((unsigned int *)t131);
    *((unsigned int *)t131) = (t84 & t80);
    t85 = *((unsigned int *)t131);
    *((unsigned int *)t131) = (t85 & t83);
    t86 = *((unsigned int *)t128);
    *((unsigned int *)t128) = (t86 & t80);
    t87 = *((unsigned int *)t128);
    *((unsigned int *)t128) = (t87 & t83);
    goto LAB52;

LAB53:    t139 = *((unsigned int *)t134);
    t140 = *((unsigned int *)t137);
    *((unsigned int *)t134) = (t139 | t140);
    t141 = (t6 + 4);
    t142 = (t128 + 4);
    t143 = *((unsigned int *)t141);
    t144 = (~(t143));
    t145 = *((unsigned int *)t6);
    t100 = (t145 & t144);
    t146 = *((unsigned int *)t142);
    t147 = (~(t146));
    t148 = *((unsigned int *)t128);
    t103 = (t148 & t147);
    t149 = (~(t100));
    t150 = (~(t103));
    t151 = *((unsigned int *)t137);
    *((unsigned int *)t137) = (t151 & t149);
    t152 = *((unsigned int *)t137);
    *((unsigned int *)t137) = (t152 & t150);
    goto LAB55;

LAB56:    t172 = *((unsigned int *)t156);
    t114 = (t172 + 0);
    t173 = *((unsigned int *)t154);
    t174 = *((unsigned int *)t155);
    t175 = (t173 - t174);
    t176 = (t175 + 1);
    xsi_vlogvar_assign_value(t153, t134, t114, *((unsigned int *)t155), t176);
    goto LAB57;

}

static void Cont_119_0(char *t0)
{
    char t4[8];
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;

LAB0:    t1 = (t0 + 7408U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(119, ng0);
    t2 = (t0 + 3688U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 3528U);
    t6 = *((char **)t5);
    xsi_vlog_mul_concat(t4, 1, 1, t2, 1U, t6, 1);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t4);
    t10 = (t8 & t9);
    *((unsigned int *)t7) = t10;
    t5 = (t3 + 4);
    t11 = (t4 + 4);
    t12 = (t7 + 4);
    t13 = *((unsigned int *)t5);
    t14 = *((unsigned int *)t11);
    t15 = (t13 | t14);
    *((unsigned int *)t12) = t15;
    t16 = *((unsigned int *)t12);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB4;

LAB5:
LAB6:    t38 = (t0 + 8336);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    memset(t42, 0, 8);
    t43 = 1U;
    t44 = t43;
    t45 = (t7 + 4);
    t46 = *((unsigned int *)t7);
    t43 = (t43 & t46);
    t47 = *((unsigned int *)t45);
    t44 = (t44 & t47);
    t48 = (t42 + 4);
    t49 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t49 | t43);
    t50 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t50 | t44);
    xsi_driver_vfirst_trans(t38, 0, 0);
    t51 = (t0 + 8224);
    *((int *)t51) = 1;

LAB1:    return;
LAB4:    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t7) = (t18 | t19);
    t20 = (t3 + 4);
    t21 = (t4 + 4);
    t22 = *((unsigned int *)t3);
    t23 = (~(t22));
    t24 = *((unsigned int *)t20);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (~(t26));
    t28 = *((unsigned int *)t21);
    t29 = (~(t28));
    t30 = (t23 & t25);
    t31 = (t27 & t29);
    t32 = (~(t30));
    t33 = (~(t31));
    t34 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t34 & t32);
    t35 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t35 & t33);
    t36 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t36 & t32);
    t37 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t37 & t33);
    goto LAB6;

}

static void Cont_139_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t25[8];
    char t36[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;

LAB0:    t1 = (t0 + 7656U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(139, ng0);
    t2 = (t0 + 3048U);
    t5 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    memset(t4, 0, 8);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t6);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t14) != 0)
        goto LAB6;

LAB7:    t21 = (t4 + 4);
    t22 = *((unsigned int *)t4);
    t23 = *((unsigned int *)t21);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB8;

LAB9:    t32 = *((unsigned int *)t4);
    t33 = (~(t32));
    t34 = *((unsigned int *)t21);
    t35 = (t33 || t34);
    if (t35 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t21) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t36, 8);

LAB16:    t43 = (t0 + 8400);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    memset(t47, 0, 8);
    t48 = 1U;
    t49 = t48;
    t50 = (t3 + 4);
    t51 = *((unsigned int *)t3);
    t48 = (t48 & t51);
    t52 = *((unsigned int *)t50);
    t49 = (t49 & t52);
    t53 = (t47 + 4);
    t54 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t54 | t48);
    t55 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t55 | t49);
    xsi_driver_vfirst_trans(t43, 0, 0);
    t56 = (t0 + 8240);
    *((int *)t56) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB7;

LAB8:    t26 = (t0 + 3208U);
    t27 = *((char **)t26);
    t26 = (t0 + 3168U);
    t28 = (t26 + 72U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng6)));
    t31 = ((char*)((ng1)));
    xsi_vlog_get_indexed_partselect(t25, 1, t27, ((int*)(t29)), 2, t30, 32, 1, t31, 32, 1, 1);
    goto LAB9;

LAB10:    t37 = (t0 + 3208U);
    t38 = *((char **)t37);
    t37 = (t0 + 3168U);
    t39 = (t37 + 72U);
    t40 = *((char **)t39);
    t41 = ((char*)((ng5)));
    t42 = ((char*)((ng1)));
    xsi_vlog_get_indexed_partselect(t36, 1, t38, ((int*)(t40)), 2, t41, 32, 1, t42, 32, 1, 1);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t25, 1, t36, 1);
    goto LAB16;

LAB14:    memcpy(t3, t25, 8);
    goto LAB16;

}

static void Cont_170_2(char *t0)
{
    char t3[8];
    char t12[8];
    char t36[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t13;
    char *t14;
    char *t15;
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
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    int t32;
    char *t33;
    char *t34;
    char *t35;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;

LAB0:    t1 = (t0 + 7904U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(170, ng0);
    t2 = (t0 + 3048U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 3U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 3U);
    t13 = (t0 + 3208U);
    t14 = *((char **)t13);
    t13 = (t0 + 3168U);
    t15 = (t13 + 72U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng2)));
    t18 = ((char*)((ng5)));
    xsi_vlog_get_indexed_partselect(t12, 4, t14, ((int*)(t16)), 2, t17, 32, 1, t18, 32, 1, 1);
    t19 = (t0 + 7712);
    t20 = (t0 + 2416);
    t21 = xsi_create_subprogram_invocation(t19, 0, t0, t20, 0, 0);
    t22 = (t0 + 5848);
    xsi_vlogvar_assign_value(t22, t3, 0, 0, 2);
    t23 = (t0 + 6008);
    xsi_vlogvar_assign_value(t23, t12, 0, 0, 4);

LAB4:    t24 = (t0 + 7808);
    t25 = *((char **)t24);
    t26 = (t25 + 80U);
    t27 = *((char **)t26);
    t28 = (t27 + 272U);
    t29 = *((char **)t28);
    t30 = (t29 + 0U);
    t31 = *((char **)t30);
    t32 = ((int  (*)(char *, char *))t31)(t0, t25);
    if (t32 != 0)
        goto LAB6;

LAB5:    t25 = (t0 + 7808);
    t33 = *((char **)t25);
    t25 = (t0 + 6168);
    t34 = (t25 + 56U);
    t35 = *((char **)t34);
    memcpy(t36, t35, 8);
    t37 = (t0 + 2416);
    t38 = (t0 + 7712);
    t39 = 0;
    xsi_delete_subprogram_invocation(t37, t33, t0, t38, t39);
    t40 = (t0 + 8464);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    memset(t44, 0, 8);
    t45 = 1U;
    t46 = t45;
    t47 = (t36 + 4);
    t48 = *((unsigned int *)t36);
    t45 = (t45 & t48);
    t49 = *((unsigned int *)t47);
    t46 = (t46 & t49);
    t50 = (t44 + 4);
    t51 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t51 | t45);
    t52 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t52 | t46);
    xsi_driver_vfirst_trans(t40, 0, 0);
    t53 = (t0 + 8256);
    *((int *)t53) = 1;

LAB1:    return;
LAB6:    t24 = (t0 + 7904U);
    *((char **)t24) = &&LAB4;
    goto LAB1;

}


extern void axi_interconnect_v1_06_a_m_00000000000138575744_3261929625_init()
{
	static char *pe[] = {(void *)Cont_119_0,(void *)Cont_139_1,(void *)Cont_170_2};
	static char *se[] = {(void *)sp_f_mux,(void *)sp_f_mux4};
	xsi_register_didat("axi_interconnect_v1_06_a_m_00000000000138575744_3261929625", "isim/isim_system.exe.sim/axi_interconnect_v1_06_a/m_00000000000138575744_3261929625.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
