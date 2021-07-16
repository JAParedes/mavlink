/** @file
 *  @brief MAVLink comm protocol generated from rcac_qgc_3.xml
 *  @see http://mavlink.org
 */
#pragma once
#ifndef MAVLINK_RCAC_QGC_3_H
#define MAVLINK_RCAC_QGC_3_H

#ifndef MAVLINK_H
    #error Wrong include order: MAVLINK_RCAC_QGC_3.H MUST NOT BE DIRECTLY USED. Include mavlink.h from the same directory instead or set ALL AND EVERY defines from MAVLINK.H manually accordingly, including the #define MAVLINK_H call.
#endif

#undef MAVLINK_THIS_XML_IDX
#define MAVLINK_THIS_XML_IDX 2

#ifdef __cplusplus
extern "C" {
#endif

// MESSAGE LENGTHS AND CRCS

#ifndef MAVLINK_MESSAGE_LENGTHS
#define MAVLINK_MESSAGE_LENGTHS {}
#endif

#ifndef MAVLINK_MESSAGE_CRCS
#define MAVLINK_MESSAGE_CRCS {{10001, 54, 29, 29, 0, 0, 0}, {10002, 138, 65, 65, 0, 0, 0}, {10003, 134, 82, 82, 0, 0, 0}}
#endif

#include "../protocol.h"

#define MAVLINK_ENABLED_RCAC_QGC_3

// ENUM DEFINITIONS



// MAVLINK VERSION

#ifndef MAVLINK_VERSION
#define MAVLINK_VERSION 2
#endif

#if (MAVLINK_VERSION == 0)
#undef MAVLINK_VERSION
#define MAVLINK_VERSION 2
#endif

// MESSAGE DEFINITIONS
#include "./mavlink_msg_rcac_att_variables.h"
#include "./mavlink_msg_rcac_rate_variables.h"
#include "./mavlink_msg_rcac_pos_vel_variables.h"

// base include


#undef MAVLINK_THIS_XML_IDX
#define MAVLINK_THIS_XML_IDX 2

#if MAVLINK_THIS_XML_IDX == MAVLINK_PRIMARY_XML_IDX
# define MAVLINK_MESSAGE_INFO {MAVLINK_MESSAGE_INFO_RCAC_ATT_VARIABLES, MAVLINK_MESSAGE_INFO_RCAC_RATE_VARIABLES, MAVLINK_MESSAGE_INFO_RCAC_POS_VEL_VARIABLES}
# define MAVLINK_MESSAGE_NAMES {{ "RCAC_ATT_VARIABLES", 10001 }, { "RCAC_POS_VEL_VARIABLES", 10003 }, { "RCAC_RATE_VARIABLES", 10002 }}
# if MAVLINK_COMMAND_24BIT
#  include "../mavlink_get_info.h"
# endif
#endif

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // MAVLINK_RCAC_QGC_3_H
