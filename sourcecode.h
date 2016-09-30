/**
 * my function protorypes
 */

#ifndef SOURCECODE_H
#define SOURCECODE_H


#include <stdint.h>
#include <string.h>
#include "nordic_common.h"
#include "nrf.h"
#include "app_error.h"
#include "nrf_gpio.h"
#include "nrf51_bitfields.h"
#include "ble.h"
#include "ble_hci.h"
#include "ble_srv_common.h"
#include "ble_advdata.h"
#include "ble_conn_params.h"
#include "board_pindefs.h"
#include "app_scheduler.h"
#include "softdevice_handler.h"
#include "app_timer_appsh.h"
#include "ble_error_log.h"
#include "app_gpiote.h"
#include "app_button.h"
#include "ble_debug_assert_handler.h"
#include "pstorage.h"
#include "ble_lbs.h"
#include "ble_gap.h"
#include "main_defs.h"

static ble_gap_sec_params_t             m_sec_params;                               /**< Security requirements for this application. */
static uint16_t                         m_conn_handle = BLE_CONN_HANDLE_INVALID;    /**< Handle of the current connection. */
static ble_lbs_t                        m_lbs;


 void buttons_init(void);
 void gpiote_init(void);
 void power_manage(void);
 void button_event_handler(uint8_t , uint8_t );
 void scheduler_init(void);
 void ble_stack_init(void);
 void sys_evt_dispatch(uint32_t );
 void ble_evt_dispatch(ble_evt_t * );
 void on_ble_evt(ble_evt_t * );
 void advertising_start(void);
 void timers_start(void); //-???
 void conn_params_init(void);
 void conn_params_error_handler(uint32_t );
 void on_conn_params_evt(ble_conn_params_evt_t * );
 void sec_params_init(void);
 void services_init(void);
 void led_write_handler(ble_lbs_t * , uint8_t );
 void advertising_init(void);
 void gap_params_init(void);
 void timers_init(void);
 void leds_init(void);
void assert_nrf_callback(uint16_t , const uint8_t * );
void app_error_handler(uint32_t , uint32_t , const uint8_t * );

#endif
