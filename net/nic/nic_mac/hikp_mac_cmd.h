/*
 * Copyright (c) 2022 Hisilicon Technologies Co., Ltd.
 * Hikptool is licensed under Mulan PSL v2.
 * You can use this software according to the terms and conditions of the Mulan PSL v2.
 * You may obtain a copy of Mulan PSL v2 at:
 *          http://license.coscl.org.cn/MulanPSL2
 * THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
 * EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
 * MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
 *
 * See the Mulan PSL v2 for more details.
 */

#ifndef HIKP_MAC_CMD_H
#define HIKP_MAC_CMD_H

/* mac command code */
enum mac_module_cmd {
	MAC_CMD_PORT = 1,
	MAC_CMD_DUMP_REG,
	MAC_CMD_DUMP_XSFP,
};

enum mac_port_sub_cmd {
	QUERY_PHY_KSETTING = 0,
	QUERY_PORT_HARDWARE,
	QUERY_PORT_MAC_DFX,
	QUERY_PORT_LINK_DFX,
	QUERY_PORT_ARB_DFX,
	QUERY_PORT_ADAPT_DFX,
	QUERY_PORT_PHY_DFX,
	QUERY_HOT_PLUG_CARD_DFX,
};

enum mac_dump_reg_sub_cmd {
	MAC_DUMP_GET_BLK_NUM = 0,
	MAC_DUMP_RX_MAC_REG,
	MAC_DUMP_RX_PCS_REG,
	MAC_DUMP_RX_RSFEC_REG,
	MAC_DUMP_RX_BRFEC_REG,
	MAC_DUMP_RXPMA_CORE_REG,
	MAC_DUMP_RXPMA_LANE_REG,
	MAC_DUMP_TXPMA_LANE_REG,
	MAC_DUMP_TXPMA_CORE_REG,
	MAC_DUMP_TX_BRFEC_REG,
	MAC_DUMP_TX_RSFEC_REG,
	MAC_DUMP_TX_PCS_REG,
	MAC_DUMP_TX_MAC_REG,
	MAC_DUMP_MIB_REG,
	MAC_DUMP_COM_REG,
	MAC_DUMP_GE_REG,
	MAC_DUMP_MAC_COMM_REG,
	MAC_DUMP_AN_REG,
	MAC_DUMP_LT_REG,
};

enum mac_dump_xsfp_sub_cmd {
	NIC_XSFP_GET_BASIC_INFO,
	NIC_XSFP_GET_EEPROM_DATA,
};

#endif