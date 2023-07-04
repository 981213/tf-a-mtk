/*
 * Copyright (c) 2019, MediaTek Inc. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef PLL_H
#define PLL_H

/* APMIXEDSYS Register */
#define APMIXED_BASE 0x1001E000

#define ARMPLL_B_CON0 (APMIXED_BASE + 0x0204)
#define ARMPLL_B_CON1 (APMIXED_BASE + 0x0208)
#define ARMPLL_B_CON3 (APMIXED_BASE + 0x0210)

#define CCIPLL2_B_CON0 (APMIXED_BASE + 0x0214)
#define CCIPLL2_B_CON1 (APMIXED_BASE + 0x0218)
#define CCIPLL2_B_CON3 (APMIXED_BASE + 0x0220)

#define NETSYSPLL_CON0 (APMIXED_BASE + 0x0104)
#define NETSYSPLL_CON3 (APMIXED_BASE + 0x0110)

#define MSDCPLL_CON0 (APMIXED_BASE + 0x0314)
#define MSDCPLL_CON3 (APMIXED_BASE + 0x0320)

#define NET2PLL_CON0 (APMIXED_BASE + 0x0154)
#define NET2PLL_CON3 (APMIXED_BASE + 0x0160)

#define MMPLL_CON0 (APMIXED_BASE + 0x0124)
#define MMPLL_CON3 (APMIXED_BASE + 0x0130)

#define SGMIIPLL_CON0 (APMIXED_BASE + 0x0174)
#define SGMIIPLL_CON3 (APMIXED_BASE + 0x0180)

#define WEDMCUPLL_CON0 (APMIXED_BASE + 0x0164)
#define WEDMCUPLL_CON3 (APMIXED_BASE + 0x0170)

#define NET1PLL_CON0 (APMIXED_BASE + 0x0144)
#define NET1PLL_CON3 (APMIXED_BASE + 0x0150)

#define MPLL_CON0 (APMIXED_BASE + 0x0114)
#define MPLL_CON3 (APMIXED_BASE + 0x0120)

#define APLL2_CON0 (APMIXED_BASE + 0x0134)
#define APLL2_CON3 (APMIXED_BASE + 0x0140)

#define ARMPLL_RSV_CON0 (APMIXED_BASE + 0x0304)
#define ARMPLL_RSV_CON3 (APMIXED_BASE + 0x0310)

#define CON0_BASE_EN	 BIT(0)
#define CON0_PWR_ON	 BIT(0)
#define CON0_ISO_EN	 BIT(1)
#define CON0_RST_BAR	 BIT(24)
#define CON0_POST_DIV(x) ((x) << 1)
#define CON1_PCW_CHG	 BIT(31)
#define UNIV_48M_EN	 BIT(27)

#define SCP_AXICK_DCM_DIS_EN BIT(0)
#define SCP_AXICK_26M_SEL_EN BIT(4)

/*INFRASYS Register  */
#define INFRACFG_AO_BASE 0x10001000

#define INFRA_TOP_CKMUXSEL (INFRACFG_AO_BASE + 0x00)
#define INFRA_TOP_CKDIV1   (INFRACFG_AO_BASE + 0x08)
#define INFRA_TOP_DCMCTL   (INFRACFG_AO_BASE + 0x10)

#define INFRA_TOP_CKDIV1_SEL(x) ((x) << 0)
#define INFRA_TOP_MUX_SEL(x)	((x) << 2)
#define INFRA_TOP_DCM_EN	BIT(0)

#define INFRA_PDN_CLR0		    (INFRACFG_AO_BASE + 0x44)
#define INFRA_GLOBALCON_DCMCTL	    (INFRACFG_AO_BASE + 0x50)
#define INFRA_GLOBALCON_DCMCTL_MASK 0x303
#define INFRA_GLOBALCON_DCMCTL_ON   0x303

#define INFRA_GLOBALCON_DCMDBC (INFRACFG_AO_BASE + 0x054)
#define INFRA_GLOBALCON_DCMDBC_MASK                                            \
	((0x7f << 0) | (1 << 8) | (0x7f << 16) | (1 << 24))
#define INFRA_GLOBALCON_DCMDBC_ON ((0 << 0) | (1 << 8) | (0 << 16) | (1 << 24))

#define INFRA_GLOBALCON_DCMFSEL (INFRACFG_AO_BASE + 0x058)
#define INFRA_GLOBALCON_DCMFSEL_MASK                                           \
	((0x7 << 0) | (0xf << 8) | (0x1f << 16) | (0x1f << 24))
#define INFRA_GLOBALCON_DCMFSEL_ON                                             \
	((0 << 0) | (0 << 8) | (0x10 << 16) | (0x10 << 24))

/* WBSYS Mapping Register */
#define WB2AP_STATUS  (INFRACFG_AO_BASE + 0x384)
#define WB2AP_PLL_RDY 0x80

/* PERI Register */
#define PERI_PDN_CLR0 (PERICFG_BASE + 0x10)
#define PERI_PDN_CLR1 (PERICFG_BASE + 0x14)

#define EFUSE_RES_REG	      (EFUSE_BASE + 0x82C)
#define EFUSE_N9_POLLING_MASK 0x3

/* Audio Register*/
#define AUDIO_TOP_CON0	      (AUDIO_BASE + 0x00)
#define AUDIO_TOP_AHB_IDLE_EN BIT(29)

#define I2S0_MCK_DIV_PDN   BIT(2)
#define APLL2_MUX_SEL_294M BIT(7)

// TOPCKGEN
#define CLK_PDN_REG   (TOPCKGEN_BASE + 0x0250)

#define CLK_CFG0_SET  (TOPCKGEN_BASE + 0x0004)
#define CLK_CFG1_SET  (TOPCKGEN_BASE + 0x0014)
#define CLK_CFG2_SET  (TOPCKGEN_BASE + 0x0024)
#define CLK_CFG3_SET  (TOPCKGEN_BASE + 0x0034)
#define CLK_CFG4_SET  (TOPCKGEN_BASE + 0x0044)
#define CLK_CFG5_SET  (TOPCKGEN_BASE + 0x0054)
#define CLK_CFG6_SET  (TOPCKGEN_BASE + 0x0064)
#define CLK_CFG7_SET  (TOPCKGEN_BASE + 0x0074)
#define CLK_CFG8_SET  (TOPCKGEN_BASE + 0x0084)
#define CLK_CFG9_SET  (TOPCKGEN_BASE + 0x0094)
#define CLK_CFG10_SET (TOPCKGEN_BASE + 0x00A4)
#define CLK_CFG11_SET (TOPCKGEN_BASE + 0x00B4)
#define CLK_CFG12_SET (TOPCKGEN_BASE + 0x00C4)
#define CLK_CFG13_SET (TOPCKGEN_BASE + 0x00D4)
#define CLK_CFG14_SET (TOPCKGEN_BASE + 0x00E4)
#define CLK_CFG15_SET (TOPCKGEN_BASE + 0x00F4)
#define CLK_CFG16_SET (TOPCKGEN_BASE + 0x0104)
#define CLK_CFG17_SET (TOPCKGEN_BASE + 0x0114)
#define CLK_CFG18_SET (TOPCKGEN_BASE + 0x0124)

#define CLK_CFG_UPDATE0 (TOPCKGEN_BASE + 0x01C0)
#define CLK_CFG_UPDATE1 (TOPCKGEN_BASE + 0x01C4)
#define CLK_CFG_UPDATE2 (TOPCKGEN_BASE + 0x01C8)

#define MODULE_CLK_SEL_0 (INFRACFG_AO_BASE + 0x0018)
#define MODULE_CLK_SEL_1 (INFRACFG_AO_BASE + 0x0028)

#define CLK_26CALI_1   (TOPCKGEN_BASE + 0x0324)
#define CLK_26CALI_0   (TOPCKGEN_BASE + 0x0320)
#define CLK_MISC_CFG_0 (TOPCKGEN_BASE + 0x0200)
#define CLK_DBG_CFG    (TOPCKGEN_BASE + 0x0240)

#define ETH_2P5G_PHY_DOM_CON	 0x11D10060
#define ETH_2P5G_PHY_PWR_ACK_2ND BIT(31)
#define ETH_2P5G_PHY_PWR_ACK	 BIT(30)
#define ETH_2P5G_PHY_SRAM_PDN	 BIT(8)
#define ETH_2P5G_PHY_PWR_CLK_DIS BIT(5)
#define ETH_2P5G_PHY_PWR_ISO	 BIT(4)
#define ETH_2P5G_PHY_PWR_ON_2ND	 BIT(2)
#define ETH_2P5G_PHY_PWR_ON	 BIT(1)
#define ETH_2P5G_PHY_PWR_RST_N	 BIT(0)

#define AUD_SRAM_PD_CTRL         0x10003050
#define AUD_SRAM_PWR_ON          BIT(0)

#define MAX_POLLING_CNT 100

unsigned int mtk_get_cpu_freq(void);
void mtk_pll_init(int);
void mtk_pll_eth_init(void);

void eth_2p5g_phy_mtcmos_ctrl(int enable);

#endif
