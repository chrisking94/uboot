/*
 * Copyright (C) 2011 Samsung Electronics
 * Heungjun Kim <riverful.kim@samsung.com>
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#ifndef __ASM_ARM_ARCH_POWER_H_
#define __ASM_ARM_ARCH_POWER_H_

#ifndef __ASSEMBLY__
struct exynos4_power {
	unsigned int	om_stat;
	unsigned char	res1[0x8];
	unsigned int	rtc_clko_sel;
	unsigned int	gnss_rtc_out_ctrl;
	unsigned char	res2[0x1ec];
	unsigned int	system_power_down_ctrl;
	unsigned int	res3;
	unsigned int	system_power_down_option;
	unsigned char	res4[0x1f4];
	unsigned int	swreset;
	unsigned int	rst_stat;
	unsigned char	res5[0x1f8];
	unsigned int	wakeup_stat;
	unsigned int	eint_wakeup_mask;
	unsigned int	wakeup_mask;
	unsigned char	res6[0xf4];
	unsigned int	hdmi_phy_control;
	unsigned int	usbdevice_phy_control;
	unsigned int	usbhost_phy_control;
	unsigned int	dac_phy_control;
	unsigned int	mipi_phy0_control;
	unsigned int	mipi_phy1_control;
	unsigned int	adc_phy_control;
	unsigned int	pcie_phy_control;
	unsigned int	sata_phy_control;
	unsigned char	res7[0xdc];
	unsigned int	inform0;
	unsigned int	inform1;
	unsigned int	inform2;
	unsigned int	inform3;
	unsigned int	inform4;
	unsigned int	inform5;
	unsigned int	inform6;
	unsigned int	inform7;
	unsigned char	res8[0x1e0];
	unsigned int	pmu_debug;
	unsigned char	res9[0x5fc];
	unsigned int	arm_core0_sys_pwr_reg;
	unsigned char	res10[0xc];
	unsigned int	arm_core1_sys_pwr_reg;
	unsigned char	res11[0x6c];
	unsigned int	arm_common_sys_pwr_reg;
	unsigned char	res12[0x3c];
	unsigned int	arm_cpu_l2_0_sys_pwr_reg;
	unsigned int	arm_cpu_l2_1_sys_pwr_reg;
	unsigned char	res13[0x38];
	unsigned int	cmu_aclkstop_sys_pwr_reg;
	unsigned int	cmu_sclkstop_sys_pwr_reg;
	unsigned char	res14[0x4];
	unsigned int	cmu_reset_sys_pwr_reg;
	unsigned char	res15[0x10];
	unsigned int	apll_sysclk_sys_pwr_reg;
	unsigned int	mpll_sysclk_sys_pwr_reg;
	unsigned int	vpll_sysclk_sys_pwr_reg;
	unsigned int	epll_sysclk_sys_pwr_reg;
	unsigned char	res16[0x8];
	unsigned int	cmu_clkstop_gps_alive_sys_pwr_reg;
	unsigned int	cmu_reset_gps_alive_sys_pwr_reg;
	unsigned int	cmu_clkstop_cam_sys_pwr_reg;
	unsigned int	cmu_clkstop_tv_sys_pwr_reg;
	unsigned int	cmu_clkstop_mfc_sys_pwr_reg;
	unsigned int	cmu_clkstop_g3d_sys_pwr_reg;
	unsigned int	cmu_clkstop_lcd0_sys_pwr_reg;
	unsigned int	cmu_clkstop_lcd1_sys_pwr_reg;
	unsigned int	cmu_clkstop_maudio_sys_pwr_reg;
	unsigned int	cmu_clkstop_gps_sys_pwr_reg;
	unsigned int	cmu_reset_cam_sys_pwr_reg;
	unsigned int	cmu_reset_tv_sys_pwr_reg;
	unsigned int	cmu_reset_mfc_sys_pwr_reg;
	unsigned int	cmu_reset_g3d_sys_pwr_reg;
	unsigned int	cmu_reset_lcd0_sys_pwr_reg;
	unsigned int	cmu_reset_lcd1_sys_pwr_reg;
	unsigned int	cmu_reset_maudio_sys_pwr_reg;
	unsigned int	cmu_reset_gps_sys_pwr_reg;
	unsigned int	top_bus_sys_pwr_reg;
	unsigned int	top_retention_sys_pwr_reg;
	unsigned int	top_pwr_sys_pwr_reg;
	unsigned char	res17[0x1c];
	unsigned int	logic_reset_sys_pwr_reg;
	unsigned char	res18[0x14];
	unsigned int	onenandxl_mem_sys_pwr_reg;
	unsigned int	modemif_mem_sys_pwr_reg;
	unsigned char	res19[0x4];
	unsigned int	usbdevice_mem_sys_pwr_reg;
	unsigned int	sdmmc_mem_sys_pwr_reg;
	unsigned int	cssys_mem_sys_pwr_reg;
	unsigned int	secss_mem_sys_pwr_reg;
	unsigned char	res20[0x4];
	unsigned int	pcie_mem_sys_pwr_reg;
	unsigned int	sata_mem_sys_pwr_reg;
	unsigned char	res21[0x18];
	unsigned int	pad_retention_dram_sys_pwr_reg;
	unsigned int	pad_retention_maudio_sys_pwr_reg;
	unsigned char	res22[0x18];
	unsigned int	pad_retention_gpio_sys_pwr_reg;
	unsigned int	pad_retention_uart_sys_pwr_reg;
	unsigned int	pad_retention_mmca_sys_pwr_reg;
	unsigned int	pad_retention_mmcb_sys_pwr_reg;
	unsigned int	pad_retention_ebia_sys_pwr_reg;
	unsigned int	pad_retention_ebib_sys_pwr_reg;
	unsigned char	res23[0x8];
	unsigned int	pad_isolation_sys_pwr_reg;
	unsigned char	res24[0x1c];
	unsigned int	pad_alv_sel_sys_pwr_reg;
	unsigned char	res25[0x1c];
	unsigned int	xusbxti_sys_pwr_reg;
	unsigned int	xxti_sys_pwr_reg;
	unsigned char	res26[0x38];
	unsigned int	ext_regulator_sys_pwr_reg;
	unsigned char	res27[0x3c];
	unsigned int	gpio_mode_sys_pwr_reg;
	unsigned char	res28[0x3c];
	unsigned int	gpio_mode_maudio_sys_pwr_reg;
	unsigned char	res29[0x3c];
	unsigned int	cam_sys_pwr_reg;
	unsigned int	tv_sys_pwr_reg;
	unsigned int	mfc_sys_pwr_reg;
	unsigned int	g3d_sys_pwr_reg;
	unsigned int	lcd0_sys_pwr_reg;
	unsigned int	lcd1_sys_pwr_reg;
	unsigned int	maudio_sys_pwr_reg;
	unsigned int	gps_sys_pwr_reg;
	unsigned int	gps_alive_sys_pwr_reg;
	unsigned char	res30[0xc5c];
	unsigned int	arm_core0_configuration;
	unsigned int	arm_core0_status;
	unsigned int	arm_core0_option;
	unsigned char	res31[0x74];
	unsigned int	arm_core1_configuration;
	unsigned int	arm_core1_status;
	unsigned int	arm_core1_option;
	unsigned char	res32[0x37c];
	unsigned int	arm_common_option;
	unsigned char	res33[0x1f4];
	unsigned int	arm_cpu_l2_0_configuration;
	unsigned int	arm_cpu_l2_0_status;
	unsigned char	res34[0x18];
	unsigned int	arm_cpu_l2_1_configuration;
	unsigned int	arm_cpu_l2_1_status;
	unsigned char	res35[0xa00];
	unsigned int	pad_retention_maudio_option;
	unsigned char	res36[0xdc];
	unsigned int	pad_retention_gpio_option;
	unsigned char	res37[0x1c];
	unsigned int	pad_retention_uart_option;
	unsigned char	res38[0x1c];
	unsigned int	pad_retention_mmca_option;
	unsigned char	res39[0x1c];
	unsigned int	pad_retention_mmcb_option;
	unsigned char	res40[0x1c];
	unsigned int	pad_retention_ebia_option;
	unsigned char	res41[0x1c];
	unsigned int	pad_retention_ebib_option;
	unsigned char	res42[0x160];
	unsigned int	ps_hold_control;
	unsigned char	res43[0xf0];
	unsigned int	xusbxti_configuration;
	unsigned int	xusbxti_status;
	unsigned char	res44[0x14];
	unsigned int	xusbxti_duration;
	unsigned int	xxti_configuration;
	unsigned int	xxti_status;
	unsigned char	res45[0x14];
	unsigned int	xxti_duration;
	unsigned char	res46[0x1dc];
	unsigned int	ext_regulator_duration;
	unsigned char	res47[0x5e0];
	unsigned int	cam_configuration;
	unsigned int	cam_status;
	unsigned int	cam_option;
	unsigned char	res48[0x14];
	unsigned int	tv_configuration;
	unsigned int	tv_status;
	unsigned int	tv_option;
	unsigned char	res49[0x14];
	unsigned int	mfc_configuration;
	unsigned int	mfc_status;
	unsigned int	mfc_option;
	unsigned char	res50[0x14];
	unsigned int	g3d_configuration;
	unsigned int	g3d_status;
	unsigned int	g3d_option;
	unsigned char	res51[0x14];
	unsigned int	lcd0_configuration;
	unsigned int	lcd0_status;
	unsigned int	lcd0_option;
	unsigned char	res52[0x14];
	unsigned int	lcd1_configuration;
	unsigned int	lcd1_status;
	unsigned int	lcd1_option;
	unsigned char	res53[0x34];
	unsigned int	gps_configuration;
	unsigned int	gps_status;
	unsigned int	gps_option;
	unsigned char	res54[0x14];
	unsigned int	gps_alive_configuration;
	unsigned int	gps_alive_status;
	unsigned int	gps_alive_option;
};

struct exynos4x12_power {
	unsigned int	om_stat;
	unsigned char	res1[0xc];
	unsigned int	rtc_clko_sel;				// 0x10
	unsigned int	gnss_rtc_out_ctrl;			// 0x14
	unsigned char	res2[0x1e8];				// 0x18
	unsigned int	central_seq_config;			// 0x200
	unsigned int	res3;
	unsigned int	central_seq_option;			// 0x208
	unsigned char	res4[0x1f4];				// 0x20c
	unsigned int	swreset;					// 0x400
	unsigned int	rst_stat;					// 0x404
	unsigned char	res5[0x1f8];				// 0x408
	unsigned int	wakeup_stat;				// 0x600
	unsigned int	eint_wakeup_mask;			// 0x604
	unsigned int	wakeup_mask;				// 0x608
	unsigned char	res6[0xf4];					// 0x60c
	unsigned int	hdmi_phy_control;			// 0x700
	unsigned int	usbdevice_phy_control;		// 0x704
	unsigned int	hsic_1_phy_control;			// 0x708
	unsigned int	hsic_2_phy_control;			// 0x70c
	unsigned int	mipi_phy0_control;			// 0x710
	unsigned int	mipi_phy1_control;			// 0x714
	unsigned int	adc_phy_control;			// 0x718
	unsigned char	res7[0x64];					// 0x71c
	unsigned int	body_bias_con0;				// 0x780
	unsigned int	body_bias_con1;				// 0x784
	unsigned int	body_bias_con2;				// 0x788
	unsigned int	body_bias_con3;				// 0x78c
	unsigned char	res8[0x70];					// 0x790
	unsigned int	inform0;					// 0x800
	unsigned int	inform1;
	unsigned int	inform2;
	unsigned int	inform3;
	unsigned int	inform4;
	unsigned int	inform5;
	unsigned int	inform6;
	unsigned int	inform7;					// 0x81c
	unsigned char	res9[0x1e0];				// 0x820
	unsigned int	pmu_debug;					// 0xa00
	unsigned char	res10[0x5fc];
	unsigned int	arm_core0_sys_pwr_reg;		// 0x1000
	unsigned char	res11[0xc];
	unsigned int	arm_core1_sys_pwr_reg;		// 0x1010
	unsigned char	res12[0x6c];
	unsigned int	arm_common_sys_pwr_reg;		// 0x1080
	unsigned char	res13[0x3c];
	unsigned int	arm_cpu_l2_0_sys_pwr_reg;	// 0x10c0
	unsigned int	arm_cpu_l2_1_sys_pwr_reg;	// 0x10c4
	unsigned char	res14[0x38];
	unsigned int	cmu_aclkstop_sys_pwr_reg;	// 0x1100
	unsigned int	cmu_sclkstop_sys_pwr_reg;	// 0x1104
	unsigned char	res15[0x4];
	unsigned int	cmu_reset_sys_pwr_reg;		// 0x110c
	unsigned char	res16[0x10];
	unsigned int	apll_sysclk_sys_pwr_reg;	// 0x1120
	unsigned int	mpll_sysclk_sys_pwr_reg;
	unsigned int	vpll_sysclk_sys_pwr_reg;
	unsigned int	epll_sysclk_sys_pwr_reg;	// 0x112c
	unsigned char	res17[0x8];
	unsigned int	cmu_clkstop_gps_alive_sys_pwr_reg;	// 0x1138
	unsigned int	cmu_reset_gps_alive_sys_pwr_reg;
	unsigned int	cmu_clkstop_cam_sys_pwr_reg;		// 0x1140
	unsigned int	cmu_clkstop_tv_sys_pwr_reg;			// 0x1144
	unsigned int	cmu_clkstop_mfc_sys_pwr_reg;		// 0x1148
	unsigned int	cmu_clkstop_g3d_sys_pwr_reg;		// 0x114c
	unsigned int	cmu_clkstop_lcd0_sys_pwr_reg;		// 0x1150
	unsigned int	cmu_clkstop_isp_sys_pwr_reg;		// 0x1154
	unsigned int	cmu_clkstop_maudio_sys_pwr_reg;		// 0x1158
	unsigned int	cmu_clkstop_gps_sys_pwr_reg;		// 0x115c
	unsigned int	cmu_reset_cam_sys_pwr_reg;			// 0x1160
	unsigned int	cmu_reset_tv_sys_pwr_reg;			// 0x1164
	unsigned int	cmu_reset_mfc_sys_pwr_reg;			// 0x1168
	unsigned int	cmu_reset_g3d_sys_pwr_reg;			// 0x116c
	unsigned int	cmu_reset_lcd0_sys_pwr_reg;			// 0x1170
	unsigned int	cmu_reset_isp_sys_pwr_reg;			// 0x1174
	unsigned int	cmu_reset_maudio_sys_pwr_reg;		// 0x1178
	unsigned int	cmu_reset_gps_sys_pwr_reg;			// 0x117c
	unsigned int	top_bus_sys_pwr_reg;				// 0x1180
	unsigned int	top_retention_sys_pwr_reg;			// 0x1184
	unsigned int	top_pwr_sys_pwr_reg;				// 0x1188
	unsigned char	res18[0x14];						// 0x118c
	unsigned int	logic_reset_sys_pwr_reg;			// 0x11a0
	unsigned char	res19[0x1c];						// 0x11a4
	unsigned int	onenandxl_mem_sys_pwr_reg;			// 0x11c0
	unsigned int	onenandxl_mem_sys_pwr_reg;			// 0x11c0
	unsigned int	hsi_mem_sys_pwr_reg;		// 0x11c4
	unsigned char	res20[0x4];					// 0x11c8
	unsigned int	usbotg_mem_sys_pwr_reg;		// 0x11cc
	unsigned int	sdmmc_mem_sys_pwr_reg;		// 0x11d0
	unsigned int	cssys_mem_sys_pwr_reg;		// 0x11d4
	unsigned int	secss_mem_sys_pwr_reg;		// 0x11d8
	unsigned int	potator_mem_sys_pwr_reg;	// 0x11dc
	unsigned char	res21[0x20];				// 0x11e0
	unsigned int	pad_retention_dram_sys_pwr_reg;		// 0x1200
	unsigned int	pad_retention_maudio_sys_pwr_reg;
	unsigned char	res22[0x18];		// 0x1208
	unsigned int	pad_retention_gpio_sys_pwr_reg;		// 0x1220
	unsigned int	pad_retention_uart_sys_pwr_reg;
	unsigned int	pad_retention_mmca_sys_pwr_reg;		// 0x1228
	unsigned int	pad_retention_mmcb_sys_pwr_reg;
	unsigned int	pad_retention_ebia_sys_pwr_reg;
	unsigned int	pad_retention_ebib_sys_pwr_reg;		// 0x1234
	unsigned char	res23[0x8];		// 0x1238
	unsigned int	pad_isolation_sys_pwr_reg;		// 0x1240
	unsigned char	res24[0x1c];
	unsigned int	pad_alv_sel_sys_pwr_reg;		// 0x1260
	unsigned char	res25[0x1c];
	unsigned int	xusbxti_sys_pwr_reg;		// 0x1280
	unsigned int	xxti_sys_pwr_reg;		// 0x1284
	unsigned char	res26[0x38];
	unsigned int	ext_regulator_sys_pwr_reg;		// 0x12c0
	unsigned char	res27[0x3c];
	unsigned int	gpio_mode_sys_pwr_reg;		// 0x1300
	unsigned char	res28[0x3c];
	unsigned int	gpio_mode_maudio_sys_pwr_reg;	// 0x1340
	unsigned char	res29[0x3c];
	unsigned int	cam_sys_pwr_reg;	// 0x1380
	unsigned int	tv_sys_pwr_reg;		// 0x1384
	unsigned int	mfc_sys_pwr_reg;	// 0x1388
	unsigned int	g3d_sys_pwr_reg;	// 0x138c
	unsigned int	lcd0_sys_pwr_reg;	// 0x1390
	unsigned int	isp_sys_pwr_reg;	// 0x1384
	unsigned int	maudio_sys_pwr_reg;	// 0x1398
	unsigned int	gps_sys_pwr_reg;
	unsigned int	gps_alive_sys_pwr_reg;	// 0x13a0
	unsigned char	res30[0xc5c];
	unsigned int	arm_core0_configuration;	// 0x2000
	unsigned int	arm_core0_status;	// 0x2004
	unsigned int	arm_core0_option;	// 0x2008
	unsigned char	res31[0x74];
	unsigned int	arm_core1_configuration;	// 0x2080
	unsigned int	arm_core1_status;	// 0x2084
	unsigned int	arm_core1_option;	// 0x2088
	unsigned char	res32[0x37c];
	unsigned int	arm_common_option;	// 0x2408
	unsigned char	res33[0x1f4];
	unsigned int	arm_cpu_l2_0_configuration;		// 0x2600
	unsigned int	arm_cpu_l2_0_status;	// 0x2604
	unsigned char	res34[0x18];
	unsigned int	arm_cpu_l2_1_configuration;		// 0x2620
	unsigned int	arm_cpu_l2_1_status;	// 0x2624
	unsigned char	res35[0xa00];
	unsigned int	pad_retention_maudio_option;	// 0x3028
	unsigned char	res36[0xdc];
	unsigned int	pad_retention_gpio_option;	// 0x3108
	unsigned char	res37[0x1c];
	unsigned int	pad_retention_uart_option;	// 0x3128
	unsigned char	res38[0x1c];
	unsigned int	pad_retention_mmca_option;	// 0x3148
	unsigned char	res39[0x1c];
	unsigned int	pad_retention_mmcb_option;	// 0x3168
	unsigned char	res40[0x1c];
	unsigned int	pad_retention_ebia_option;	// 0x3188
	unsigned char	res41[0x1c];
	unsigned int	pad_retention_ebib_option;	// 0x31a8
	unsigned char	res42[0x160];
	unsigned int	ps_hold_control;	// 0x330c
	unsigned char	res43[0xf0];
	unsigned int	xusbxti_configuration;	// 0x3400
	unsigned int	xusbxti_status;		// 0x3404
	unsigned char	res44[0x14];
	unsigned int	xusbxti_duration;	// 0x341c
	unsigned int	xxti_configuration;	// 0x3420
	unsigned int	xxti_status;		// 0x3424
	unsigned char	res45[0x14];
	unsigned int	xxti_duration;		// 0x343c
	unsigned char	res46[0x1dc];
	unsigned int	ext_regulator_duration;		// 0x361c
	unsigned char	res47[0x5e0];
	unsigned int	cam_configuration;		// 0x3c00
	unsigned int	cam_status;		// 0x3c04
	unsigned int	cam_option;		// 0x3c08
	unsigned char	res48[0x14];
	unsigned int	tv_configuration;	// 0x3c20
	unsigned int	tv_status;		// 0x3c24
	unsigned int	tv_option;		// 0x3c28
	unsigned char	res49[0x14];
	unsigned int	mfc_configuration;	// 0x3c40
	unsigned int	mfc_status;		// 0x3c44
	unsigned int	mfc_option;		// 0x3c48
	unsigned char	res50[0x14];
	unsigned int	g3d_configuration;	// 0x3c60
	unsigned int	g3d_status;
	unsigned int	g3d_option;		// 0x3c68
	unsigned char	res51[0x14];
	unsigned int	lcd0_configuration;		// 0x3c80
	unsigned int	lcd0_status;
	unsigned int	lcd0_option;	// 0x3c88
	unsigned char	res52[0x14];
	unsigned int	isp_configuration;		// 0x3ca0
	unsigned int	isp_status;
	unsigned int	isp_option;		// 0x3ca8
	unsigned char	res53[0x34];
	unsigned int	gps_configuration;	// 0x3ce0
	unsigned int	gps_status;
	unsigned int	gps_option;		// 0x3ce8
	unsigned char	res54[0x14];
	unsigned int	gps_alive_configuration;	// 0x3d00
	unsigned int	gps_alive_status;	// 0x3d04
	unsigned int	gps_alive_option;	// 0x3d08
};

struct exynos4412_power {
	unsigned char	res1[0x0704];
	unsigned int	usbhost_phy_control;
	unsigned int	hsic1_phy_control;
	unsigned int	hsic2_phy_control;
};

struct exynos5_power {
	unsigned int	om_stat;
	unsigned char	res1[0x18];
	unsigned int	rtc_clko_sel;
	unsigned int	gnss_rtc_out_ctrl;
	unsigned char	res2[0x1dc];
	unsigned int	central_seq_configuration;
	unsigned int	central_seq_status;
	unsigned int	central_seq_option;
	unsigned char	res3[0x14];
	unsigned int	seq_transition0;
	unsigned int	seq_transition1;
	unsigned int	seq_transition2;
	unsigned int	seq_transition3;
	unsigned int	seq_transition4;
	unsigned int	seq_transition5;
	unsigned int	seq_transition6;
	unsigned int	seq_transition7;
	unsigned int	central_seq_dmc_configuration;
	unsigned int	central_seq_dmc_status;
	unsigned int	central_seq_dmc_option;
	unsigned char	res4[0x14];
	unsigned int	seq_dmc_transition0;
	unsigned int	seq_dmc_transition1;
	unsigned int	seq_dmc_transition2;
	unsigned int	seq_dmc_transition3;
	unsigned int	seq_dmc_transition4;
	unsigned int	seq_dmc_transition5;
	unsigned int	seq_dmc_transition6;
	unsigned int	seq_dmc_transition7;
	unsigned char	res5[0x180];
	unsigned int	swreset;
	unsigned int	rst_stat;
	unsigned int	automatic_wdt_reset_disable;
	unsigned int	mask_wdt_reset_request;
	unsigned int	mask_wreset_request;
	unsigned char	res6[0xec];
	unsigned int	reset_sequencer_configuration;
	unsigned int	reset_sequencer_status;
	unsigned int	reset_sequencer_option;
	unsigned char	res7[0xf4];
	unsigned int	wakeup_stat;
	unsigned int	eint_wakeup_mask;
	unsigned int	wakeup_mask;
	unsigned int	wakeup_interrupt;
	unsigned char	res8[0x10];
	unsigned int	wakeup_stat_dmc;
	unsigned int	eint_wakeup_mask_dmc;
	unsigned int	wakeup_mask_dmc;
	unsigned int	wakeup_interrupt_dmc;
	unsigned char	res9[0xd0];
	unsigned int	hdmi_phy_control;
	unsigned int	usbdrd_phy_control;
	unsigned int	usbhost_phy_control;
	unsigned int	efnand_phy_control;
	unsigned int	mipi_phy0_control;
	unsigned int	mipi_phy1_control;
	unsigned int	adc_phy_control;
	unsigned int	mtcadc_phy_control;
	unsigned int	dptx_phy_control;
	unsigned int	sata_phy_control;
	unsigned char	res10[0xd8];
	unsigned int	inform0;
	unsigned int	inform1;
	unsigned int	inform2;
	unsigned int	inform3;
	unsigned int	sysip_dat0;
	unsigned int	sysip_dat1;
	unsigned int	sysip_dat2;
	unsigned int	sysip_dat3;
	unsigned char	res11[0xe0];
	unsigned int	pmu_spare0;
	unsigned int	pmu_spare1;
	unsigned int	pmu_spare2;
	unsigned int	pmu_spare3;
	unsigned char	res12[0x70];
	unsigned int	irom_data_reg0;
	unsigned int	irom_data_reg1;
	unsigned int	irom_data_reg2;
	unsigned int	irom_data_reg3;
	unsigned char	res13[0x70];
	unsigned int	pmu_debug;
	unsigned char	res14[0x5fc];
	unsigned int	arm_core0_sys_pwr_reg;
	unsigned int	dis_irq_arm_core0_local_sys_pwr_reg;
	unsigned int	dis_irq_arm_core0_central_sys_pwr_reg;
	unsigned char	res15[0x4];
	unsigned int	arm_core1_sys_pwr_reg;
	unsigned int	dis_irq_arm_core1_local_sys_pwr_reg;
	unsigned int	dis_irq_arm_core1_central_sys_pwr_reg;
	unsigned char	res16[0x24];
	unsigned int	fsys_arm_sys_pwr_reg;
	unsigned int	dis_irq_fsys_arm_local_sys_pwr_reg;
	unsigned int	dis_irq_fsys_arm_central_sys_pwr_reg;
	unsigned char	res17[0x4];
	unsigned int	isp_arm_sys_pwr_reg;
	unsigned int	dis_irq_isp_arm_local_sys_pwr_reg;
	unsigned int	dis_irq_isp_arm_central_sys_pwr_reg;
	unsigned char	res18[0x24];
	unsigned int	arm_common_sys_pwr_reg;
	unsigned char	res19[0x3c];
	unsigned int	arm_l2_sys_pwr_reg;
	unsigned char	res20[0x3c];
	unsigned int	cmu_aclkstop_sys_pwr_reg;
	unsigned int	cmu_sclkstop_sys_pwr_reg;
	unsigned char	res21[0x4];
	unsigned int	cmu_reset_sys_pwr_reg;
	unsigned char	res22[0x10];
	unsigned int	cmu_aclkstop_dmc_sys_pwr_reg;
	unsigned int	cmu_sclkstop_dmc_sys_pwr_reg;
	unsigned char	res23[0x4];
	unsigned int	cmu_reset_dmc_sys_pwr_reg;
	unsigned char	res24[0x8];
	unsigned int	ddrphy_dlllock_sys_pwr_reg;
	unsigned char	res25[0x4];
	unsigned int	apll_sysclk_sys_pwr_reg;
	unsigned int	mpll_sysclk_sys_pwr_reg;
	unsigned int	vpll_sysclk_sys_pwr_reg;
	unsigned int	epll_sysclk_sys_pwr_reg;
	unsigned int	bpll_sysclk_sys_pwr_reg;
	unsigned int	cpll_sysclk_sys_pwr_reg;
	unsigned int	gpll_sysclk_sys_pwr_reg;
	unsigned char	res26[0x8];
	unsigned int	mplluser_sysclk_sys_pwr_reg;
	unsigned char	res27[0x8];
	unsigned int	bplluser_sysclk_sys_pwr_reg;
	unsigned char	res28[0xc];
	unsigned int	top_bus_sys_pwr_reg;
	unsigned int	top_retention_sys_pwr_reg;
	unsigned int	top_pwr_sys_pwr_reg;
	unsigned char	res29[0x4];
	unsigned int	top_bus_dmc_sys_pwr_reg;
	unsigned int	top_retention_dmc_sys_pwr_reg;
	unsigned int	top_pwr_dmc_sys_pwr_reg;
	unsigned char	res30[0x4];
	unsigned int	logic_reset_sys_pwr_reg;
	unsigned int	oscclk_gate_sys_pwr_reg;
	unsigned char	res31[0x8];
	unsigned int	logic_reset_dmc_sys_pwr_reg;
	unsigned int	oscclk_gate_dmc_sys_pwr_reg;
	unsigned char	res32[0x8];
	unsigned int	usbotg_mem_sys_pwr_reg;
	unsigned char	res33[0x4];
	unsigned int	g2d_mem_sys_pwr_reg;
	unsigned int	usbdrd_mem_sys_pwr_reg;
	unsigned int	efnand_mem_sys_pwr_reg;
	unsigned int	cssys_mem_sys_pwr_reg;
	unsigned int	secss_mem_sys_pwr_reg;
	unsigned int	rotator_mem_sys_pwr_reg;
	unsigned int	intram_mem_sys_pwr_reg;
	unsigned int	introm_mem_sys_pwr_reg;
	unsigned int	jpeg_mem_sys_pwr_reg;
	unsigned int	hsi_mem_sys_pwr_reg;
	unsigned char	res34[0x4];
	unsigned int	mcuiop_mem_sys_pwr_reg;
	unsigned char	res35[0x4];
	unsigned int	sata_mem_sys_pwr_reg;
	unsigned int	pad_retention_dram_sys_pwr_reg;
	unsigned int	pad_retention_mau_sys_pwr_reg;
	unsigned int	pad_retention_jtag_sys_pwr_reg;
	unsigned char	res36[0xc];
	unsigned int	pad_retention_mmc2_sys_pwr_reg;
	unsigned int	pad_retention_mmc3_sys_pwr_reg;
	unsigned int	pad_retention_gpio_sys_pwr_reg;
	unsigned int	pad_retention_uart_sys_pwr_reg;
	unsigned int	pad_retention_mmc0_sys_pwr_reg;
	unsigned int	pad_retention_mmc1_sys_pwr_reg;
	unsigned int	pad_retention_ebia_sys_pwr_reg;
	unsigned int	pad_retention_ebib_sys_pwr_reg;
	unsigned int	pad_retention_spi_sys_pwr_reg;
	unsigned int	pad_retention_gpio_dmc_sys_pwr_reg;
	unsigned int	pad_isolation_sys_pwr_reg;
	unsigned char	res37[0xc];
	unsigned int	pad_isolation_dmc_sys_pwr_reg;
	unsigned char	res38[0xc];
	unsigned int	pad_alv_sel_sys_pwr_reg;
	unsigned char	res39[0x20];
	unsigned int	xxti_sys_pwr_reg;
	unsigned char	res40[0x38];
	unsigned int	ext_regulator_sys_pwr_reg;
	unsigned char	res41[0x3c];
	unsigned int	gpio_mode_sys_pwr_reg;
	unsigned char	res42[0x1c];
	unsigned int	gpio_mode_dmc_sys_pwr_reg;
	unsigned char	res43[0x1c];
	unsigned int	gpio_mode_mau_sys_pwr_reg;
	unsigned int	top_asb_reset_sys_pwr_reg;
	unsigned int	top_asb_isolation_sys_pwr_reg;
	unsigned char	res44[0xb4];
	unsigned int	gscl_sys_pwr_reg;
	unsigned int	isp_sys_pwr_reg;
	unsigned int	mfc_sys_pwr_reg;
	unsigned int	g3d_sys_pwr_reg;
	unsigned char	res45[0x4];
	unsigned int	disp1_sys_pwr_reg;
	unsigned int	mau_sys_pwr_reg;
	unsigned char	res46[0x64];
	unsigned int	cmu_clkstop_gscl_sys_pwr_reg;
	unsigned int	cmu_clkstop_isp_sys_pwr_reg;
	unsigned int	cmu_clkstop_mfc_sys_pwr_reg;
	unsigned int	cmu_clkstop_g3d_sys_pwr_reg;
	unsigned char	res47[0x4];
	unsigned int	cmu_clkstop_disp1_sys_pwr_reg;
	unsigned int	cmu_clkstop_mau_sys_pwr_reg;
	unsigned char	res48[0x24];
	unsigned int	cmu_sysclk_gscl_sys_pwr_reg;
	unsigned int	cmu_sysclk_isp_sys_pwr_reg;
	unsigned int	cmu_sysclk_mfc_sys_pwr_reg;
	unsigned int	cmu_sysclk_g3d_sys_pwr_reg;
	unsigned char	res49[0x4];
	unsigned int	cmu_sysclk_disp1_sys_pwr_reg;
	unsigned int	cmu_sysclk_mau_sys_pwr_reg;
	unsigned char	res50[0xa4];
	unsigned int	cmu_reset_gscl_sys_pwr_reg;
	unsigned int	cmu_reset_isp_sys_pwr_reg;
	unsigned int	cmu_reset_mfc_sys_pwr_reg;
	unsigned int	cmu_reset_g3d_sys_pwr_reg;
	unsigned char	res51[0x4];
	unsigned int	cmu_reset_disp1_sys_pwr_reg;
	unsigned int	cmu_reset_mau_sys_pwr_reg;
	unsigned char	res52[0xa64];
	unsigned int	arm_core0_configuration;
	unsigned int	arm_core0_status;
	unsigned int	arm_core0_option;
	unsigned char	res53[0x14];
	unsigned int	dis_irq_arm_core0_local_configuration;
	unsigned int	dis_irq_arm_core0_local_status;
	unsigned int	dis_irq_arm_core0_local_option;
	unsigned char	res54[0x14];
	unsigned int	dis_irq_arm_core0_central_configuration;
	unsigned int	dis_irq_arm_core0_central_status;
	unsigned int	dis_irq_arm_core0_central_option;
	unsigned char	res55[0x34];
	unsigned int	arm_core1_configuration;
	unsigned int	arm_core1_status;
	unsigned int	arm_core1_option;
	unsigned char	res56[0x14];
	unsigned int	dis_irq_arm_core1_local_configuration;
	unsigned int	dis_irq_arm_core1_local_status;
	unsigned int	dis_irq_arm_core1_local_option;
	unsigned char	res57[0x14];
	unsigned int	dis_irq_arm_core1_central_configuration;
	unsigned int	dis_irq_arm_core1_central_status;
	unsigned int	dis_irq_arm_core1_central_option;
	unsigned char	res58[0x134];
	unsigned int	fsys_arm_configuration;
	unsigned int	fsys_arm_status;
	unsigned int	fsys_arm_option;
	unsigned char	res59[0x14];
	unsigned int	dis_irq_fsys_arm_local_configuration;
	unsigned int	dis_irq_fsys_arm_local_status;
	unsigned int	dis_irq_fsys_arm_local_option;
	unsigned char	res60[0x14];
	unsigned int	dis_irq_fsys_arm_central_configuration;
	unsigned int	dis_irq_fsys_arm_central_status;
	unsigned int	dis_irq_fsys_arm_central_option;
	unsigned char	res61[0x34];
	unsigned int	isp_arm_configuration;
	unsigned int	isp_arm_status;
	unsigned int	isp_arm_option;
	unsigned char	res62[0x14];
	unsigned int	dis_irq_isp_arm_local_configuration;
	unsigned int	dis_irq_isp_arm_local_status;
	unsigned int	dis_irq_isp_arm_local_option;
	unsigned char	res63[0x14];
	unsigned int	dis_irq_isp_arm_central_configuration;
	unsigned int	dis_irq_isp_arm_central_status;
	unsigned int	dis_irq_isp_arm_central_option;
	unsigned char	res64[0x134];
	unsigned int	arm_common_configuration;
	unsigned int	arm_common_status;
	unsigned int	arm_common_option;
	unsigned char	res65[0x1f4];
	unsigned int	arm_l2_configuration;
	unsigned int	arm_l2_status;
	unsigned int	arm_l2_option;
	unsigned char	res66[0x1f4];
	unsigned int	cmu_aclkstop_configuration;
	unsigned int	cmu_aclkstop_status;
	unsigned int	cmu_aclkstop_option;
	unsigned char	res67[0x14];
	unsigned int	cmu_sclkstop_configuration;
	unsigned int	cmu_sclkstop_status;
	unsigned int	cmu_sclkstop_option;
	unsigned char	res68[0x34];
	unsigned int	cmu_reset_configuration;
	unsigned int	cmu_reset_status;
	unsigned int	cmu_reset_option;
	unsigned char	res69[0x94];
	unsigned int	cmu_aclkstop_dmc_configuration;
	unsigned int	cmu_aclkstop_dmc_status;
	unsigned int	cmu_aclkstop_dmc_option;
	unsigned char	res70[0x14];
	unsigned int	cmu_sclkstop_dmc_configuration;
	unsigned int	cmu_sclkstop_dmc_status;
	unsigned int	cmu_sclkstop_dmc_option;
	unsigned char	res71[0x34];
	unsigned int	cmu_reset_dmc_configuration;
	unsigned int	cmu_reset_dmc_status;
	unsigned int	cmu_reset_dmc_option;
	unsigned char	res72[0x54];
	unsigned int	ddrphy_dlllock_configuration;
	unsigned int	ddrphy_dlllock_status;
	unsigned int	ddrphy_dlllock_option;
	unsigned char	res73[0x34];
	unsigned int	apll_sysclk_configuration;
	unsigned int	apll_sysclk_status;
	unsigned int	apll_sysclk_option;
	unsigned char	res74[0x18];
	unsigned int	mpll_sysclk_status;
	unsigned int	mpll_sysclk_option;
	unsigned char	res75[0x14];
	unsigned int	vpll_sysclk_configuration;
	unsigned int	vpll_sysclk_status;
	unsigned int	vpll_sysclk_option;
	unsigned char	res76[0x14];
	unsigned int	epll_sysclk_configuration;
	unsigned int	epll_sysclk_status;
	unsigned int	epll_sysclk_option;
	unsigned char	res77[0x14];
	unsigned int	bpll_sysclk_configuration;
	unsigned int	bpll_sysclk_status;
	unsigned int	bpll_sysclk_option;
	unsigned char	res78[0x14];
	unsigned int	cpll_sysclk_configuration;
	unsigned int	cpll_sysclk_status;
	unsigned int	cpll_sysclk_option;
	unsigned char	res79[0x14];
	unsigned int	gpll_sysclk_configuration;
	unsigned int	gpll_sysclk_status;
	unsigned int	gpll_sysclk_option;
	unsigned char	res80[0x54];
	unsigned int	mplluser_sysclk_configuration;
	unsigned int	mplluser_sysclk_status;
	unsigned int	mplluser_sysclk_option;
	unsigned char	res81[0x54];
	unsigned int	bplluser_sysclk_configuration;
	unsigned int	bplluser_sysclk_status;
	unsigned int	bplluser_sysclk_option;
	unsigned char	res82[0x74];
	unsigned int	top_bus_configuration;
	unsigned int	top_bus_status;
	unsigned int	top_bus_option;
	unsigned char	res83[0x14];
	unsigned int	top_retention_configuration;
	unsigned int	top_retention_status;
	unsigned int	top_retention_option;
	unsigned char	res84[0x14];
	unsigned int	top_pwr_configuration;
	unsigned int	top_pwr_status;
	unsigned int	top_pwr_option;
	unsigned char	res85[0x34];
	unsigned int	top_bus_dmc_configuration;
	unsigned int	top_bus_dmc_status;
	unsigned int	top_bus_dmc_option;
	unsigned char	res86[0x14];
	unsigned int	top_retention_dmc_configuration;
	unsigned int	top_retention_dmc_status;
	unsigned int	top_retention_dmc_option;
	unsigned char	res87[0x14];
	unsigned int	top_pwr_dmc_configuration;
	unsigned int	top_pwr_dmc_status;
	unsigned int	top_pwr_dmc_option;
	unsigned char	res88[0x34];
	unsigned int	logic_reset_configuration;
	unsigned int	logic_reset_status;
	unsigned int	logic_reset_option;
	unsigned char	res89[0x14];
	unsigned int	oscclk_gate_configuration;
	unsigned int	oscclk_gate_status;
	unsigned int	oscclk_gate_option;
	unsigned char	res90[0x54];
	unsigned int	logic_reset_dmc_configuration;
	unsigned int	logic_reset_dmc_status;
	unsigned int	logic_reset_dmc_option;
	unsigned char	res91[0x14];
	unsigned int	oscclk_gate_dmc_configuration;
	unsigned int	oscclk_gate_dmc_status;
	unsigned int	oscclk_gate_dmc_option;
	unsigned char	res92[0x54];
	unsigned int	usbotg_mem_configuration;
	unsigned int	usbotg_mem_status;
	unsigned int	usbotg_mem_option;
	unsigned char	res93[0x34];
	unsigned int	g2d_mem_configuration;
	unsigned int	g2d_mem_status;
	unsigned int	g2d_mem_option;
	unsigned char	res94[0x14];
	unsigned int	usbdrd_mem_configuration;
	unsigned int	usbdrd_mem_status;
	unsigned int	usbdrd_mem_option;
	unsigned char	res95[0x14];
	unsigned int	efnand_mem_configuration;
	unsigned int	efnand_mem_status;
	unsigned int	efnand_mem_option;
	unsigned char	res96[0x14];
	unsigned int	cssys_mem_configuration;
	unsigned int	cssys_mem_status;
	unsigned int	cssys_mem_option;
	unsigned char	res97[0x14];
	unsigned int	secss_mem_configuration;
	unsigned int	secss_mem_status;
	unsigned int	secss_mem_option;
	unsigned char	res98[0x14];
	unsigned int	rotator_mem_configuration;
	unsigned int	rotator_mem_status;
	unsigned int	rotator_mem_option;
	unsigned char	res99[0x14];
	unsigned int	intram_mem_configuration;
	unsigned int	intram_mem_status;
	unsigned int	intram_mem_option;
	unsigned char	res100[0x14];
	unsigned int	introm_mem_configuration;
	unsigned int	introm_mem_status;
	unsigned int	introm_mem_option;
	unsigned char	res101[0x14];
	unsigned int	jpeg_mem_configuration;
	unsigned int	jpeg_mem_status;
	unsigned int	jpeg_mem_option;
	unsigned char	res102[0x14];
	unsigned int	hsi_mem_configuration;
	unsigned int	hsi_mem_status;
	unsigned int	hsi_mem_option;
	unsigned char	res103[0x34];
	unsigned int	mcuiop_mem_configuration;
	unsigned int	mcuiop_mem_status;
	unsigned int	mcuiop_mem_option;
	unsigned char	res104[0x14];
	unsigned int	sata_mem_configuration;
	unsigned int	sata_mem_status;
	unsigned int	sata_mem_option;
	unsigned char	res105[0x34];
	unsigned int	pad_retention_dram_configuration;
	unsigned int	pad_retention_dram_status;
	unsigned int	pad_retention_dram_option;
	unsigned char	res106[0x14];
	unsigned int	pad_retention_mau_configuration;
	unsigned int	pad_retention_mau_status;
	unsigned int	pad_retention_mau_option;
	unsigned char	res107[0x14];
	unsigned int	pad_retention_jtag_configuration;
	unsigned int	pad_retention_jtag_status;
	unsigned int	pad_retention_jtag_option;
	unsigned char	res108[0x74];
	unsigned int	pad_retention_mmc2_configuration;
	unsigned int	pad_retention_mmc2_status;
	unsigned int	pad_retention_mmc2_option;
	unsigned char	res109[0x14];
	unsigned int	pad_retention_mmc3_configuration;
	unsigned int	pad_retention_mmc3_status;
	unsigned int	pad_retention_mmc3_option;
	unsigned char	res110[0x14];
	unsigned int	pad_retention_gpio_configuration;
	unsigned int	pad_retention_gpio_status;
	unsigned int	pad_retention_gpio_option;
	unsigned char	res111[0x14];
	unsigned int	pad_retention_uart_configuration;
	unsigned int	pad_retention_uart_status;
	unsigned int	pad_retention_uart_option;
	unsigned char	res112[0x14];
	unsigned int	pad_retention_mmc0_configuration;
	unsigned int	pad_retention_mmc0_status;
	unsigned int	pad_retention_mmc0_option;
	unsigned char	res113[0x14];
	unsigned int	pad_retention_mmc1_configuration;
	unsigned int	pad_retention_mmc1_status;
	unsigned int	pad_retention_mmc1_option;
	unsigned char	res114[0x14];
	unsigned int	pad_retention_ebia_configuration;
	unsigned int	pad_retention_ebia_status;
	unsigned int	pad_retention_ebia_option;
	unsigned char	res115[0x14];
	unsigned int	pad_retention_ebib_configuration;
	unsigned int	pad_retention_ebib_status;
	unsigned int	pad_retention_ebib_option;
	unsigned char	res116[0x14];
	unsigned int	pad_retention_spi_configuration;
	unsigned int	pad_retention_spi_status;
	unsigned int	pad_retention_spi_option;
	unsigned char	res117[0x14];
	unsigned int	pad_retention_gpio_dmc_configuration;
	unsigned int	pad_retention_gpio_dmc_status;
	unsigned int	pad_retention_gpio_dmc_option;
	unsigned char	res118[0x14];
	unsigned int	pad_isolation_configuration;
	unsigned int	pad_isolation_status;
	unsigned int	pad_isolation_option;
	unsigned char	res119[0x74];
	unsigned int	pad_isolation_dmc_configuration;
	unsigned int	pad_isolation_dmc_status;
	unsigned int	pad_isolation_dmc_option;
	unsigned char	res120[0x74];
	unsigned int	pad_alv_sel_configuration;
	unsigned int	pad_alv_sel_status;
	unsigned int	pad_alv_sel_option0;
	unsigned int	ps_hold_control;
	unsigned char	res130[0x110];
	unsigned int	xxti_configuration;
	unsigned int	xxti_status;
	unsigned int	xxti_option;
	unsigned char	res131[0x10];
	unsigned int	xxti_duration3;
	unsigned char	res132[0x1c0];
	unsigned int	ext_regulator_configuration;
	unsigned int	ext_regulator_status;
	unsigned int	ext_regulator_option;
	unsigned char	res133[0x10];
	unsigned int	ext_regulator_duration3;
	unsigned char	res134[0x1e0];
	unsigned int	gpio_mode_configuration;
	unsigned int	gpio_mode_status;
	unsigned int	gpio_mode_option;
	unsigned char	res135[0xf4];
	unsigned int	gpio_mode_dmc_configuration;
	unsigned int	gpio_mode_dmc_status;
	unsigned int	gpio_mode_dmc_option;
	unsigned char	res136[0xd4];
	unsigned int	gpio_mode_mau_configuration;
	unsigned int	gpio_mode_mau_status;
	unsigned int	gpio_mode_mau_option;
	unsigned char	res137[0x14];
	unsigned int	top_asb_reset_configuration;
	unsigned int	top_asb_reset_status;
	unsigned int	top_asb_reset_option;
	unsigned char	res138[0x14];
	unsigned int	top_asb_isolation_configuration;
	unsigned int	top_asb_isolation_status;
	unsigned int	top_asb_isolation_option;
	unsigned char	res139[0x5d4];
	unsigned int	gscl_configuration;
	unsigned int	gscl_status;
	unsigned int	gscl_option;
	unsigned char	res140[0x14];
	unsigned int	isp_configuration;
	unsigned int	isp_status;
	unsigned int	isp_option;
	unsigned char	res141[0x14];
	unsigned int	mfc_configuration;
	unsigned int	mfc_status;
	unsigned int	mfc_option;
	unsigned char	res142[0x14];
	unsigned int	g3d_configuration;
	unsigned int	g3d_status;
	unsigned int	g3d_option;
	unsigned char	res143[0x34];
	unsigned int	disp1_configuration;
	unsigned int	disp1_status;
	unsigned int	disp1_option;
	unsigned char	res144[0x14];
	unsigned int	mau_configuration;
	unsigned int	mau_status;
	unsigned int	mau_option;
	unsigned char	res145[0x334];
	unsigned int	cmu_clkstop_gscl_configuration;
	unsigned int	cmu_clkstop_gscl_status;
	unsigned int	cmu_clkstop_gscl_option;
	unsigned char	res146[0x14];
	unsigned int	cmu_clkstop_isp_configuration;
	unsigned int	cmu_clkstop_isp_status;
	unsigned int	cmu_clkstop_isp_option;
	unsigned char	res147[0x14];
	unsigned int	cmu_clkstop_mfc_configuration;
	unsigned int	cmu_clkstop_mfc_status;
	unsigned int	cmu_clkstop_mfc_option;
	unsigned char	res148[0x14];
	unsigned int	cmu_clkstop_g3d_configuration;
	unsigned int	cmu_clkstop_g3d_status;
	unsigned int	cmu_clkstop_g3d_option;
	unsigned char	res149[0x34];
	unsigned int	cmu_clkstop_disp1_configuration;
	unsigned int	cmu_clkstop_disp1_status;
	unsigned int	cmu_clkstop_disp1_option;
	unsigned char	res150[0x14];
	unsigned int	cmu_clkstop_mau_configuration;
	unsigned int	cmu_clkstop_mau_status;
	unsigned int	cmu_clkstop_mau_option;
	unsigned char	res151[0x134];
	unsigned int	cmu_sysclk_gscl_configuration;
	unsigned int	cmu_sysclk_gscl_status;
	unsigned int	cmu_sysclk_gscl_option;
	unsigned char	res152[0x18];
	unsigned int	cmu_sysclk_isp_status;
	unsigned int	cmu_sysclk_isp_option;
	unsigned char	res153[0x18];
	unsigned int	cmu_sysclk_mfc_status;
	unsigned int	cmu_sysclk_mfc_option;
	unsigned char	res154[0x18];
	unsigned int	cmu_sysclk_g3d_status;
	unsigned int	cmu_sysclk_g3d_option;
	unsigned char	res155[0x38];
	unsigned int	cmu_sysclk_disp1_status;
	unsigned int	cmu_sysclk_disp1_option;
	unsigned char	res156[0x18];
	unsigned int	cmu_sysclk_mau_status;
	unsigned int	cmu_sysclk_mau_option;
	unsigned char	res157[0x534];
	unsigned int	cmu_reset_gscl_configuration;
	unsigned int	cmu_reset_gscl_status;
	unsigned int	cmu_reset_gscl_option;
	unsigned char	res158[0x14];
	unsigned int	cmu_reset_isp_configuration;
	unsigned int	cmu_reset_isp_status;
	unsigned int	cmu_reset_isp_option;
	unsigned char	res159[0x14];
	unsigned int	cmu_reset_mfc_configuration;
	unsigned int	cmu_reset_mfc_status;
	unsigned int	cmu_reset_mfc_option;
	unsigned char	res160[0x14];
	unsigned int	cmu_reset_g3d_configuration;
	unsigned int	cmu_reset_g3d_status;
	unsigned int	cmu_reset_g3d_option;
	unsigned char	res161[0x34];
	unsigned int	cmu_reset_disp1_configuration;
	unsigned int	cmu_reset_disp1_status;
	unsigned int	cmu_reset_disp1_option;
	unsigned char	res162[0x14];
	unsigned int	cmu_reset_mau_configuration;
	unsigned int	cmu_reset_mau_status;
	unsigned int	cmu_reset_mau_option;
	unsigned char	res163[0x24];
};

struct exynos5420_power {
	unsigned int	om_stat;
	unsigned int	lpi_mask0;
	unsigned int	lpi_mask1;
	unsigned char	res1[0x10];
	unsigned int	rtc_clko_sel;
	unsigned char	res2[0x1e0];
	unsigned int	central_seq_configuration;
	unsigned int	central_seq_status;
	unsigned int	central_seq_option;
	unsigned char	res3[0x14];
	unsigned int	seq_transition0;
	unsigned int	seq_transition1;
	unsigned int	seq_transition2;
	unsigned int	seq_transition3;
	unsigned int	seq_transition4;
	unsigned int	seq_transition5;
	unsigned int	seq_transition6;
	unsigned int	seq_transition7;
	unsigned int	central_seq_coreblk_configuration;
	unsigned int	central_seq_coreblk_status;
	unsigned int	central_seq_coreblk_option;
	unsigned char	res4[0x14];
	unsigned int	seq_coreblk_transition0;
	unsigned int	seq_coreblk_transition1;
	unsigned int	seq_coreblk_transition2;
	unsigned int	seq_coreblk_transition3;
	unsigned int	seq_coreblk_transition4;
	unsigned int	seq_coreblk_transition5;
	unsigned int	seq_coreblk_transition6;
	unsigned int	seq_coreblk_transition7;
	unsigned char	res5[0x180];
	unsigned int	swreset;
	unsigned int	rst_stat;
	unsigned int	automatic_wdt_reset_disable;
	unsigned int	mask_wdt_reset_request;
	unsigned int	mask_wreset_request;
	unsigned char	res6[0xec];
	unsigned int	reset_sequencer_configuration;
	unsigned int	reset_sequencer_status;
	unsigned int	reset_sequencer_option;
	unsigned char	res7[0xf4];
	unsigned int	wakeup_stat;
	unsigned int	eint_wakeup_mask;
	unsigned int	wakeup_mask;
	unsigned int	wakeup_interrupt;
	unsigned char	res8[0x10];
	unsigned int	wakeup_stat_coreblk;
	unsigned int	eint_wakeup_mask_coreblk;
	unsigned int	wakeup_mask_coreblk;
	unsigned int	wakeup_interrupt_coreblk;
	unsigned char	res9[0xd0];
	unsigned int	hdmi_phy_control;
	unsigned int	usbdev_phy_control;
	unsigned int	usbdev1_phy_control;
	unsigned int	usbhost_phy_control;
	unsigned char	res104[0x4];
	unsigned int	mipi_phy0_control;
	unsigned int	mipi_phy1_control;
	unsigned int	mipi_phy2_control;
	unsigned int	adc_phy_control;
	unsigned int	mtcadc_phy_control;
	unsigned int	dptx_phy_control;
	unsigned char	res10[0xd4];
	unsigned int	inform0;
	unsigned int	inform1;
	unsigned int	inform2;
	unsigned int	inform3;
	unsigned int	sysip_dat0;
	unsigned int	sysip_dat1;
	unsigned int	sysip_dat2;
	unsigned int	sysip_dat3;
	unsigned char	res11[0xe0];
	unsigned int	pmu_spare0;
	unsigned int	pmu_spare1; /* Store PHY0_CON4 for read leveling */
	unsigned int	pmu_spare2; /* Store PHY1_CON4 for read leveling */
	unsigned int	pmu_spare3;
	unsigned char	res12[0x4];
	unsigned int	cg_status0;
	unsigned int	cg_status1;
	unsigned int	cg_status2;
	unsigned int	cg_status3;
	unsigned int	cg_status4;
	unsigned char	res200[0x58];
	unsigned int	irom_data_reg0;
	unsigned int	irom_data_reg1;
	unsigned int	irom_data_reg2;
	unsigned int	irom_data_reg3;
	unsigned char	res13[0x70];
	unsigned int	pmu_debug;
	unsigned char	res14[0x5fc];
	unsigned int	arm_core0_sys_pwr_reg;
	unsigned char	res500[0xc];
	unsigned int	arm_core1_sys_pwr_reg;
	unsigned char	res501[0xc];
	unsigned int	arm_core2_sys_pwr_reg;
	unsigned char	res502[0xc];
	unsigned int	arm_core3_sys_pwr_reg;
	unsigned char	res503[0xc];
	unsigned int	kfc_core0_sys_pwr_reg;
	unsigned char	res504[0xc];
	unsigned int	kfc_core1_sys_pwr_reg;
	unsigned char	res505[0xc];
	unsigned int	kfc_core2_sys_pwr_reg;
	unsigned char	res506[0xc];
	unsigned int	kfc_core3_sys_pwr_reg;
	unsigned char	res507[0x1c];
	unsigned int	isp_arm_sys_pwr_reg;
	unsigned char	res18[0xc];
	unsigned int	arm_common_sys_pwr_reg;
	unsigned char	res508[0xc];
	unsigned int	kfc_common_sys_pwr_reg;
	unsigned char	res19[0xc];
	unsigned int	arm_l2_sys_pwr_reg;
	unsigned char	res509[0xc];
	unsigned int	kfc_l2_sys_pwr_reg;
	unsigned char	res20[0xc];
	unsigned int	cmu_cpu_aclkstop_sys_pwr_reg;
	unsigned int	cmu_cpu_sclkstop_sys_pwr_reg;
	unsigned char	res510[0x8];
	unsigned int	cmu_kfc_aclkstop_sys_pwr_reg;
	unsigned char	res511[0xc];
	unsigned int	cmu_aclkstop_sys_pwr_reg;
	unsigned int	cmu_sclkstop_sys_pwr_reg;
	unsigned char	res21[0x4];
	unsigned int	cmu_reset_sys_pwr_reg;
	unsigned char	res22[0x10];
	unsigned int	cmu_aclkstop_coreblk_sys_pwr_reg;
	unsigned int	cmu_sclkstop_coreblk_sys_pwr_reg;
	unsigned char	res23[0x4];
	unsigned int	cmu_reset_coreblk_sys_pwr_reg;
	unsigned int	dram_freq_down_sys_pwr_reg;
	unsigned int	ddrphy_dlloff_sys_pwr_reg;
	unsigned int	ddrphy_dlllock_sys_pwr_reg;
	unsigned char	res25[0x4];
	unsigned int	apll_sysclk_sys_pwr_reg;
	unsigned int	mpll_sysclk_sys_pwr_reg;
	unsigned int	vpll_sysclk_sys_pwr_reg;
	unsigned int	epll_sysclk_sys_pwr_reg;
	unsigned int	bpll_sysclk_sys_pwr_reg;
	unsigned int	cpll_sysclk_sys_pwr_reg;
	unsigned int	dpll_sysclk_sys_pwr_reg;
	unsigned int	ipll_sysclk_sys_pwr_reg;
	unsigned int	kpll_sysclk_sys_pwr_reg;
	unsigned int	mplluser_sysclk_sys_pwr_reg;
	unsigned char	res512[0x8];
	unsigned int	bplluser_sysclk_sys_pwr_reg;
	unsigned int	rpll_sysclk_sys_pwr_reg;
	unsigned int	spll_sysclk_sys_pwr_reg;
	unsigned char	res26[0x4];
	unsigned int	top_bus_sys_pwr_reg;
	unsigned int	top_retention_sys_pwr_reg;
	unsigned int	top_pwr_sys_pwr_reg;
	unsigned char	res29[0x4];
	unsigned int	top_bus_coreblk_sys_pwr_reg;
	unsigned int	top_retention_coreblk_sys_pwr_reg;
	unsigned int	top_pwr_coreblk_sys_pwr_reg;
	unsigned char	res30[0x4];
	unsigned int	logic_reset_sys_pwr_reg;
	unsigned int	oscclk_gate_sys_pwr_reg;
	unsigned char	res31[0x8];
	unsigned int	logic_reset_coreblk_sys_pwr_reg;
	unsigned int	oscclk_gate_coreblk_sys_pwr_reg;
	unsigned int	intram_mem_sys_pwr_reg;
	unsigned int	introm_mem_sys_pwr_reg;
	unsigned char	res32[0x44];
	unsigned int	pad_retention_mau_sys_pwr_reg;
	unsigned int	pad_retention_jtag_sys_pwr_reg;
	unsigned char	res36[0x4];
	unsigned int	pad_retention_dram_sys_pwr_reg;
	unsigned int	pad_retention_uart_sys_pwr_reg;
	unsigned int	pad_retention_mmca_sys_pwr_reg;
	unsigned int	pad_retention_mmcb_sys_pwr_reg;
	unsigned int	pad_retention_mmcc_sys_pwr_reg;
	unsigned int	pad_retention_hsi_sys_pwr_reg;
	unsigned int	pad_retention_ebia_sys_pwr_reg;
	unsigned int	pad_retention_ebib_sys_pwr_reg;
	unsigned int	pad_retention_spi_sys_pwr_reg;
	unsigned int	pad_retention_dram_coreblk_sys_pwr_reg;
	unsigned char	res28[0x8];
	unsigned int	pad_isolation_sys_pwr_reg;
	unsigned char	res37[0xc];
	unsigned int	pad_isolation_coreblk_sys_pwr_reg;
	unsigned char	res38[0xc];
	unsigned int	pad_alv_sel_sys_pwr_reg;
	unsigned char	res39[0x1c];
	unsigned int	xusbxti_sys_pwr_reg;
	unsigned int	xxti_sys_pwr_reg;
	unsigned char	res40[0x38];
	unsigned int	ext_regulator_sys_pwr_reg;
	unsigned char	res41[0x3c];
	unsigned int	gpio_mode_sys_pwr_reg;
	unsigned char	res42[0x1c];
	unsigned int	gpio_mode_coreblk_sys_pwr_reg;
	unsigned char	res43[0x1c];
	unsigned int	gpio_mode_mau_sys_pwr_reg;
	unsigned int	top_asb_reset_sys_pwr_reg;
	unsigned int	top_asb_isolation_sys_pwr_reg;
	unsigned char	res44[0xb4];
	unsigned int	gscl_sys_pwr_reg;
	unsigned int	isp_sys_pwr_reg;
	unsigned int	mfc_sys_pwr_reg;
	unsigned int	g3d_sys_pwr_reg;
	unsigned int	disp1_sys_pwr_reg;
	unsigned int	mau_sys_pwr_reg;
	unsigned int	g2d_sys_pwr_reg;
	unsigned int	msc_sys_pwr_reg;
	unsigned int	fsys_sys_pwr_reg;
	unsigned int	fsys2_sys_pwr_reg;
	unsigned int	psgen_sys_pwr_reg;
	unsigned int	peric_sys_pwr_reg;
	unsigned int	wcore_sys_pwr_reg;
	unsigned char	res46[0x4c];
	unsigned int	cmu_clkstop_gscl_sys_pwr_reg;
	unsigned int	cmu_clkstop_isp_sys_pwr_reg;
	unsigned int	cmu_clkstop_mfc_sys_pwr_reg;
	unsigned int	cmu_clkstop_g3d_sys_pwr_reg;
	unsigned int	cmu_clkstop_disp1_sys_pwr_reg;
	unsigned int	cmu_clkstop_mau_sys_pwr_reg;
	unsigned int	cmu_clkstop_g2d_sys_pwr_reg;
	unsigned int	cmu_clkstop_msc_sys_pwr_reg;
	unsigned int	cmu_clkstop_fsys_sys_pwr_reg;
	unsigned int	cmu_clkstop_fsys2_sys_pwr_reg;
	unsigned int	cmu_clkstop_psgen_sys_pwr_reg;
	unsigned int	cmu_clkstop_peric_sys_pwr_reg;
	unsigned int	cmu_clkstop_wcore_sys_pwr_reg;
	unsigned char	res48[0x8];
	unsigned int	cmu_sysclk_toppwr_sys_pwr_reg;
	unsigned int	cmu_sysclk_gscl_sys_pwr_reg;
	unsigned int	cmu_sysclk_isp_sys_pwr_reg;
	unsigned int	cmu_sysclk_mfc_sys_pwr_reg;
	unsigned int	cmu_sysclk_g3d_sys_pwr_reg;
	unsigned int	cmu_sysclk_disp1_sys_pwr_reg;
	unsigned int	cmu_sysclk_mau_sys_pwr_reg;
	unsigned int	cmu_sysclk_g2d_sys_pwr_reg;
	unsigned int	cmu_sysclk_msc_sys_pwr_reg;
	unsigned int	cmu_sysclk_fsys_sys_pwr_reg;
	unsigned int	cmu_sysclk_fsys2_sys_pwr_reg;
	unsigned int	cmu_sysclk_psgen_sys_pwr_reg;
	unsigned int	cmu_sysclk_peric_sys_pwr_reg;
	unsigned int	cmu_sysclk_wcore_sys_pwr_reg;
	unsigned int	cmu_sysclk_coreblk_toppwr_sys_pwr_reg;
	unsigned char	res50[0x78];
	unsigned int	cmu_reset_fsys2_sys_pwr_reg;
	unsigned int	cmu_reset_psgen_sys_pwr_reg;
	unsigned int	cmu_reset_peric_sys_pwr_reg;
	unsigned int	cmu_reset_wcore_sys_pwr_reg;
	unsigned int	cmu_reset_gscl_sys_pwr_reg;
	unsigned int	cmu_reset_isp_sys_pwr_reg;
	unsigned int	cmu_reset_mfc_sys_pwr_reg;
	unsigned int	cmu_reset_g3d_sys_pwr_reg;
	unsigned int	cmu_reset_disp1_sys_pwr_reg;
	unsigned int	cmu_reset_mau_sys_pwr_reg;
	unsigned int	cmu_reset_g2d_sys_pwr_reg;
	unsigned int	cmu_reset_msc_sys_pwr_reg;
	unsigned int	cmu_reset_fsys_sys_pwr_reg;
	unsigned char	res52[0xa5c];
	unsigned int	arm_core0_configuration;
	unsigned int	arm_core0_status;
	unsigned int	arm_core0_option;
	unsigned char	res53[0x14];
	unsigned int	dis_irq_arm_core0_local_configuration;
	unsigned int	dis_irq_arm_core0_local_status;
	unsigned int	dis_irq_arm_core0_local_option;
	unsigned char	res54[0x14];
	unsigned int	dis_irq_arm_core0_central_configuration;
	unsigned int	dis_irq_arm_core0_central_status;
	unsigned int	dis_irq_arm_core0_central_option;
	unsigned char	res55[0x34];
	unsigned int	arm_core1_configuration;
	unsigned int	arm_core1_status;
	unsigned int	arm_core1_option;
	unsigned char	res56[0x14];
	unsigned int	dis_irq_arm_core1_local_configuration;
	unsigned int	dis_irq_arm_core1_local_status;
	unsigned int	dis_irq_arm_core1_local_option;
	unsigned char	res57[0x14];
	unsigned int	dis_irq_arm_core1_central_configuration;
	unsigned int	dis_irq_arm_core1_central_status;
	unsigned int	dis_irq_arm_core1_central_option;
	unsigned char	res600[0x34];
	unsigned int	arm_core2_configuration;
	unsigned int	arm_core2_status;
	unsigned int	arm_core2_option;
	unsigned char	res601[0x14];
	unsigned int	dis_irq_arm_core2_local_configuration;
	unsigned int	dis_irq_arm_core2_local_status;
	unsigned int	dis_irq_arm_core2_local_option;
	unsigned char	res602[0x14];
	unsigned int	dis_irq_arm_core2_central_configuration;
	unsigned int	dis_irq_arm_core2_central_status;
	unsigned int	dis_irq_arm_core2_central_option;
	unsigned char	res603[0x34];
	unsigned int	arm_core3_configuration;
	unsigned int	arm_core3_status;
	unsigned int	arm_core3_option;
	unsigned char	res900[0x14];
	unsigned int	dis_irq_arm_core3_local_configuration;
	unsigned int	dis_irq_arm_core3_local_status;
	unsigned int	dis_irq_arm_core3_local_option;
	unsigned char	res901[0x14];
	unsigned int	dis_irq_arm_core3_central_configuration;
	unsigned int	dis_irq_arm_core3_central_status;
	unsigned int	dis_irq_arm_core3_central_option;
	unsigned char	res604[0x34];
	unsigned int	kfc_core0_configuration;
	unsigned int	kfc_core0_status;
	unsigned int	kfc_core0_option;
	unsigned char	res605[0x14];
	unsigned int	dis_irq_kfc_core0_local_configuration;
	unsigned int	dis_irq_kfc_core0_local_status;
	unsigned int	dis_irq_kfc_core0_local_option;
	unsigned char	res606[0x14];
	unsigned int	dis_irq_kfc_core0_central_configuration;
	unsigned int	dis_irq_kfc_core0_central_status;
	unsigned int	dis_irq_kfc_core0_central_option;
	unsigned char	res607[0x34];
	unsigned int	kfc_core1_configuration;
	unsigned int	kfc_core1_status;
	unsigned int	kfc_core1_option;
	unsigned char	res608[0x14];
	unsigned int	dis_irq_kfc_core1_local_configuration;
	unsigned int	dis_irq_kfc_core1_local_status;
	unsigned int	dis_irq_kfc_core1_local_option;
	unsigned char	res609[0x14];
	unsigned int	dis_irq_kfc_core1_central_configuration;
	unsigned int	dis_irq_kfc_core1_central_status;
	unsigned int	dis_irq_kfc_core1_central_option;
	unsigned char	res610[0x34];
	unsigned int	kfc_core2_configuration;
	unsigned int	kfc_core2_status;
	unsigned int	kfc_core2_option;
	unsigned char	res611[0x14];
	unsigned int	dis_irq_kfc_core2_local_configuration;
	unsigned int	dis_irq_kfc_core2_local_status;
	unsigned int	dis_irq_kfc_core2_local_option;
	unsigned char	res612[0x14];
	unsigned int	dis_irq_kfc_core2_central_configuration;
	unsigned int	dis_irq_kfc_core2_central_status;
	unsigned int	dis_irq_kfc_core2_central_option;
	unsigned char	res613[0x34];
	unsigned int	kfc_core3_configuration;
	unsigned int	kfc_core3_status;
	unsigned int	kfc_core3_option;
	unsigned char	res614[0x14];
	unsigned int	dis_irq_kfc_core3_local_configuration;
	unsigned int	dis_irq_kfc_core3_local_status;
	unsigned int	dis_irq_kfc_core3_local_option;
	unsigned char	res615[0x14];
	unsigned int	dis_irq_kfc_core3_central_configuration;
	unsigned int	dis_irq_kfc_core3_central_status;
	unsigned int	dis_irq_kfc_core3_central_option;
	unsigned char	res61[0xb4];
	unsigned int	isp_arm_configuration;
	unsigned int	isp_arm_status;
	unsigned int	isp_arm_option;
	unsigned char	res62[0x14];
	unsigned int	dis_irq_isp_arm_local_configuration;
	unsigned int	dis_irq_isp_arm_local_status;
	unsigned int	dis_irq_isp_arm_local_option;
	unsigned char	res63[0x14];
	unsigned int	dis_irq_isp_arm_central_configuration;
	unsigned int	dis_irq_isp_arm_central_status;
	unsigned int	dis_irq_isp_arm_central_option;
	unsigned char	res64[0x34];
	unsigned int	arm_common_configuration;
	unsigned int	arm_common_status;
	unsigned int	arm_common_option;
	unsigned char	res616[0x74];
	unsigned int	kfc_common_configuration;
	unsigned int	kfc_common_status;
	unsigned int	kfc_common_option;
	unsigned char	res65[0x74];
	unsigned int	arm_l2_configuration;
	unsigned int	arm_l2_status;
	unsigned int	arm_l2_option;
	unsigned char	res617[0x74];
	unsigned int	kfc_l2_configuration;
	unsigned int	kfc_l2_status;
	unsigned int	kfc_l2_option;
	unsigned char	res66[0x74];
	unsigned int	cmu_cpu_aclkstop_configuration;
	unsigned int	cmu_cpu_aclkstop_status;
	unsigned int	cmu_cpu_aclkstop_option;
	unsigned char	res67[0x14];
	unsigned int	cmu_cpu_sclkstop_configuration;
	unsigned int	cmu_cpu_sclkstop_status;
	unsigned int	cmu_cpu_sclkstop_option;
	unsigned char	res618[0x4];
	unsigned int	cmu_kfc_aclkstop_configuration;
	unsigned int	cmu_kfc_aclkstop_status;
	unsigned int	cmu_kfc_aclkstop_option;
	unsigned char	res619[0xc4];
	unsigned int	cmu_aclkstop_configuration;
	unsigned int	cmu_aclkstop_status;
	unsigned int	cmu_aclkstop_option;
	unsigned char	res620[0x14];
	unsigned int	cmu_sclkstop_configuration;
	unsigned int	cmu_sclkstop_status;
	unsigned int	cmu_sclkstop_option;
	unsigned char	res68[0x34];
	unsigned int	cmu_reset_configuration;
	unsigned int	cmu_reset_status;
	unsigned int	cmu_reset_option;
	unsigned char	res69[0x94];
	unsigned int	cmu_aclkstop_coreblk_configuration;
	unsigned int	cmu_aclkstop_coreblk_status;
	unsigned int	cmu_aclkstop_coreblk_option;
	unsigned char	res70[0x14];
	unsigned int	cmu_sclkstop_coreblk_configuration;
	unsigned int	cmu_sclkstop_coreblk_status;
	unsigned int	cmu_sclkstop_coreblk_option;
	unsigned char	res71[0x34];
	unsigned int	cmu_reset_coreblk_configuration;
	unsigned int	cmu_reset_coreblk_status;
	unsigned int	cmu_reset_coreblk_option;
	unsigned char	res621[0x14];
	unsigned int	dram_freq_down_configuration;
	unsigned int	dram_freq_down_status;
	unsigned int	dram_freq_down_option;
	unsigned char	res622[0x14];
	unsigned int	ddrphy_dlloff_configuration;
	unsigned int	ddrphy_dlloff_status;
	unsigned int	ddrphy_dlloff_option;
	unsigned char	res72[0x14];
	unsigned int	ddrphy_dlllock_configuration;
	unsigned int	ddrphy_dlllock_status;
	unsigned int	ddrphy_dlllock_option;
	unsigned char	res73[0x34];
	unsigned int	apll_sysclk_configuration;
	unsigned int	apll_sysclk_status;
	unsigned int	apll_sysclk_option;
	unsigned char	res74[0x18];
	unsigned int	mpll_sysclk_status;
	unsigned int	mpll_sysclk_option;
	unsigned char	res75[0x14];
	unsigned int	vpll_sysclk_configuration;
	unsigned int	vpll_sysclk_status;
	unsigned int	vpll_sysclk_option;
	unsigned char	res76[0x14];
	unsigned int	epll_sysclk_configuration;
	unsigned int	epll_sysclk_status;
	unsigned int	epll_sysclk_option;
	unsigned char	res77[0x14];
	unsigned int	bpll_sysclk_configuration;
	unsigned int	bpll_sysclk_status;
	unsigned int	bpll_sysclk_option;
	unsigned char	res78[0x14];
	unsigned int	cpll_sysclk_configuration;
	unsigned int	cpll_sysclk_status;
	unsigned int	cpll_sysclk_option;
	unsigned char	res79[0x14];
	unsigned int	dpll_sysclk_configuration;
	unsigned int	dpll_sysclk_status;
	unsigned int	dpll_sysclk_option;
	unsigned char	res700[0x14];
	unsigned int	ipll_sysclk_configuration;
	unsigned int	ipll_sysclk_status;
	unsigned int	ipll_sysclk_option;
	unsigned char	res903[0x14];
	unsigned int	kpll_sysclk_configuration;
	unsigned int	kpll_sysclk_status;
	unsigned int	kpll_sysclk_option;
	unsigned char	res80[0x14];
	unsigned int	mplluser_sysclk_configuration;
	unsigned int	mplluser_sysclk_status;
	unsigned int	mplluser_sysclk_option;
	unsigned char	res81[0x54];
	unsigned int	bplluser_sysclk_configuration;
	unsigned int	bplluser_sysclk_status;
	unsigned int	bplluser_sysclk_option;
	unsigned char	res701[0x14];
	unsigned int	rplluser_sysclk_configuration;
	unsigned int	rplluser_sysclk_status;
	unsigned int	rplluser_sysclk_option;
	unsigned char	res702[0x14];
	unsigned int	splluser_sysclk_configuration;
	unsigned int	splluser_sysclk_status;
	unsigned int	splluser_sysclk_option;
	unsigned char	res82[0x34];
	unsigned int	top_bus_configuration;
	unsigned int	top_bus_status;
	unsigned int	top_bus_option;
	unsigned char	res83[0x14];
	unsigned int	top_retention_configuration;
	unsigned int	top_retention_status;
	unsigned int	top_retention_option;
	unsigned char	res84[0x14];
	unsigned int	top_pwr_configuration;
	unsigned int	top_pwr_status;
	unsigned int	top_pwr_option;
	unsigned char	res85[0x34];
	unsigned int	top_bus_coreblk_configuration;
	unsigned int	top_bus_coreblk_status;
	unsigned int	top_bus_coreblk_option;
	unsigned char	res86[0x14];
	unsigned int	top_retention_coreblk_configuration;
	unsigned int	top_retention_coreblk_status;
	unsigned int	top_retention_coreblk_option;
	unsigned char	res87[0x14];
	unsigned int	top_pwr_coreblk_configuration;
	unsigned int	top_pwr_coreblk_status;
	unsigned int	top_pwr_coreblk_option;
	unsigned char	res88[0x34];
	unsigned int	logic_reset_configuration;
	unsigned int	logic_reset_status;
	unsigned int	logic_reset_option;
	unsigned char	res89[0x14];
	unsigned int	oscclk_gate_configuration;
	unsigned int	oscclk_gate_status;
	unsigned int	oscclk_gate_option;
	unsigned char	res90[0x54];
	unsigned int	logic_reset_coreblk_configuration;
	unsigned int	logic_reset_coreblk_status;
	unsigned int	logic_reset_coreblk_option;
	unsigned char	res91[0x14];
	unsigned int	oscclk_gate_coreblk_configuration;
	unsigned int	oscclk_gate_coreblk_status;
	unsigned int	oscclk_gate_coreblk_option;
	unsigned char	res99[0x174];
	unsigned int	intram_mem_configuration;
	unsigned int	intram_mem_status;
	unsigned int	intram_mem_option;
	unsigned char	res100[0x14];
	unsigned int	introm_mem_configuration;
	unsigned int	introm_mem_status;
	unsigned int	introm_mem_option;
	unsigned char	res101[0xb4];
	unsigned int	pad_retention_dram_configuration;
	unsigned int	pad_retention_dram_status;
	unsigned int	pad_retention_dram_option;
	unsigned char	res106[0x14];
	unsigned int	pad_retention_mau_configuration;
	unsigned int	pad_retention_mau_status;
	unsigned int	pad_retention_mau_option;
	unsigned char	res107[0x14];
	unsigned int	pad_retention_jtag_configuration;
	unsigned int	pad_retention_jtag_status;
	unsigned int	pad_retention_jtag_option;
	unsigned char	res92[0x74];
	unsigned int	pad_retention_dram_configuration_2;
	unsigned int	pad_retention_dram_status_2;
	unsigned int	pad_retention_dram_option_2;
	unsigned char	res111[0x14];
	unsigned int	pad_retention_uart_configuration;
	unsigned int	pad_retention_uart_status;
	unsigned int	pad_retention_uart_option;
	unsigned char	res112[0x14];
	unsigned int	pad_retention_mmca_configuration;
	unsigned int	pad_retention_mmca_status;
	unsigned int	pad_retention_mmca_option;
	unsigned char	res113[0x14];
	unsigned int	pad_retention_mmcb_configuration;
	unsigned int	pad_retention_mmcb_status;
	unsigned int	pad_retention_mmcb_option;
	unsigned char	res93[0x14];
	unsigned int	pad_retention_mmcc_configuration;
	unsigned int	pad_retention_mmcc_status;
	unsigned int	pad_retention_mmcc_option;
	unsigned char	res94[0x14];
	unsigned int	pad_retention_hsi_configuration;
	unsigned int	pad_retention_hsi_status;
	unsigned int	pad_retention_hsi_option;
	unsigned char	res114[0x14];
	unsigned int	pad_retention_ebia_configuration;
	unsigned int	pad_retention_ebia_status;
	unsigned int	pad_retention_ebia_option;
	unsigned char	res115[0x14];
	unsigned int	pad_retention_ebib_configuration;
	unsigned int	pad_retention_ebib_status;
	unsigned int	pad_retention_ebib_option;
	unsigned char	res116[0x14];
	unsigned int	pad_retention_spi_configuration;
	unsigned int	pad_retention_spi_status;
	unsigned int	pad_retention_spi_option;
	unsigned char	res117[0x14];
	unsigned int	pad_retention_dram_coreblk_configuration;
	unsigned int	pad_retention_dram_coreblk_status;
	unsigned int	pad_retention_dram_coreblk_option;
	unsigned char	res118[0x14];
	unsigned int	pad_isolation_configuration;
	unsigned int	pad_isolation_status;
	unsigned int	pad_isolation_option;
	unsigned char	res119[0x74];
	unsigned int	pad_isolation_coreblk_configuration;
	unsigned int	pad_isolation_coreblk_status;
	unsigned int	pad_isolation_coreblk_option;
	unsigned char	res120[0x74];
	unsigned int	pad_alv_sel_configuration;
	unsigned int	pad_alv_sel_status;
	unsigned int	pad_alv_sel_option0;
	unsigned int	ps_hold_control;
	unsigned char	res130[0xf0];
	unsigned int	xusbxti_configuration;
	unsigned int	xusbxti_status;
	unsigned int	xusbxti_option;
	unsigned char	res910[0x10];
	unsigned int	xusbxti_duration3;
	unsigned int	xxti_configuration;
	unsigned int	xxti_status;
	unsigned int	xxti_option;
	unsigned char	res131[0x10];
	unsigned int	xxti_duration3;
	unsigned char	res132[0x1c0];
	unsigned int	ext_regulator_configuration;
	unsigned int	ext_regulator_status;
	unsigned int	ext_regulator_option;
	unsigned char	res133[0x10];
	unsigned int	ext_regulator_duration3;
	unsigned char	res134[0x1e0];
	unsigned int	gpio_mode_configuration;
	unsigned int	gpio_mode_status;
	unsigned int	gpio_mode_option;
	unsigned char	res135[0xf4];
	unsigned int	gpio_mode_coreblk_configuration;
	unsigned int	gpio_mode_coreblk_status;
	unsigned int	gpio_mode_coreblk_option;
	unsigned char	res136[0xd4];
	unsigned int	gpio_mode_mau_configuration;
	unsigned int	gpio_mode_mau_status;
	unsigned int	gpio_mode_mau_option;
	unsigned char	res137[0x14];
	unsigned int	top_asb_reset_configuration;
	unsigned int	top_asb_reset_status;
	unsigned int	top_asb_reset_option;
	unsigned char	res138[0x14];
	unsigned int	top_asb_isolation_configuration;
	unsigned int	top_asb_isolation_status;
	unsigned int	top_asb_isolation_option;
	unsigned char	res139[0x5d4];
	unsigned int	gscl_configuration;
	unsigned int	gscl_status;
	unsigned int	gscl_option;
	unsigned char	res140[0x14];
	unsigned int	isp_configuration;
	unsigned int	isp_status;
	unsigned int	isp_option;
	unsigned char	res141[0x34];
	unsigned int	mfc_configuration;
	unsigned int	mfc_status;
	unsigned int	mfc_option;
	unsigned char	res142[0x14];
	unsigned int	g3d_configuration;
	unsigned int	g3d_status;
	unsigned int	g3d_option;
	unsigned char	res143[0x34];
	unsigned int	disp1_configuration;
	unsigned int	disp1_status;
	unsigned int	disp1_option;
	unsigned char	res144[0x14];
	unsigned int	mau_configuration;
	unsigned int	mau_status;
	unsigned int	mau_option;
	unsigned char	res800[0x14];
	unsigned int	g2d_configuration;
	unsigned int	g2d_status;
	unsigned int	g2d_option;
	unsigned char	res801[0x14];
	unsigned int	msc_configuration;
	unsigned int	msc_status;
	unsigned int	msc_option;
	unsigned char	res802[0x14];
	unsigned int	fsys_configuration;
	unsigned int	fsys_status;
	unsigned int	fsys_option;
	unsigned char	res803[0x14];
	unsigned int	fsys2_configuration;
	unsigned int	fsys2_status;
	unsigned int	fsys2_option;
	unsigned char	res804[0x14];
	unsigned int	psgen_configuration;
	unsigned int	psgen_status;
	unsigned int	psgen_option;
	unsigned char	res805[0x14];
	unsigned int	peric_configuration;
	unsigned int	peric_status;
	unsigned int	peric_option;
	unsigned char	res806[0x14];
	unsigned int	wcore_configuration;
	unsigned int	wcore_status;
	unsigned int	wcore_option;
	unsigned char	res145[0x234];
	unsigned int	cmu_clkstop_gscl_configuration;
	unsigned int	cmu_clkstop_gscl_status;
	unsigned int	cmu_clkstop_gscl_option;
	unsigned char	res146[0x14];
	unsigned int	cmu_clkstop_isp_configuration;
	unsigned int	cmu_clkstop_isp_status;
	unsigned int	cmu_clkstop_isp_option;
	unsigned char	res147[0x34];
	unsigned int	cmu_clkstop_mfc_configuration;
	unsigned int	cmu_clkstop_mfc_status;
	unsigned int	cmu_clkstop_mfc_option;
	unsigned char	res148[0x14];
	unsigned int	cmu_clkstop_g3d_configuration;
	unsigned int	cmu_clkstop_g3d_status;
	unsigned int	cmu_clkstop_g3d_option;
	unsigned char	res149[0x34];
	unsigned int	cmu_clkstop_disp1_configuration;
	unsigned int	cmu_clkstop_disp1_status;
	unsigned int	cmu_clkstop_disp1_option;
	unsigned char	res150[0x14];
	unsigned int	cmu_clkstop_mau_configuration;
	unsigned int	cmu_clkstop_mau_status;
	unsigned int	cmu_clkstop_mau_option;
	unsigned char	res807[0x14];
	unsigned int	cmu_clkstop_g2d_configuration;
	unsigned int	cmu_clkstop_g2d_status;
	unsigned int	cmu_clkstop_g2d_option;
	unsigned char	res808[0x14];
	unsigned int	cmu_clkstop_msc_configuration;
	unsigned int	cmu_clkstop_msc_status;
	unsigned int	cmu_clkstop_msc_option;
	unsigned char	res809[0x14];
	unsigned int	cmu_clkstop_fsys_configuration;
	unsigned int	cmu_clkstop_fsys_status;
	unsigned int	cmu_clkstop_fsys_option;
	unsigned char	res810[0x14];
	unsigned int	cmu_clkstop_fsys2_configuration;
	unsigned int	cmu_clkstop_fsys2_status;
	unsigned int	cmu_clkstop_fsys2_option;
	unsigned char	res811[0x14];
	unsigned int	cmu_clkstop_psgen_configuration;
	unsigned int	cmu_clkstop_psgen_status;
	unsigned int	cmu_clkstop_psgen_option;
	unsigned char	res812[0x14];
	unsigned int	cmu_clkstop_peric_configuration;
	unsigned int	cmu_clkstop_peric_status;
	unsigned int	cmu_clkstop_peric_option;
	unsigned char	res813[0x14];
	unsigned int	cmu_clkstop_wcore_configuration;
	unsigned int	cmu_clkstop_wcore_status;
	unsigned int	cmu_clkstop_wcore_option;
	unsigned char	res151[0x14];
	unsigned int	cmu_sysclk_toppwr_configuration;
	unsigned int	cmu_sysclk_toppwr_status;
	unsigned int	cmu_sysclk_toppwr_option;
	unsigned char	res920[0x18];
	unsigned int	cmu_sysclk_gscl_status;
	unsigned int	cmu_sysclk_gscl_option;
	unsigned char	res152[0x18];
	unsigned int	cmu_sysclk_isp_status;
	unsigned int	cmu_sysclk_isp_option;
	unsigned char	res153[0x38];
	unsigned int	cmu_sysclk_mfc_status;
	unsigned int	cmu_sysclk_mfc_option;
	unsigned char	res154[0x18];
	unsigned int	cmu_sysclk_g3d_status;
	unsigned int	cmu_sysclk_g3d_option;
	unsigned char	res155[0x38];
	unsigned int	cmu_sysclk_disp1_status;
	unsigned int	cmu_sysclk_disp1_option;
	unsigned char	res156[0x18];
	unsigned int	cmu_sysclk_mau_status;
	unsigned int	cmu_sysclk_mau_option;
	unsigned char	res814[0x18];
	unsigned int	cmu_sysclk_g2d_status;
	unsigned int	cmu_sysclk_g2d_option;
	unsigned char	res815[0x18];
	unsigned int	cmu_sysclk_msc_status;
	unsigned int	cmu_sysclk_msc_option;
	unsigned char	res922[0x18];
	unsigned int	cmu_sysclk_fsys_status;
	unsigned int	cmu_sysclk_fsys_option;
	unsigned char	res816[0x18];
	unsigned int	cmu_sysclk_fsys2_status;
	unsigned int	cmu_sysclk_fsys2_option;
	unsigned char	res817[0x18];
	unsigned int	cmu_sysclk_psgen_status;
	unsigned int	cmu_sysclk_psgen_option;
	unsigned char	res950[0x18];
	unsigned int	cmu_sysclk_peric_status;
	unsigned int	cmu_sysclk_peric_option;
	unsigned char	res818[0x18];
	unsigned int	cmu_sysclk_wcore_status;
	unsigned int	cmu_sysclk_wcore_option;
	unsigned char	res819[0x18];
	unsigned int	cmu_sysclk_coreblk_toppwr_status;
	unsigned int	cmu_sysclk_coreblk_toppwr_option;
	unsigned char	res157[0x414];
	unsigned int	cmu_reset_gscl_configuration;
	unsigned int	cmu_reset_gscl_status;
	unsigned int	cmu_reset_gscl_option;
	unsigned char	res158[0x14];
	unsigned int	cmu_reset_isp_configuration;
	unsigned int	cmu_reset_isp_status;
	unsigned int	cmu_reset_isp_option;
	unsigned char	res159[0x34];
	unsigned int	cmu_reset_mfc_configuration;
	unsigned int	cmu_reset_mfc_status;
	unsigned int	cmu_reset_mfc_option;
	unsigned char	res160[0x14];
	unsigned int	cmu_reset_g3d_configuration;
	unsigned int	cmu_reset_g3d_status;
	unsigned int	cmu_reset_g3d_option;
	unsigned char	res161[0x34];
	unsigned int	cmu_reset_disp1_configuration;
	unsigned int	cmu_reset_disp1_status;
	unsigned int	cmu_reset_disp1_option;
	unsigned char	res162[0x14];
	unsigned int	cmu_reset_mau_configuration;
	unsigned int	cmu_reset_mau_status;
	unsigned int	cmu_reset_mau_option;
	unsigned char	res163[0x14];
	unsigned int	version_info;
	unsigned int	i2s_bypass;
	unsigned int	kfc_swreset_mask_from_eagle;
	unsigned char	res164[0xf4];
	unsigned int	cmu_reset_g2d_configuration;
	unsigned int	cmu_reset_g2d_status;
	unsigned int	cmu_reset_g2d_option;
	unsigned char	res165[0x14];
	unsigned int	cmu_reset_msc_configuration;
	unsigned int	cmu_reset_msc_status;
	unsigned int	cmu_reset_msc_option;
	unsigned char	res166[0x14];
	unsigned int	cmu_reset_fsys_configuration;
	unsigned int	cmu_reset_fsys_status;
	unsigned int	cmu_reset_fsys_option;
	unsigned char	res167[0x14];
	unsigned int	cmu_reset_fsys2_configuration;
	unsigned int	cmu_reset_fsys2_status;
	unsigned int	cmu_reset_fsys2_option;
	unsigned char	res168[0x14];
	unsigned int	cmu_reset_psgen_configuration;
	unsigned int	cmu_reset_psgen_status;
	unsigned int	cmu_reset_psgen_option;
	unsigned char	res169[0x14];
	unsigned int	cmu_reset_peric_configuration;
	unsigned int	cmu_reset_peric_status;
	unsigned int	cmu_reset_peric_option;
	unsigned char	res170[0x14];
	unsigned int	cmu_reset_wcore_configuration;
	unsigned int	cmu_reset_wcore_status;
	unsigned int	cmu_reset_wcore_option;
};
#endif	/* __ASSEMBLY__ */

#define OM_PIN_BITS	0x1f
#define OM_PIN_SHIFT	0x1
#define OM_PIN_MASK	(OM_PIN_BITS << OM_PIN_SHIFT)

enum {
	/*
	 * Assign the OM pin values for respective boot modes.
	 * Exynos4 does not support spi boot and the mmc boot OM
	 * pin values are the same across Exynos4 and Exynos5.
	 */
	BOOT_MODE_SD = 4,      /* SD_CH2  | USB */
	BOOT_MODE_EMMC = 8,     /* EMMC4.4 | USB */
	BOOT_MODE_EMMC_SD = 40, /* EMMC4.4 | SD_CH2 */
	BOOT_MODE_SERIAL = 20,
	/* Boot based on Operating Mode pin settings */
	BOOT_MODE_OM = 32,
	BOOT_MODE_USB,	/* Boot using USB download */
};

unsigned int get_boot_mode(void);

void set_mipi_phy_ctrl(unsigned int dev_index, unsigned int enable);

#define EXYNOS_MIPI_PHY_ENABLE		(1 << 0)
#define EXYNOS_MIPI_PHY_SRESETN		(1 << 1)
#define EXYNOS_MIPI_PHY_MRESETN		(1 << 2)

void set_usbhost_phy_ctrl(unsigned int enable);

/* Enables hardware tripping to power off the system when TMU fails */
void set_hw_thermal_trip(void);

#define POWER_USB_HOST_PHY_CTRL_EN		(1 << 0)
#define POWER_USB_HOST_PHY_CTRL_DISABLE		(0 << 0)

void set_usbdrd_phy_ctrl(unsigned int enable);

#define POWER_USB_DRD_PHY_CTRL_EN		(1 << 0)
#define POWER_USB_DRD_PHY_CTRL_DISABLE		(0 << 0)

void set_dp_phy_ctrl(unsigned int enable);

#define EXYNOS_DP_PHY_ENABLE		(1 << 0)

#define EXYNOS_PS_HOLD_CONTROL_DATA_HIGH	(1 << 8)
#define POWER_ENABLE_HW_TRIP			(1UL << 31)

/*
 * Set ps_hold data driving value high
 * This enables the machine to stay powered on
 * after the initial power-on condition goes away
 * (e.g. power button).
 */
void set_ps_hold_ctrl(void);

/* PMU_DEBUG bits [12:8] = 0x1000 selects XXTI clock source */
#define PMU_DEBUG_XXTI                          0x1000
/* Mask bit[12:8] for xxti clock selection */
#define PMU_DEBUG_CLKOUT_SEL_MASK               0x1f00

/*
 * Pmu debug is used for xclkout, enable xclkout with
 * source as XXTI
 */
void set_xclkout(void);

/*
 *  Read inform1 to get the reset status.
 *  @return: the value can be either S5P_CHECK_SLEEP or
 *  S5P_CHECK_DIDLE or S5P_CHECK_LPA as stored in inform1
 *  if none of these then its normal booting.
 */
uint32_t get_reset_status(void);


/* Read the resume function and call it */
void power_exit_wakeup(void);

#endif
