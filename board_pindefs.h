#ifndef CUSTOM_BOARD_H
#define CUSTOM_BOARD_H

// LEDs definitions for PCA10028
#define LEDS_NUMBER    0

#define LED_START      0
#define LED_1          0
#define LED_2          10
#define LED_STOP       10

#define LEDS_LIST { LED_1, LED_2}

#define BSP_LED_0      LED_1
#define BSP_LED_1      LED_2

#define BSP_LED_0_MASK (1<<BSP_LED_0)
#define BSP_LED_1_MASK (1<<BSP_LED_1)

#define LEDS_MASK      (BSP_LED_0_MASK | BSP_LED_1_MASK)
/* all LEDs are lit when GPIO is low */
#define LEDS_INV_MASK  LEDS_MASK

#define BUTTONS_NUMBER 2

#define BUTTON_START   30
#define BUTTON_1       30
#define BUTTON_2       11
#define BUTTON_STOP    11
#define BUTTON_PULL    NRF_GPIO_PIN_PULLUP

#define BUTTONS_LIST { BUTTON_1, BUTTON_2}

#define BSP_BUTTON_0   BUTTON_1
#define BSP_BUTTON_1   BUTTON_2

#define BSP_BUTTON_0_MASK (1<<BSP_BUTTON_0)
#define BSP_BUTTON_1_MASK (1<<BSP_BUTTON_1)

#define BUTTONS_MASK   0x40000800

#define HWFC           true

#endif //CUSTOM_BOARD_H
