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

/* This file is designed for use with ISim build 0x8ddf5b5d */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/rahmoun/Projet_systeme_info/ALU.vhd";
extern char *IEEE_P_3620187407;
extern char *IEEE_P_2592010699;

unsigned char ieee_p_3620187407_sub_1306455576380142462_3965413181(char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_1496620905533613331_3965413181(char *, char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_1496620905533649268_3965413181(char *, char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_1496620905533721142_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_0832606739_3212880686_p_0(char *t0)
{
    char t5[16];
    char t11[16];
    char t13[16];
    char t18[16];
    char t34[16];
    char t40[16];
    char t42[16];
    char t47[16];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    unsigned char t10;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned char t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t35;
    char *t36;
    int t37;
    unsigned int t38;
    unsigned char t39;
    char *t41;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned char t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;

LAB0:    xsi_set_current_line(49, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 8168U);
    t3 = (t0 + 8309);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 7;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (7 - 0);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    t10 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t3, t5);
    if (t10 != 0)
        goto LAB3;

LAB4:    t30 = (t0 + 1512U);
    t31 = *((char **)t30);
    t30 = (t0 + 8168U);
    t32 = (t0 + 8317);
    t35 = (t34 + 0U);
    t36 = (t35 + 0U);
    *((int *)t36) = 0;
    t36 = (t35 + 4U);
    *((int *)t36) = 7;
    t36 = (t35 + 8U);
    *((int *)t36) = 1;
    t37 = (7 - 0);
    t38 = (t37 * 1);
    t38 = (t38 + 1);
    t36 = (t35 + 12U);
    *((unsigned int *)t36) = t38;
    t39 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t31, t30, t32, t34);
    if (t39 != 0)
        goto LAB7;

LAB8:
LAB2:    t59 = (t0 + 5432);
    *((int *)t59) = 1;

LAB1:    return;
LAB3:    t7 = (t0 + 1032U);
    t12 = *((char **)t7);
    t14 = ((IEEE_P_2592010699) + 4000);
    t15 = (t0 + 8120U);
    t7 = xsi_base_array_concat(t7, t13, t14, (char)99, (unsigned char)2, (char)97, t12, t15, (char)101);
    t16 = (t0 + 1192U);
    t17 = *((char **)t16);
    t19 = ((IEEE_P_2592010699) + 4000);
    t20 = (t0 + 8136U);
    t16 = xsi_base_array_concat(t16, t18, t19, (char)99, (unsigned char)2, (char)97, t17, t20, (char)101);
    t21 = ieee_p_3620187407_sub_1496620905533649268_3965413181(IEEE_P_3620187407, t11, t7, t13, t16, t18);
    t22 = (t11 + 12U);
    t9 = *((unsigned int *)t22);
    t23 = (1U * t9);
    t24 = (17U != t23);
    if (t24 == 1)
        goto LAB5;

LAB6:    t25 = (t0 + 5608);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    memcpy(t29, t21, 17U);
    xsi_driver_first_trans_fast(t25);
    goto LAB2;

LAB5:    xsi_size_not_matching(17U, t23, 0);
    goto LAB6;

LAB7:    t36 = (t0 + 1032U);
    t41 = *((char **)t36);
    t43 = ((IEEE_P_2592010699) + 4000);
    t44 = (t0 + 8120U);
    t36 = xsi_base_array_concat(t36, t42, t43, (char)99, (unsigned char)2, (char)97, t41, t44, (char)101);
    t45 = (t0 + 1192U);
    t46 = *((char **)t45);
    t48 = ((IEEE_P_2592010699) + 4000);
    t49 = (t0 + 8136U);
    t45 = xsi_base_array_concat(t45, t47, t48, (char)99, (unsigned char)2, (char)97, t46, t49, (char)101);
    t50 = ieee_p_3620187407_sub_1496620905533721142_3965413181(IEEE_P_3620187407, t40, t36, t42, t45, t47);
    t51 = (t40 + 12U);
    t38 = *((unsigned int *)t51);
    t52 = (1U * t38);
    t53 = (17U != t52);
    if (t53 == 1)
        goto LAB9;

LAB10:    t54 = (t0 + 5608);
    t55 = (t54 + 56U);
    t56 = *((char **)t55);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    memcpy(t58, t50, 17U);
    xsi_driver_first_trans_fast(t54);
    goto LAB2;

LAB9:    xsi_size_not_matching(17U, t52, 0);
    goto LAB10;

}

static void work_a_0832606739_3212880686_p_1(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(51, ng0);

LAB3:    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t2 = (t0 + 8120U);
    t4 = (t0 + 1192U);
    t5 = *((char **)t4);
    t4 = (t0 + 8136U);
    t6 = ieee_p_3620187407_sub_1496620905533613331_3965413181(IEEE_P_3620187407, t1, t3, t2, t5, t4);
    t7 = (t1 + 12U);
    t8 = *((unsigned int *)t7);
    t9 = (1U * t8);
    t10 = (32U != t9);
    if (t10 == 1)
        goto LAB5;

LAB6:    t11 = (t0 + 5672);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 32U);
    xsi_driver_first_trans_fast(t11);

LAB2:    t16 = (t0 + 5448);
    *((int *)t16) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(32U, t9, 0);
    goto LAB6;

}

static void work_a_0832606739_3212880686_p_2(char *t0)
{
    char t10[16];
    char t19[16];
    char t25[16];
    char t36[16];
    char t70[16];
    char t105[16];
    char t140[16];
    unsigned char t1;
    unsigned char t2;
    unsigned char t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t11;
    char *t12;
    int t13;
    unsigned int t14;
    unsigned char t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t20;
    char *t21;
    int t22;
    unsigned int t23;
    char *t26;
    char *t27;
    int t28;
    unsigned char t29;
    unsigned char t30;
    unsigned char t31;
    unsigned char t32;
    char *t33;
    char *t34;
    char *t37;
    char *t38;
    int t39;
    unsigned char t40;
    char *t41;
    int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned char t45;
    unsigned char t46;
    char *t47;
    char *t48;
    int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned char t53;
    unsigned char t54;
    char *t55;
    char *t56;
    int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned char t61;
    unsigned char t62;
    unsigned char t63;
    unsigned char t64;
    unsigned char t65;
    char *t66;
    char *t67;
    char *t68;
    char *t71;
    char *t72;
    int t73;
    unsigned int t74;
    unsigned char t75;
    char *t76;
    int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned char t80;
    unsigned char t81;
    char *t82;
    char *t83;
    int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned char t88;
    unsigned char t89;
    char *t90;
    char *t91;
    int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned char t96;
    unsigned char t97;
    unsigned char t98;
    unsigned char t99;
    unsigned char t100;
    char *t101;
    char *t102;
    char *t103;
    char *t106;
    char *t107;
    int t108;
    unsigned int t109;
    unsigned char t110;
    char *t111;
    int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned char t115;
    unsigned char t116;
    char *t117;
    char *t118;
    int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned char t123;
    unsigned char t124;
    char *t125;
    char *t126;
    int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned char t131;
    unsigned char t132;
    unsigned char t133;
    unsigned char t134;
    unsigned char t135;
    char *t136;
    char *t137;
    char *t138;
    char *t141;
    char *t142;
    int t143;
    unsigned int t144;
    unsigned char t145;
    char *t146;
    int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned char t150;
    unsigned char t151;
    char *t152;
    char *t153;
    int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned char t158;
    unsigned char t159;
    char *t160;
    char *t161;
    int t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    unsigned char t166;
    unsigned char t167;
    char *t168;
    char *t169;
    char *t170;
    char *t171;
    char *t172;
    char *t173;
    char *t174;
    char *t175;
    char *t176;
    char *t177;
    char *t178;

LAB0:    xsi_set_current_line(55, ng0);
    t6 = (t0 + 1512U);
    t7 = *((char **)t6);
    t6 = (t0 + 8168U);
    t8 = (t0 + 8325);
    t11 = (t10 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 0;
    t12 = (t11 + 4U);
    *((int *)t12) = 7;
    t12 = (t11 + 8U);
    *((int *)t12) = 1;
    t13 = (7 - 0);
    t14 = (t13 * 1);
    t14 = (t14 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t14;
    t15 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t7, t6, t8, t10);
    if (t15 == 1)
        goto LAB17;

LAB18:    t5 = (unsigned char)0;

LAB19:    if (t5 == 1)
        goto LAB14;

LAB15:    t27 = (t0 + 1512U);
    t33 = *((char **)t27);
    t27 = (t0 + 8168U);
    t34 = (t0 + 8349);
    t37 = (t36 + 0U);
    t38 = (t37 + 0U);
    *((int *)t38) = 0;
    t38 = (t37 + 4U);
    *((int *)t38) = 7;
    t38 = (t37 + 8U);
    *((int *)t38) = 1;
    t39 = (7 - 0);
    t23 = (t39 * 1);
    t23 = (t23 + 1);
    t38 = (t37 + 12U);
    *((unsigned int *)t38) = t23;
    t40 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t33, t27, t34, t36);
    if (t40 == 1)
        goto LAB26;

LAB27:    t32 = (unsigned char)0;

LAB28:    if (t32 == 1)
        goto LAB23;

LAB24:    t31 = (unsigned char)0;

LAB25:    if (t31 == 1)
        goto LAB20;

LAB21:    t30 = (unsigned char)0;

LAB22:    t4 = t30;

LAB16:    if (t4 == 1)
        goto LAB11;

LAB12:    t66 = (t0 + 1512U);
    t67 = *((char **)t66);
    t66 = (t0 + 8168U);
    t68 = (t0 + 8357);
    t71 = (t70 + 0U);
    t72 = (t71 + 0U);
    *((int *)t72) = 0;
    t72 = (t71 + 4U);
    *((int *)t72) = 7;
    t72 = (t71 + 8U);
    *((int *)t72) = 1;
    t73 = (7 - 0);
    t74 = (t73 * 1);
    t74 = (t74 + 1);
    t72 = (t71 + 12U);
    *((unsigned int *)t72) = t74;
    t75 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t67, t66, t68, t70);
    if (t75 == 1)
        goto LAB35;

LAB36:    t65 = (unsigned char)0;

LAB37:    if (t65 == 1)
        goto LAB32;

LAB33:    t64 = (unsigned char)0;

LAB34:    if (t64 == 1)
        goto LAB29;

LAB30:    t63 = (unsigned char)0;

LAB31:    t3 = t63;

LAB13:    if (t3 == 1)
        goto LAB8;

LAB9:    t101 = (t0 + 1512U);
    t102 = *((char **)t101);
    t101 = (t0 + 8168U);
    t103 = (t0 + 8365);
    t106 = (t105 + 0U);
    t107 = (t106 + 0U);
    *((int *)t107) = 0;
    t107 = (t106 + 4U);
    *((int *)t107) = 7;
    t107 = (t106 + 8U);
    *((int *)t107) = 1;
    t108 = (7 - 0);
    t109 = (t108 * 1);
    t109 = (t109 + 1);
    t107 = (t106 + 12U);
    *((unsigned int *)t107) = t109;
    t110 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t102, t101, t103, t105);
    if (t110 == 1)
        goto LAB44;

LAB45:    t100 = (unsigned char)0;

LAB46:    if (t100 == 1)
        goto LAB41;

LAB42:    t99 = (unsigned char)0;

LAB43:    if (t99 == 1)
        goto LAB38;

LAB39:    t98 = (unsigned char)0;

LAB40:    t2 = t98;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t136 = (t0 + 1512U);
    t137 = *((char **)t136);
    t136 = (t0 + 8168U);
    t138 = (t0 + 8373);
    t141 = (t140 + 0U);
    t142 = (t141 + 0U);
    *((int *)t142) = 0;
    t142 = (t141 + 4U);
    *((int *)t142) = 7;
    t142 = (t141 + 8U);
    *((int *)t142) = 1;
    t143 = (7 - 0);
    t144 = (t143 * 1);
    t144 = (t144 + 1);
    t142 = (t141 + 12U);
    *((unsigned int *)t142) = t144;
    t145 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t137, t136, t138, t140);
    if (t145 == 1)
        goto LAB53;

LAB54:    t135 = (unsigned char)0;

LAB55:    if (t135 == 1)
        goto LAB50;

LAB51:    t134 = (unsigned char)0;

LAB52:    if (t134 == 1)
        goto LAB47;

LAB48:    t133 = (unsigned char)0;

LAB49:    t1 = t133;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB56:    t173 = (t0 + 5736);
    t174 = (t173 + 56U);
    t175 = *((char **)t174);
    t176 = (t175 + 56U);
    t177 = *((char **)t176);
    *((unsigned char *)t177) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t173);

LAB2:    t178 = (t0 + 5464);
    *((int *)t178) = 1;

LAB1:    return;
LAB3:    t168 = (t0 + 5736);
    t169 = (t168 + 56U);
    t170 = *((char **)t169);
    t171 = (t170 + 56U);
    t172 = *((char **)t171);
    *((unsigned char *)t172) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t168);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t2 = (unsigned char)1;
    goto LAB10;

LAB11:    t3 = (unsigned char)1;
    goto LAB13;

LAB14:    t4 = (unsigned char)1;
    goto LAB16;

LAB17:    t12 = (t0 + 2472U);
    t16 = *((char **)t12);
    t14 = (31 - 31);
    t17 = (t14 * 1U);
    t18 = (0 + t17);
    t12 = (t16 + t18);
    t20 = (t19 + 0U);
    t21 = (t20 + 0U);
    *((int *)t21) = 31;
    t21 = (t20 + 4U);
    *((int *)t21) = 16;
    t21 = (t20 + 8U);
    *((int *)t21) = -1;
    t22 = (16 - 31);
    t23 = (t22 * -1);
    t23 = (t23 + 1);
    t21 = (t20 + 12U);
    *((unsigned int *)t21) = t23;
    t21 = (t0 + 8333);
    t26 = (t25 + 0U);
    t27 = (t26 + 0U);
    *((int *)t27) = 0;
    t27 = (t26 + 4U);
    *((int *)t27) = 15;
    t27 = (t26 + 8U);
    *((int *)t27) = 1;
    t28 = (15 - 0);
    t23 = (t28 * 1);
    t23 = (t23 + 1);
    t27 = (t26 + 12U);
    *((unsigned int *)t27) = t23;
    t29 = ieee_p_3620187407_sub_1306455576380142462_3965413181(IEEE_P_3620187407, t12, t19, t21, t25);
    t5 = t29;
    goto LAB19;

LAB20:    t55 = (t0 + 2312U);
    t56 = *((char **)t55);
    t57 = (15 - 16);
    t58 = (t57 * -1);
    t59 = (1U * t58);
    t60 = (0 + t59);
    t55 = (t56 + t60);
    t61 = *((unsigned char *)t55);
    t62 = (t61 == (unsigned char)2);
    t30 = t62;
    goto LAB22;

LAB23:    t47 = (t0 + 1192U);
    t48 = *((char **)t47);
    t49 = (15 - 15);
    t50 = (t49 * -1);
    t51 = (1U * t50);
    t52 = (0 + t51);
    t47 = (t48 + t52);
    t53 = *((unsigned char *)t47);
    t54 = (t53 == (unsigned char)3);
    t31 = t54;
    goto LAB25;

LAB26:    t38 = (t0 + 1032U);
    t41 = *((char **)t38);
    t42 = (15 - 15);
    t23 = (t42 * -1);
    t43 = (1U * t23);
    t44 = (0 + t43);
    t38 = (t41 + t44);
    t45 = *((unsigned char *)t38);
    t46 = (t45 == (unsigned char)3);
    t32 = t46;
    goto LAB28;

LAB29:    t90 = (t0 + 2312U);
    t91 = *((char **)t90);
    t92 = (15 - 16);
    t93 = (t92 * -1);
    t94 = (1U * t93);
    t95 = (0 + t94);
    t90 = (t91 + t95);
    t96 = *((unsigned char *)t90);
    t97 = (t96 == (unsigned char)3);
    t63 = t97;
    goto LAB31;

LAB32:    t82 = (t0 + 1192U);
    t83 = *((char **)t82);
    t84 = (15 - 15);
    t85 = (t84 * -1);
    t86 = (1U * t85);
    t87 = (0 + t86);
    t82 = (t83 + t87);
    t88 = *((unsigned char *)t82);
    t89 = (t88 == (unsigned char)2);
    t64 = t89;
    goto LAB34;

LAB35:    t72 = (t0 + 1032U);
    t76 = *((char **)t72);
    t77 = (15 - 15);
    t74 = (t77 * -1);
    t78 = (1U * t74);
    t79 = (0 + t78);
    t72 = (t76 + t79);
    t80 = *((unsigned char *)t72);
    t81 = (t80 == (unsigned char)2);
    t65 = t81;
    goto LAB37;

LAB38:    t125 = (t0 + 2312U);
    t126 = *((char **)t125);
    t127 = (15 - 16);
    t128 = (t127 * -1);
    t129 = (1U * t128);
    t130 = (0 + t129);
    t125 = (t126 + t130);
    t131 = *((unsigned char *)t125);
    t132 = (t131 == (unsigned char)3);
    t98 = t132;
    goto LAB40;

LAB41:    t117 = (t0 + 1192U);
    t118 = *((char **)t117);
    t119 = (15 - 15);
    t120 = (t119 * -1);
    t121 = (1U * t120);
    t122 = (0 + t121);
    t117 = (t118 + t122);
    t123 = *((unsigned char *)t117);
    t124 = (t123 == (unsigned char)3);
    t99 = t124;
    goto LAB43;

LAB44:    t107 = (t0 + 1032U);
    t111 = *((char **)t107);
    t112 = (15 - 15);
    t109 = (t112 * -1);
    t113 = (1U * t109);
    t114 = (0 + t113);
    t107 = (t111 + t114);
    t115 = *((unsigned char *)t107);
    t116 = (t115 == (unsigned char)2);
    t100 = t116;
    goto LAB46;

LAB47:    t160 = (t0 + 2312U);
    t161 = *((char **)t160);
    t162 = (15 - 16);
    t163 = (t162 * -1);
    t164 = (1U * t163);
    t165 = (0 + t164);
    t160 = (t161 + t165);
    t166 = *((unsigned char *)t160);
    t167 = (t166 == (unsigned char)2);
    t133 = t167;
    goto LAB49;

LAB50:    t152 = (t0 + 1192U);
    t153 = *((char **)t152);
    t154 = (15 - 15);
    t155 = (t154 * -1);
    t156 = (1U * t155);
    t157 = (0 + t156);
    t152 = (t153 + t157);
    t158 = *((unsigned char *)t152);
    t159 = (t158 == (unsigned char)2);
    t134 = t159;
    goto LAB52;

LAB53:    t142 = (t0 + 1032U);
    t146 = *((char **)t142);
    t147 = (15 - 15);
    t144 = (t147 * -1);
    t148 = (1U * t144);
    t149 = (0 + t148);
    t142 = (t146 + t149);
    t150 = *((unsigned char *)t142);
    t151 = (t150 == (unsigned char)3);
    t135 = t151;
    goto LAB55;

LAB57:    goto LAB2;

}

static void work_a_0832606739_3212880686_p_3(char *t0)
{
    char t5[16];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    unsigned char t10;
    char *t11;
    int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned char t15;
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

LAB0:    xsi_set_current_line(65, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 8168U);
    t3 = (t0 + 8381);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 7;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (7 - 0);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    t10 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t3, t5);
    if (t10 != 0)
        goto LAB3;

LAB4:
LAB5:    t21 = (t0 + 5800);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    *((unsigned char *)t25) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t21);

LAB2:    t26 = (t0 + 5480);
    *((int *)t26) = 1;

LAB1:    return;
LAB3:    t7 = (t0 + 2312U);
    t11 = *((char **)t7);
    t12 = (16 - 16);
    t9 = (t12 * -1);
    t13 = (1U * t9);
    t14 = (0 + t13);
    t7 = (t11 + t14);
    t15 = *((unsigned char *)t7);
    t16 = (t0 + 5800);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = t15;
    xsi_driver_first_trans_fast_port(t16);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_0832606739_3212880686_p_4(char *t0)
{
    char t6[16];
    char t15[16];
    char t32[16];
    unsigned char t1;
    char *t2;
    char *t3;
    char *t4;
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t16;
    char *t17;
    int t18;
    unsigned char t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t33;
    char *t34;
    int t35;
    unsigned int t36;
    unsigned char t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;

LAB0:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 8168U);
    t4 = (t0 + 8389);
    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 7;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t9 = (7 - 0);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t11 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t2, t4, t6);
    if (t11 == 1)
        goto LAB5;

LAB6:    t8 = (t0 + 1512U);
    t12 = *((char **)t8);
    t8 = (t0 + 8168U);
    t13 = (t0 + 8397);
    t16 = (t15 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = 0;
    t17 = (t16 + 4U);
    *((int *)t17) = 7;
    t17 = (t16 + 8U);
    *((int *)t17) = 1;
    t18 = (7 - 0);
    t10 = (t18 * 1);
    t10 = (t10 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t10;
    t19 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t12, t8, t13, t15);
    t1 = t19;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:    t28 = (t0 + 1512U);
    t29 = *((char **)t28);
    t28 = (t0 + 8168U);
    t30 = (t0 + 8405);
    t33 = (t32 + 0U);
    t34 = (t33 + 0U);
    *((int *)t34) = 0;
    t34 = (t33 + 4U);
    *((int *)t34) = 7;
    t34 = (t33 + 8U);
    *((int *)t34) = 1;
    t35 = (7 - 0);
    t36 = (t35 * 1);
    t36 = (t36 + 1);
    t34 = (t33 + 12U);
    *((unsigned int *)t34) = t36;
    t37 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t29, t28, t30, t32);
    if (t37 != 0)
        goto LAB8;

LAB9:
LAB2:    t46 = (t0 + 5496);
    *((int *)t46) = 1;

LAB1:    return;
LAB3:    t17 = (t0 + 2312U);
    t20 = *((char **)t17);
    t10 = (16 - 15);
    t21 = (t10 * 1U);
    t22 = (0 + t21);
    t17 = (t20 + t22);
    t23 = (t0 + 5864);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    memcpy(t27, t17, 16U);
    xsi_driver_first_trans_fast_port(t23);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t34 = (t0 + 2472U);
    t38 = *((char **)t34);
    t36 = (31 - 15);
    t39 = (t36 * 1U);
    t40 = (0 + t39);
    t34 = (t38 + t40);
    t41 = (t0 + 5864);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    memcpy(t45, t34, 16U);
    xsi_driver_first_trans_fast_port(t41);
    goto LAB2;

}

static void work_a_0832606739_3212880686_p_5(char *t0)
{
    char t6[16];
    char t15[16];
    unsigned char t1;
    char *t2;
    char *t3;
    char *t4;
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t16;
    char *t17;
    int t18;
    unsigned char t19;
    char *t20;
    int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned char t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;

LAB0:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 8168U);
    t4 = (t0 + 8413);
    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 7;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t9 = (7 - 0);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t11 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t2, t4, t6);
    if (t11 == 1)
        goto LAB5;

LAB6:    t8 = (t0 + 1512U);
    t12 = *((char **)t8);
    t8 = (t0 + 8168U);
    t13 = (t0 + 8421);
    t16 = (t15 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = 0;
    t17 = (t16 + 4U);
    *((int *)t17) = 7;
    t17 = (t16 + 8U);
    *((int *)t17) = 1;
    t18 = (7 - 0);
    t10 = (t18 * 1);
    t10 = (t10 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t10;
    t19 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t12, t8, t13, t15);
    t1 = t19;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB8:    t30 = (t0 + 5928);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    *((unsigned char *)t34) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t30);

LAB2:    t35 = (t0 + 5512);
    *((int *)t35) = 1;

LAB1:    return;
LAB3:    t17 = (t0 + 2312U);
    t20 = *((char **)t17);
    t21 = (15 - 16);
    t10 = (t21 * -1);
    t22 = (1U * t10);
    t23 = (0 + t22);
    t17 = (t20 + t23);
    t24 = *((unsigned char *)t17);
    t25 = (t0 + 5928);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    *((unsigned char *)t29) = t24;
    xsi_driver_first_trans_fast_port(t25);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB9:    goto LAB2;

}

static void work_a_0832606739_3212880686_p_6(char *t0)
{
    char t6[16];
    char t12[16];
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    char *t13;
    char *t14;
    int t15;
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

LAB0:    xsi_set_current_line(73, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = (16 - 15);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 15;
    t8 = (t7 + 4U);
    *((int *)t8) = 0;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t9 = (0 - 15);
    t10 = (t9 * -1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t8 = (t0 + 8429);
    t13 = (t12 + 0U);
    t14 = (t13 + 0U);
    *((int *)t14) = 0;
    t14 = (t13 + 4U);
    *((int *)t14) = 15;
    t14 = (t13 + 8U);
    *((int *)t14) = 1;
    t15 = (15 - 0);
    t10 = (t15 * 1);
    t10 = (t10 + 1);
    t14 = (t13 + 12U);
    *((unsigned int *)t14) = t10;
    t16 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t1, t6, t8, t12);
    if (t16 != 0)
        goto LAB3;

LAB4:
LAB5:    t21 = (t0 + 5992);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    *((unsigned char *)t25) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t21);

LAB2:    t26 = (t0 + 5528);
    *((int *)t26) = 1;

LAB1:    return;
LAB3:    t14 = (t0 + 5992);
    t17 = (t14 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t14);
    goto LAB2;

LAB6:    goto LAB2;

}


extern void work_a_0832606739_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0832606739_3212880686_p_0,(void *)work_a_0832606739_3212880686_p_1,(void *)work_a_0832606739_3212880686_p_2,(void *)work_a_0832606739_3212880686_p_3,(void *)work_a_0832606739_3212880686_p_4,(void *)work_a_0832606739_3212880686_p_5,(void *)work_a_0832606739_3212880686_p_6};
	xsi_register_didat("work_a_0832606739_3212880686", "isim/TestProcesseur_isim_beh.exe.sim/work/a_0832606739_3212880686.didat");
	xsi_register_executes(pe);
}
