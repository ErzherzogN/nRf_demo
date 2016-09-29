/**
 * References: 
 * nAN-36 Creating Bluetooth® Low Energy Applications Using nRF51822.
 * Based on SDK_8
 */

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

/**@brief Function for application main entry.
 */
int main(void)
{
    // Initialize
//    leds_init();
//    timers_init();
//    gpiote_init();
//    buttons_init();

//    // Start execution
//    timers_start();
//    advertising_start();

    // Enter main loop
    for (;;)
    {

    }
}
