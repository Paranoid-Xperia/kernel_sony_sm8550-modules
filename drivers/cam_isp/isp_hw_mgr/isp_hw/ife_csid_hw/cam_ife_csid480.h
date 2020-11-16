/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (c) 2019-2020, The Linux Foundation. All rights reserved.
 */

#ifndef _CAM_IFE_CSID_480_H_
#define _CAM_IFE_CSID_480_H_

#include <linux/module.h>
#include "camera_main.h"
#include "cam_ife_csid_dev.h"
#include "cam_ife_csid_common.h"
#include "cam_ife_csid_hw_ver1.h"

#define CAM_CSID_VERSION_V480                 0x40080000

static struct cam_ife_csid_ver1_path_reg_info
			cam_ife_csid_480_ipp_reg_info = {
	.irq_status_addr                  = 0x30,
	.irq_mask_addr                    = 0x34,
	.irq_clear_addr                   = 0x38,
	.irq_set_addr                     = 0x3c,

	.cfg0_addr                        = 0x200,
	.cfg1_addr                        = 0x204,
	.ctrl_addr                        = 0x208,
	.frm_drop_pattern_addr            = 0x20c,
	.frm_drop_period_addr             = 0x210,
	.irq_subsample_pattern_addr       = 0x214,
	.irq_subsample_period_addr        = 0x218,
	.hcrop_addr                       = 0x21c,
	.vcrop_addr                       = 0x220,
	.pix_drop_pattern_addr            = 0x224,
	.pix_drop_period_addr             = 0x228,
	.line_drop_pattern_addr           = 0x22c,
	.line_drop_period_addr            = 0x230,
	.rst_strobes_addr                 = 0x240,
	.status_addr                      = 0x254,
	.misr_val_addr                    = 0x258,
	.format_measure_cfg0_addr         = 0x270,
	.format_measure_cfg1_addr         = 0x274,
	.format_measure0_addr             = 0x278,
	.format_measure1_addr             = 0x27c,
	.format_measure2_addr             = 0x280,
	.timestamp_curr0_sof_addr         = 0x290,
	.timestamp_curr1_sof_addr         = 0x294,
	.timestamp_prev0_sof_addr         = 0x298,
	.timestamp_prev1_sof_addr         = 0x29c,
	.timestamp_curr0_eof_addr         = 0x2a0,
	.timestamp_curr1_eof_addr         = 0x2a4,
	.timestamp_prev0_eof_addr         = 0x2a8,
	.timestamp_prev1_eof_addr         = 0x2ac,
	.err_recovery_cfg0_addr           = 0x2d0,
	.err_recovery_cfg1_addr           = 0x2d4,
	.err_recovery_cfg2_addr           = 0x2d8,
	.multi_vcdt_cfg0_addr             = 0x2dc,
	/* configurations */
	.pix_store_en_shift_val           = 7,
	.early_eof_en_shift_val           = 29,
	.ccif_violation_en                = 1,
	.overflow_ctrl_en                 = 1,
	//.hblank_cfg_shift_val             = 4,
	.halt_master_sel_master_val       = 0,
	.halt_master_sel_shift            = 4,
	.halt_mode_internal               = 0,
	.halt_mode_global                 = 1,
	.halt_mode_master                 = 2,
	.halt_mode_slave                  = 3,
	.halt_mode_shift                  = 2,
	.halt_frame_boundary              = 0,
	.resume_frame_boundary            = 1,
	.halt_immediate                   = 2,
	.halt_cmd_shift                   = 0,
	.drop_v_en_shift_val              = 4,
	.drop_h_en_shift_val              = 3,
	.bin_h_en_shift_val               = 2,
	.bin_en_shift_val                 = 2,
	.bin_qcfa_en_shift_val            = 30,
	.binning_supported                = 0x3,
	.overflow_ctrl_mode_val           = 0x8,
	.crop_v_en_shift_val              = 6,
	.crop_h_en_shift_val              = 5,
	.timestamp_en_shift_val           = 1,
	.format_measure_en_shift_val      = 0,
	.fatal_err_mask                   = 0x4,
	.non_fatal_err_mask               = 0x28000,
};

static struct cam_ife_csid_ver1_path_reg_info
			cam_ife_csid_480_ppp_reg_info = {
	.irq_status_addr                  = 0xa0,
	.irq_mask_addr                    = 0xa4,
	.irq_clear_addr                   = 0xa8,
	.irq_set_addr                     = 0xac,

	.cfg0_addr                        = 0x700,
	.cfg1_addr                        = 0x704,
	.ctrl_addr                        = 0x708,
	.frm_drop_pattern_addr            = 0x70c,
	.frm_drop_period_addr             = 0x710,
	.irq_subsample_pattern_addr       = 0x714,
	.irq_subsample_period_addr        = 0x718,
	.hcrop_addr                       = 0x71c,
	.vcrop_addr                       = 0x720,
	.pix_drop_pattern_addr            = 0x724,
	.pix_drop_period_addr             = 0x728,
	.line_drop_pattern_addr           = 0x72c,
	.line_drop_period_addr            = 0x730,
	.rst_strobes_addr                 = 0x740,
	.status_addr                      = 0x754,
	.misr_val_addr                    = 0x758,
	.format_measure_cfg0_addr         = 0x770,
	.format_measure_cfg1_addr         = 0x774,
	.format_measure0_addr             = 0x778,
	.format_measure1_addr             = 0x77c,
	.format_measure2_addr             = 0x780,
	.timestamp_curr0_sof_addr         = 0x790,
	.timestamp_curr1_sof_addr         = 0x794,
	.timestamp_prev0_sof_addr         = 0x798,
	.timestamp_prev1_sof_addr         = 0x79c,
	.timestamp_curr0_eof_addr         = 0x7a0,
	.timestamp_curr1_eof_addr         = 0x7a4,
	.timestamp_prev0_eof_addr         = 0x7a8,
	.timestamp_prev1_eof_addr         = 0x7ac,
	.err_recovery_cfg0_addr           = 0x7d0,
	.err_recovery_cfg1_addr           = 0x7d4,
	.err_recovery_cfg2_addr           = 0x7d8,
	.multi_vcdt_cfg0_addr             = 0x7dc,
	/* configurations */
	.halt_master_sel_master_val       = 3,
	.halt_master_sel_shift            = 4,
	.halt_mode_internal               = 0,
	.halt_mode_global                 = 1,
	.halt_mode_master                 = 2,
	.halt_mode_slave                  = 3,
	.halt_mode_shift                  = 2,
	.halt_frame_boundary              = 0,
	.resume_frame_boundary            = 1,
	.halt_immediate                   = 2,
	.halt_cmd_shift                   = 0,
	.crop_v_en_shift_val              = 6,
	.crop_h_en_shift_val              = 5,
	.drop_v_en_shift_val              = 4,
	.drop_h_en_shift_val              = 3,
	.pix_store_en_shift_val           = 7,
	.early_eof_en_shift_val           = 29,
	.ccif_violation_en                = 1,
	.overflow_ctrl_en                 = 1,
	.overflow_ctrl_mode_val           = 0x8,
	.timestamp_en_shift_val           = 1,
	.format_measure_en_shift_val      = 0,
	.fatal_err_mask                   = 0x4,
	.non_fatal_err_mask               = 0x28000,
};

static struct cam_ife_csid_ver1_path_reg_info
			cam_ife_csid_480_rdi_0_reg_info = {
	.irq_status_addr                  = 0x40,
	.irq_mask_addr                    = 0x44,
	.irq_clear_addr                   = 0x48,
	.irq_set_addr                     = 0x4c,
	.cfg0_addr                        = 0x300,
	.cfg1_addr                        = 0x304,
	.ctrl_addr                        = 0x308,
	.frm_drop_pattern_addr            = 0x30c,
	.frm_drop_period_addr             = 0x310,
	.irq_subsample_pattern_addr       = 0x314,
	.irq_subsample_period_addr        = 0x318,
	.hcrop_addr                       = 0x31c,
	.vcrop_addr                       = 0x320,
	.pix_drop_pattern_addr            = 0x324,
	.pix_drop_period_addr             = 0x328,
	.line_drop_pattern_addr           = 0x32c,
	.line_drop_period_addr            = 0x330,
	.rst_strobes_addr                 = 0x340,
	.status_addr                      = 0x350,
	.misr_val0_addr                   = 0x354,
	.misr_val1_addr                   = 0x358,
	.misr_val2_addr                   = 0x35c,
	.misr_val3_addr                   = 0x360,
	.format_measure_cfg0_addr         = 0x370,
	.format_measure_cfg1_addr         = 0x374,
	.format_measure0_addr             = 0x378,
	.format_measure1_addr             = 0x37c,
	.format_measure2_addr             = 0x380,
	.timestamp_curr0_sof_addr         = 0x390,
	.timestamp_curr1_sof_addr         = 0x394,
	.timestamp_prev0_sof_addr         = 0x398,
	.timestamp_prev1_sof_addr         = 0x39c,
	.timestamp_curr0_eof_addr         = 0x3a0,
	.timestamp_curr1_eof_addr         = 0x3a4,
	.timestamp_prev0_eof_addr         = 0x3a8,
	.timestamp_prev1_eof_addr         = 0x3ac,
	.err_recovery_cfg0_addr           = 0x3b0,
	.err_recovery_cfg1_addr           = 0x3b4,
	.err_recovery_cfg2_addr           = 0x3b8,
	.multi_vcdt_cfg0_addr             = 0x3bc,
	.byte_cntr_ping_addr              = 0x3e0,
	.byte_cntr_pong_addr              = 0x3e4,
	/* configurations */
	.halt_mode_internal               = 0,
	.halt_mode_global                 = 1,
	.halt_mode_shift                  = 2,
	.halt_frame_boundary              = 0,
	.resume_frame_boundary            = 1,
	.halt_immediate                   = 2,
	.halt_cmd_shift                   = 0,
	.crop_v_en_shift_val              = 6,
	.crop_h_en_shift_val              = 5,
	.drop_v_en_shift_val              = 4,
	.drop_h_en_shift_val              = 3,
	.plain_fmt_shift_val              = 10,
	.ccif_violation_en                = 1,
	.overflow_ctrl_en                 = 1,
	.overflow_ctrl_mode_val           = 0x8,
	.packing_fmt_shift_val            = 30,
	.mipi_pack_supported              = 1,
	.timestamp_en_shift_val           = 2,
	.format_measure_en_shift_val      = 1,
	.fatal_err_mask                   = 0x4,
	.non_fatal_err_mask               = 0x28000,
};

static struct cam_ife_csid_ver1_path_reg_info
			cam_ife_csid_480_rdi_1_reg_info = {
	.irq_status_addr                 = 0x50,
	.irq_mask_addr                   = 0x54,
	.irq_clear_addr                  = 0x58,
	.irq_set_addr                    = 0x5c,
	.cfg0_addr                       = 0x400,
	.cfg1_addr                       = 0x404,
	.ctrl_addr                       = 0x408,
	.frm_drop_pattern_addr           = 0x40c,
	.frm_drop_period_addr            = 0x410,
	.irq_subsample_pattern_addr      = 0x414,
	.irq_subsample_period_addr       = 0x418,
	.hcrop_addr                      = 0x41c,
	.vcrop_addr                      = 0x420,
	.pix_drop_pattern_addr           = 0x424,
	.pix_drop_period_addr            = 0x428,
	.line_drop_pattern_addr          = 0x42c,
	.line_drop_period_addr           = 0x430,
	.rst_strobes_addr                = 0x440,
	.status_addr                     = 0x450,
	.misr_val0_addr                  = 0x454,
	.misr_val1_addr                  = 0x458,
	.misr_val2_addr                  = 0x45c,
	.misr_val3_addr                  = 0x460,
	.format_measure_cfg0_addr        = 0x470,
	.format_measure_cfg1_addr        = 0x474,
	.format_measure0_addr            = 0x478,
	.format_measure1_addr            = 0x47c,
	.format_measure2_addr            = 0x480,
	.timestamp_curr0_sof_addr        = 0x490,
	.timestamp_curr1_sof_addr        = 0x494,
	.timestamp_prev0_sof_addr        = 0x498,
	.timestamp_prev1_sof_addr        = 0x49c,
	.timestamp_curr0_eof_addr        = 0x4a0,
	.timestamp_curr1_eof_addr        = 0x4a4,
	.timestamp_prev0_eof_addr        = 0x4a8,
	.timestamp_prev1_eof_addr        = 0x4ac,
	.err_recovery_cfg0_addr          = 0x4b0,
	.err_recovery_cfg1_addr          = 0x4b4,
	.err_recovery_cfg2_addr          = 0x4b8,
	.multi_vcdt_cfg0_addr            = 0x4bc,
	.byte_cntr_ping_addr             = 0x4e0,
	.byte_cntr_pong_addr             = 0x4e4,
	/* configurations */
	.halt_mode_internal              = 0,
	.halt_mode_global                = 1,
	.halt_mode_shift                 = 2,
	.halt_frame_boundary             = 0,
	.resume_frame_boundary           = 1,
	.halt_immediate                  = 2,
	.halt_cmd_shift                  = 0,
	.crop_v_en_shift_val             = 6,
	.crop_h_en_shift_val             = 5,
	.drop_v_en_shift_val             = 4,
	.drop_h_en_shift_val             = 3,
	.plain_fmt_shift_val             = 10,
	.ccif_violation_en               = 1,
	.overflow_ctrl_en                = 1,
	.overflow_ctrl_mode_val          = 0x8,
	.packing_fmt_shift_val           = 30,
	.mipi_pack_supported             = 1,
	.timestamp_en_shift_val          = 2,
	.format_measure_en_shift_val     = 1,
	.fatal_err_mask                  = 0x4,
	.non_fatal_err_mask              = 0x28000,
};

static struct cam_ife_csid_ver1_path_reg_info
			cam_ife_csid_480_rdi_2_reg_info = {
	.irq_status_addr                 = 0x60,
	.irq_mask_addr                   = 0x64,
	.irq_clear_addr                  = 0x68,
	.irq_set_addr                    = 0x6c,
	.cfg0_addr                       = 0x500,
	.cfg1_addr                       = 0x504,
	.ctrl_addr                       = 0x508,
	.frm_drop_pattern_addr           = 0x50c,
	.frm_drop_period_addr            = 0x510,
	.irq_subsample_pattern_addr      = 0x514,
	.irq_subsample_period_addr       = 0x518,
	.hcrop_addr                      = 0x51c,
	.vcrop_addr                      = 0x520,
	.pix_drop_pattern_addr           = 0x524,
	.pix_drop_period_addr            = 0x528,
	.line_drop_pattern_addr          = 0x52c,
	.line_drop_period_addr           = 0x530,
	.yuv_chroma_conversion_addr      = 0x534,
	.rst_strobes_addr                = 0x540,
	.status_addr                     = 0x550,
	.misr_val0_addr                  = 0x554,
	.misr_val1_addr                  = 0x558,
	.misr_val2_addr                  = 0x55c,
	.misr_val3_addr                  = 0x560,
	.format_measure_cfg0_addr        = 0x570,
	.format_measure_cfg1_addr        = 0x574,
	.format_measure0_addr            = 0x578,
	.format_measure1_addr            = 0x57c,
	.format_measure2_addr            = 0x580,
	.timestamp_curr0_sof_addr        = 0x590,
	.timestamp_curr1_sof_addr        = 0x594,
	.timestamp_prev0_sof_addr        = 0x598,
	.timestamp_prev1_sof_addr        = 0x59c,
	.timestamp_curr0_eof_addr        = 0x5a0,
	.timestamp_curr1_eof_addr        = 0x5a4,
	.timestamp_prev0_eof_addr        = 0x5a8,
	.timestamp_prev1_eof_addr        = 0x5ac,
	.err_recovery_cfg0_addr          = 0x5b0,
	.err_recovery_cfg1_addr          = 0x5b4,
	.err_recovery_cfg2_addr          = 0x5b8,
	.multi_vcdt_cfg0_addr            = 0x5bc,
	.byte_cntr_ping_addr             = 0x5e0,
	.byte_cntr_pong_addr             = 0x5e4,
	/* configurations */
	.halt_mode_internal              = 0,
	.halt_mode_global                = 1,
	.halt_mode_shift                 = 2,
	.halt_frame_boundary             = 0,
	.resume_frame_boundary           = 1,
	.halt_immediate                  = 2,
	.halt_cmd_shift                  = 0,
	.crop_v_en_shift_val             = 6,
	.crop_h_en_shift_val             = 5,
	.drop_v_en_shift_val             = 4,
	.drop_h_en_shift_val             = 3,
	.plain_fmt_shift_val             = 10,
	.ccif_violation_en               = 1,
	.overflow_ctrl_en                = 1,
	.overflow_ctrl_mode_val          = 0x8,
	.packing_fmt_shift_val           = 30,
	.mipi_pack_supported             = 1,
	.timestamp_en_shift_val          = 2,
	.format_measure_en_shift_val     = 1,
	.fatal_err_mask                  = 0x4,
	.non_fatal_err_mask              = 0x28000,
};

static struct cam_ife_csid_csi2_rx_reg_info
			cam_ife_csid_480_csi2_reg_info = {
	.irq_status_addr                 = 0x20,
	.irq_mask_addr                   = 0x24,
	.irq_clear_addr                  = 0x28,
	.irq_set_addr                    = 0x2c,

	/*CSI2 rx control */
	.cfg0_addr                       = 0x100,
	.cfg1_addr                       = 0x104,
	.capture_ctrl_addr               = 0x108,
	.rst_strobes_addr                = 0x110,
	.de_scramble_cfg0_addr           = 0x114,
	.de_scramble_cfg1_addr           = 0x118,
	.cap_unmap_long_pkt_hdr_0_addr   = 0x120,
	.cap_unmap_long_pkt_hdr_1_addr   = 0x124,
	.captured_short_pkt_0_addr       = 0x128,
	.captured_short_pkt_1_addr       = 0x12c,
	.captured_long_pkt_0_addr        = 0x130,
	.captured_long_pkt_1_addr        = 0x134,
	.captured_long_pkt_ftr_addr      = 0x138,
	.captured_cphy_pkt_hdr_addr      = 0x13c,
	.lane0_misr_addr                 = 0x150,
	.lane1_misr_addr                 = 0x154,
	.lane2_misr_addr                 = 0x158,
	.lane3_misr_addr                 = 0x15c,
	.total_pkts_rcvd_addr            = 0x160,
	.stats_ecc_addr                  = 0x164,
	.total_crc_err_addr              = 0x168,

	.rst_srb_all                     = 0x3FFF,
	.rst_done_shift_val              = 27,
	.irq_mask_all                    = 0xFFFFFFF,
	.misr_enable_shift_val           = 6,
	.vc_mode_shift_val               = 2,
	.capture_long_pkt_en_shift       = 0,
	.capture_short_pkt_en_shift      = 1,
	.capture_cphy_pkt_en_shift       = 2,
	.capture_long_pkt_dt_shift       = 4,
	.capture_long_pkt_vc_shift       = 10,
	.capture_short_pkt_vc_shift      = 15,
	.capture_cphy_pkt_dt_shift       = 20,
	.capture_cphy_pkt_vc_shift       = 26,
	.phy_num_mask                    = 0x7,
	.vc_mask                         = 0x7C00000,
	.dt_mask                         = 0x3f0000,
	.wc_mask                         = 0xffff0000,
	.calc_crc_mask                   = 0xffff,
	.expected_crc_mask               = 0xffff,
	.ecc_correction_shift_en         = 0,
	.lane_num_shift                  = 0,
	.lane_cfg_shift                  = 4,
	.phy_type_shift                  = 24,
	.phy_num_shift                   = 20,
	.fatal_err_mask                  = 0x78000,
	.part_fatal_err_mask             = 0x1801800,
	.non_fatal_err_mask              = 0x380000,
};

static struct cam_ife_csid_ver1_tpg_reg_info
			cam_ife_csid_480_tpg_reg_info = {
	/*CSID TPG control */
	.ctrl_addr                       = 0x600,
	.vc_cfg0_addr                    = 0x604,
	.vc_cfg1_addr                    = 0x608,
	.lfsr_seed_addr                  = 0x60c,
	.dt_n_cfg_0_addr                 = 0x610,
	.dt_n_cfg_1_addr                 = 0x614,
	.dt_n_cfg_2_addr                 = 0x618,
	.color_bars_cfg_addr             = 0x640,
	.color_box_cfg_addr              = 0x644,
	.common_gen_cfg_addr             = 0x648,
	.cgen_n_cfg_addr                 = 0x650,
	.cgen_n_x0_addr                  = 0x654,
	.cgen_n_x1_addr                  = 0x658,
	.cgen_n_x2_addr                  = 0x65c,
	.cgen_n_xy_addr                  = 0x660,
	.cgen_n_y1_addr                  = 0x664,
	.cgen_n_y2_addr                  = 0x668,

	/* configurations */
	.dtn_cfg_offset                  = 0xc,
	.cgen_cfg_offset                 = 0x20,
	.cpas_ife_reg_offset             = 0x28,
	.hbi                             = 0x740,
	.vbi                             = 0x3FF,
	.ctrl_cfg                        = 0x408007,
	.lfsr_seed                       = 0x12345678,
	.color_bar                       = 1,
	.num_frames                      = 0,
	.line_interleave_mode            = 0x1,
	.payload_mode                    = 0x8,
	.num_active_lanes_mask           = 0x30,
	.num_active_dt                   = 0,
	.fmt_shift                       = 16,
	.num_frame_shift                 = 16,
	.width_shift                     = 16,
	.vbi_shift                       = 12,
	.line_interleave_shift           = 10,
	.num_active_dt_shift             = 8,
	.color_bar_shift                 = 5,
	.height_shift                    = 0,
	.hbi_shift                       = 0,
};

static struct cam_ife_csid_ver1_common_reg_info
			cam_ife_csid_480_cmn_reg_info = {
	.hw_version_addr                 = 0x0,
	.cfg0_addr                       = 0x4,
	.ctrl_addr                       = 0x8,
	.reset_addr                      = 0xc,
	.rst_strobes_addr                = 0x10,

	.test_bus_ctrl_addr              = 0x14,
	.top_irq_status_addr             = 0x70,
	.top_irq_mask_addr               = 0x74,
	.top_irq_clear_addr              = 0x78,
	.top_irq_set_addr                = 0x7c,
	.irq_cmd_addr                    = 0x80,

	/*configurations */
	.major_version                   = 1,
	.minor_version                   = 7,
	.version_incr                    = 0,
	.num_rdis                        = 3,
	.num_pix                         = 1,
	.num_ppp                         = 1,
	.drop_supported                  = 1,
	.rst_sw_reg_stb                  = 1,
	.rst_hw_reg_stb                  = 0x1e,
	.rst_sw_hw_reg_stb               = 0x1f,
	.path_rst_stb_all                = 0x7f,
	.rst_done_shift_val              = 1,
	.path_en_shift_val               = 31,
	.dt_id_shift_val                 = 27,
	.vc_shift_val                    = 22,
	.dt_shift_val                    = 16,
	.fmt_shift_val                   = 12,
	.crop_shift_val                  = 16,
	.decode_format_shift_val         = 12,
	.multi_vcdt_vc1_shift_val        = 2,
	.multi_vcdt_dt1_shift_val        = 7,
	.timestamp_strobe_val            = 0x2,
	.timestamp_stb_sel_shift_val     = 0,
	.multi_vcdt_en_shift_val         = 0,
	.crop_pix_start_mask             = 0x3fff,
	.crop_pix_end_mask               = 0xffff,
	.crop_line_start_mask            = 0x3fff,
	.crop_line_end_mask              = 0xffff,
	.ipp_irq_mask_all                = 0x7FFF,
	.rdi_irq_mask_all                = 0x7FFF,
	.ppp_irq_mask_all                = 0xFFFF,
	.measure_en_hbi_vbi_cnt_mask     = 0xC,
};

static struct cam_ife_csid_ver1_reg_info cam_ife_csid_480_reg_info = {
	.cmn_reg          = &cam_ife_csid_480_cmn_reg_info,
	.csi2_reg         = &cam_ife_csid_480_csi2_reg_info,
	.ipp_reg          = &cam_ife_csid_480_ipp_reg_info,
	.ppp_reg          = &cam_ife_csid_480_ppp_reg_info,
	.rdi_reg = {
		&cam_ife_csid_480_rdi_0_reg_info,
		&cam_ife_csid_480_rdi_1_reg_info,
		&cam_ife_csid_480_rdi_2_reg_info,
		NULL,
		},
	.tpg_reg = &cam_ife_csid_480_tpg_reg_info,
	.csid_cust_node_map = {0x2, 0x4},
};
#endif /*_CAM_IFE_CSID_480_H_ */
