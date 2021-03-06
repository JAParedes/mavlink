/** @file
 *    @brief MAVLink comm protocol testsuite generated from rcac_qgc_3.xml
 *    @see http://qgroundcontrol.org/mavlink/
 */
#pragma once
#ifndef RCAC_QGC_3_TESTSUITE_H
#define RCAC_QGC_3_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL
static void mavlink_test_ardupilotmega3(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_rcac_qgc_3(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_ardupilotmega3(system_id, component_id, last_msg);
    mavlink_test_rcac_qgc_3(system_id, component_id, last_msg);
}
#endif

#include "../ardupilotmega3/testsuite.h"


static void mavlink_test_rcac_att_variables(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_RCAC_ATT_VARIABLES >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_rcac_att_variables_t packet_in = {
        93372036854775807ULL,73.0,101.0,{ 129.0, 130.0, 131.0 },89
    };
    mavlink_rcac_att_variables_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.timestamp = packet_in.timestamp;
        packet1.alpha_pid_att = packet_in.alpha_pid_att;
        packet1.p11_att = packet_in.p11_att;
        packet1.switch_att = packet_in.switch_att;
        
        mav_array_memcpy(packet1.rcac_att_theta, packet_in.rcac_att_theta, sizeof(float)*3);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_RCAC_ATT_VARIABLES_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_RCAC_ATT_VARIABLES_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_rcac_att_variables_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_rcac_att_variables_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_rcac_att_variables_pack(system_id, component_id, &msg , packet1.timestamp , packet1.switch_att , packet1.alpha_pid_att , packet1.p11_att , packet1.rcac_att_theta );
    mavlink_msg_rcac_att_variables_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_rcac_att_variables_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.timestamp , packet1.switch_att , packet1.alpha_pid_att , packet1.p11_att , packet1.rcac_att_theta );
    mavlink_msg_rcac_att_variables_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_rcac_att_variables_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_rcac_att_variables_send(MAVLINK_COMM_1 , packet1.timestamp , packet1.switch_att , packet1.alpha_pid_att , packet1.p11_att , packet1.rcac_att_theta );
    mavlink_msg_rcac_att_variables_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_rcac_rate_variables(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_RCAC_RATE_VARIABLES >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_rcac_rate_variables_t packet_in = {
        93372036854775807ULL,73.0,101.0,{ 129.0, 130.0, 131.0, 132.0, 133.0, 134.0, 135.0, 136.0, 137.0, 138.0, 139.0, 140.0 },197
    };
    mavlink_rcac_rate_variables_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.timestamp = packet_in.timestamp;
        packet1.alpha_pid_rate = packet_in.alpha_pid_rate;
        packet1.p11_ratex = packet_in.p11_ratex;
        packet1.switch_rate = packet_in.switch_rate;
        
        mav_array_memcpy(packet1.rcac_rate_theta, packet_in.rcac_rate_theta, sizeof(float)*12);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_RCAC_RATE_VARIABLES_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_RCAC_RATE_VARIABLES_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_rcac_rate_variables_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_rcac_rate_variables_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_rcac_rate_variables_pack(system_id, component_id, &msg , packet1.timestamp , packet1.switch_rate , packet1.alpha_pid_rate , packet1.p11_ratex , packet1.rcac_rate_theta );
    mavlink_msg_rcac_rate_variables_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_rcac_rate_variables_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.timestamp , packet1.switch_rate , packet1.alpha_pid_rate , packet1.p11_ratex , packet1.rcac_rate_theta );
    mavlink_msg_rcac_rate_variables_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_rcac_rate_variables_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_rcac_rate_variables_send(MAVLINK_COMM_1 , packet1.timestamp , packet1.switch_rate , packet1.alpha_pid_rate , packet1.p11_ratex , packet1.rcac_rate_theta );
    mavlink_msg_rcac_rate_variables_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_rcac_pos_vel_variables(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_RCAC_POS_VEL_VARIABLES >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_rcac_pos_vel_variables_t packet_in = {
        93372036854775807ULL,73.0,101.0,129.0,157.0,185.0,213.0,{ 241.0, 242.0, 243.0 },{ 325.0, 326.0, 327.0, 328.0, 329.0, 330.0, 331.0, 332.0, 333.0 },245,56
    };
    mavlink_rcac_pos_vel_variables_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.timestamp = packet_in.timestamp;
        packet1.pid_factor = packet_in.pid_factor;
        packet1.rcac_master_sw = packet_in.rcac_master_sw;
        packet1.alpha_pid_pos = packet_in.alpha_pid_pos;
        packet1.alpha_pid_vel = packet_in.alpha_pid_vel;
        packet1.p11_pos = packet_in.p11_pos;
        packet1.p11_velx = packet_in.p11_velx;
        packet1.switch_pos = packet_in.switch_pos;
        packet1.switch_vel = packet_in.switch_vel;
        
        mav_array_memcpy(packet1.rcac_pos_theta, packet_in.rcac_pos_theta, sizeof(float)*3);
        mav_array_memcpy(packet1.rcac_vel_theta, packet_in.rcac_vel_theta, sizeof(float)*9);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_RCAC_POS_VEL_VARIABLES_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_RCAC_POS_VEL_VARIABLES_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_rcac_pos_vel_variables_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_rcac_pos_vel_variables_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_rcac_pos_vel_variables_pack(system_id, component_id, &msg , packet1.timestamp , packet1.pid_factor , packet1.rcac_master_sw , packet1.switch_pos , packet1.switch_vel , packet1.alpha_pid_pos , packet1.alpha_pid_vel , packet1.p11_pos , packet1.p11_velx , packet1.rcac_pos_theta , packet1.rcac_vel_theta );
    mavlink_msg_rcac_pos_vel_variables_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_rcac_pos_vel_variables_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.timestamp , packet1.pid_factor , packet1.rcac_master_sw , packet1.switch_pos , packet1.switch_vel , packet1.alpha_pid_pos , packet1.alpha_pid_vel , packet1.p11_pos , packet1.p11_velx , packet1.rcac_pos_theta , packet1.rcac_vel_theta );
    mavlink_msg_rcac_pos_vel_variables_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_rcac_pos_vel_variables_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_rcac_pos_vel_variables_send(MAVLINK_COMM_1 , packet1.timestamp , packet1.pid_factor , packet1.rcac_master_sw , packet1.switch_pos , packet1.switch_vel , packet1.alpha_pid_pos , packet1.alpha_pid_vel , packet1.p11_pos , packet1.p11_velx , packet1.rcac_pos_theta , packet1.rcac_vel_theta );
    mavlink_msg_rcac_pos_vel_variables_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_rcac_qgc_3(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_rcac_att_variables(system_id, component_id, last_msg);
    mavlink_test_rcac_rate_variables(system_id, component_id, last_msg);
    mavlink_test_rcac_pos_vel_variables(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // RCAC_QGC_3_TESTSUITE_H
