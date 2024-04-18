
/*
 * Copyright (c) 2023 Qualcomm Innovation Center, Inc. All rights reserved.
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */



#ifndef _RECEIVED_TRIGGER_INFO_H_
#define _RECEIVED_TRIGGER_INFO_H_
#if !defined(__ASSEMBLER__)
#endif

#include "received_trigger_info_details.h"
#define NUM_OF_DWORDS_RECEIVED_TRIGGER_INFO 6

#define NUM_OF_QWORDS_RECEIVED_TRIGGER_INFO 3

struct received_trigger_info {
#ifndef WIFI_BIT_ORDER_BIG_ENDIAN
             struct   received_trigger_info_details                             received_trigger_details;
             uint32_t tlv64_padding                                           : 32;
#else
             struct   received_trigger_info_details                             received_trigger_details;
             uint32_t tlv64_padding                                           : 32;
#endif
};

#define RECEIVED_TRIGGER_INFO_RECEIVED_TRIGGER_DETAILS_TRIGGER_TYPE_OFFSET          0x0000000000000000
#define RECEIVED_TRIGGER_INFO_RECEIVED_TRIGGER_DETAILS_TRIGGER_TYPE_LSB             0
#define RECEIVED_TRIGGER_INFO_RECEIVED_TRIGGER_DETAILS_TRIGGER_TYPE_MSB             3
#define RECEIVED_TRIGGER_INFO_RECEIVED_TRIGGER_DETAILS_TRIGGER_TYPE_MASK            0x000000000000000f

#define RECEIVED_TRIGGER_INFO_RECEIVED_TRIGGER_DETAILS_AX_TRIGGER_SOURCE_OFFSET     0x0000000000000000
#define RECEIVED_TRIGGER_INFO_RECEIVED_TRIGGER_DETAILS_AX_TRIGGER_SOURCE_LSB        4
#define RECEIVED_TRIGGER_INFO_RECEIVED_TRIGGER_DETAILS_AX_TRIGGER_SOURCE_MSB        4
#define RECEIVED_TRIGGER_INFO_RECEIVED_TRIGGER_DETAILS_AX_TRIGGER_SOURCE_MASK       0x0000000000000010

#define RECEIVED_TRIGGER_INFO_RECEIVED_TRIGGER_DETAILS_AX_TRIGGER_TYPE_OFFSET       0x0000000000000000
#define RECEIVED_TRIGGER_INFO_RECEIVED_TRIGGER_DETAILS_AX_TRIGGER_TYPE_LSB          5
#define RECEIVED_TRIGGER_INFO_RECEIVED_TRIGGER_DETAILS_AX_TRIGGER_TYPE_MSB          8
#define RECEIVED_TRIGGER_INFO_RECEIVED_TRIGGER_DETAILS_AX_TRIGGER_TYPE_MASK         0x00000000000001e0

#define RECEIVED_TRIGGER_INFO_RECEIVED_TRIGGER_DETAILS_TRIGGER_SOURCE_STA_FULL_AID_OFFSET 0x0000000000000000
#define RECEIVED_TRIGGER_INFO_RECEIVED_TRIGGER_DETAILS_TRIGGER_SOURCE_STA_FULL_AID_LSB 9
#define RECEIVED_TRIGGER_INFO_RECEIVED_TRIGGER_DETAILS_TRIGGER_SOURCE_STA_FULL_AID_MSB 21
#define RECEIVED_TRIGGER_INFO_RECEIVED_TRIGGER_DETAILS_TRIGGER_SOURCE_STA_FULL_AID_MASK 0x00000000003ffe00

#define RECEIVED_TRIGGER_INFO_RECEIVED_TRIGGER_DETAILS_FRAME_CONTROL_VALID_OFFSET   0x0000000000000000
#define RECEIVED_TRIGGER_INFO_RECEIVED_TRIGGER_DETAILS_FRAME_CONTROL_VALID_LSB      22
#define RECEIVED_TRIGGER_INFO_RECEIVED_TRIGGER_DETAILS_FRAME_CONTROL_VALID_MSB      22
#define RECEIVED_TRIGGER_INFO_RECEIVED_TRIGGER_DETAILS_FRAME_CONTROL_VALID_MASK     0x0000000000400000

#define RECEIVED_TRIGGER_INFO_RECEIVED_TRIGGER_DETAILS_QOS_CONTROL_VALID_OFFSET     0x0000000000000000
#define RECEIVED_TRIGGER_INFO_RECEIVED_TRIGGER_DETAILS_QOS_CONTROL_VALID_LSB        23
#define RECEIVED_TRIGGER_INFO_RECEIVED_TRIGGER_DETAILS_QOS_CONTROL_VALID_MSB        23
#define RECEIVED_TRIGGER_INFO_RECEIVED_TRIGGER_DETAILS_QOS_CONTROL_VALID_MASK       0x0000000000800000

#define RECEIVED_TRIGGER_INFO_RECEIVED_TRIGGER_DETAILS_HE_CONTROL_INFO_VALID_OFFSET 0x0000000000000000
#define RECEIVED_TRIGGER_INFO_RECEIVED_TRIGGER_DETAILS_HE_CONTROL_INFO_VALID_LSB    24
#define RECEIVED_TRIGGER_INFO_RECEIVED_TRIGGER_DETAILS_HE_CONTROL_INFO_VALID_MSB    24
#define RECEIVED_TRIGGER_INFO_RECEIVED_TRIGGER_DETAILS_HE_CONTROL_INFO_VALID_MASK   0x0000000001000000

#define RECEIVED_TRIGGER_INFO_RECEIVED_TRIGGER_DETAILS_RANGING_TRIGGER_SUBTYPE_OFFSET 0x0000000000000000
#define RECEIVED_TRIGGER_INFO_RECEIVED_TRIGGER_DETAILS_RANGING_TRIGGER_SUBTYPE_LSB  25
#define RECEIVED_TRIGGER_INFO_RECEIVED_TRIGGER_DETAILS_RANGING_TRIGGER_SUBTYPE_MSB  28
#define RECEIVED_TRIGGER_INFO_RECEIVED_TRIGGER_DETAILS_RANGING_TRIGGER_SUBTYPE_MASK 0x000000001e000000

#define RECEIVED_TRIGGER_INFO_RECEIVED_TRIGGER_DETAILS_RESERVED_0B_OFFSET           0x0000000000000000
#define RECEIVED_TRIGGER_INFO_RECEIVED_TRIGGER_DETAILS_RESERVED_0B_LSB              29
#define RECEIVED_TRIGGER_INFO_RECEIVED_TRIGGER_DETAILS_RESERVED_0B_MSB              31
#define RECEIVED_TRIGGER_INFO_RECEIVED_TRIGGER_DETAILS_RESERVED_0B_MASK             0x00000000e0000000

#define RECEIVED_TRIGGER_INFO_RECEIVED_TRIGGER_DETAILS_PHY_PPDU_ID_OFFSET           0x0000000000000000
#define RECEIVED_TRIGGER_INFO_RECEIVED_TRIGGER_DETAILS_PHY_PPDU_ID_LSB              32
#define RECEIVED_TRIGGER_INFO_RECEIVED_TRIGGER_DETAILS_PHY_PPDU_ID_MSB              47
#define RECEIVED_TRIGGER_INFO_RECEIVED_TRIGGER_DETAILS_PHY_PPDU_ID_MASK             0x0000ffff00000000

#define RECEIVED_TRIGGER_INFO_RECEIVED_TRIGGER_DETAILS_LSIG_RESPONSE_LENGTH_OFFSET  0x0000000000000000
#define RECEIVED_TRIGGER_INFO_RECEIVED_TRIGGER_DETAILS_LSIG_RESPONSE_LENGTH_LSB     48
#define RECEIVED_TRIGGER_INFO_RECEIVED_TRIGGER_DETAILS_LSIG_RESPONSE_LENGTH_MSB     59
#define RECEIVED_TRIGGER_INFO_RECEIVED_TRIGGER_DETAILS_LSIG_RESPONSE_LENGTH_MASK    0x0fff000000000000

#define RECEIVED_TRIGGER_INFO_RECEIVED_TRIGGER_DETAILS_RESERVED_1A_OFFSET           0x0000000000000000
#define RECEIVED_TRIGGER_INFO_RECEIVED_TRIGGER_DETAILS_RESERVED_1A_LSB              60
#define RECEIVED_TRIGGER_INFO_RECEIVED_TRIGGER_DETAILS_RESERVED_1A_MSB              63
#define RECEIVED_TRIGGER_INFO_RECEIVED_TRIGGER_DETAILS_RESERVED_1A_MASK             0xf000000000000000

#define RECEIVED_TRIGGER_INFO_RECEIVED_TRIGGER_DETAILS_FRAME_CONTROL_OFFSET         0x0000000000000008
#define RECEIVED_TRIGGER_INFO_RECEIVED_TRIGGER_DETAILS_FRAME_CONTROL_LSB            0
#define RECEIVED_TRIGGER_INFO_RECEIVED_TRIGGER_DETAILS_FRAME_CONTROL_MSB            15
#define RECEIVED_TRIGGER_INFO_RECEIVED_TRIGGER_DETAILS_FRAME_CONTROL_MASK           0x000000000000ffff

#define RECEIVED_TRIGGER_INFO_RECEIVED_TRIGGER_DETAILS_QOS_CONTROL_OFFSET           0x0000000000000008
#define RECEIVED_TRIGGER_INFO_RECEIVED_TRIGGER_DETAILS_QOS_CONTROL_LSB              16
#define RECEIVED_TRIGGER_INFO_RECEIVED_TRIGGER_DETAILS_QOS_CONTROL_MSB              31
#define RECEIVED_TRIGGER_INFO_RECEIVED_TRIGGER_DETAILS_QOS_CONTROL_MASK             0x00000000ffff0000

#define RECEIVED_TRIGGER_INFO_RECEIVED_TRIGGER_DETAILS_SW_PEER_ID_OFFSET            0x0000000000000008
#define RECEIVED_TRIGGER_INFO_RECEIVED_TRIGGER_DETAILS_SW_PEER_ID_LSB               32
#define RECEIVED_TRIGGER_INFO_RECEIVED_TRIGGER_DETAILS_SW_PEER_ID_MSB               47
#define RECEIVED_TRIGGER_INFO_RECEIVED_TRIGGER_DETAILS_SW_PEER_ID_MASK              0x0000ffff00000000

#define RECEIVED_TRIGGER_INFO_RECEIVED_TRIGGER_DETAILS_RESERVED_3A_OFFSET           0x0000000000000008
#define RECEIVED_TRIGGER_INFO_RECEIVED_TRIGGER_DETAILS_RESERVED_3A_LSB              48
#define RECEIVED_TRIGGER_INFO_RECEIVED_TRIGGER_DETAILS_RESERVED_3A_MSB              63
#define RECEIVED_TRIGGER_INFO_RECEIVED_TRIGGER_DETAILS_RESERVED_3A_MASK             0xffff000000000000

#define RECEIVED_TRIGGER_INFO_RECEIVED_TRIGGER_DETAILS_HE_CONTROL_OFFSET            0x0000000000000010
#define RECEIVED_TRIGGER_INFO_RECEIVED_TRIGGER_DETAILS_HE_CONTROL_LSB               0
#define RECEIVED_TRIGGER_INFO_RECEIVED_TRIGGER_DETAILS_HE_CONTROL_MSB               31
#define RECEIVED_TRIGGER_INFO_RECEIVED_TRIGGER_DETAILS_HE_CONTROL_MASK              0x00000000ffffffff

#define RECEIVED_TRIGGER_INFO_TLV64_PADDING_OFFSET                                  0x0000000000000010
#define RECEIVED_TRIGGER_INFO_TLV64_PADDING_LSB                                     32
#define RECEIVED_TRIGGER_INFO_TLV64_PADDING_MSB                                     63
#define RECEIVED_TRIGGER_INFO_TLV64_PADDING_MASK                                    0xffffffff00000000

#endif
