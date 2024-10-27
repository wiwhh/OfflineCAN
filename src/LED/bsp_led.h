#ifndef __BSP_LED_H__
#define __BSP_LED_H__
#include "hal_data.h"

void LED_Init(void);


/* LED引脚置低电平 LED灯亮 */
#define LED1_ON     R_IOPORT_PinWrite(&g_ioport_ctrl, BSP_IO_PORT_02_PIN_09, BSP_IO_LEVEL_LOW)
#define LED2_ON     R_IOPORT_PinWrite(&g_ioport_ctrl, BSP_IO_PORT_02_PIN_10, BSP_IO_LEVEL_LOW)

/* LED引脚置高电平 LED灯灭 */
#define LED1_OFF    R_IOPORT_PinWrite(&g_ioport_ctrl, BSP_IO_PORT_02_PIN_09, BSP_IO_LEVEL_HIGH)
#define LED2_OFF    R_IOPORT_PinWrite(&g_ioport_ctrl, BSP_IO_PORT_02_PIN_10, BSP_IO_LEVEL_HIGH)

/* 使用寄存器来实现 LED灯翻转 */
#define LED1_TOGGLE R_PORT2->PODR ^= 1<<(BSP_IO_PORT_02_PIN_09 & 0xFF)
#define LED2_TOGGLE R_PORT2->PODR ^= 1<<(BSP_IO_PORT_02_PIN_10 & 0xFF)

#endif  /*__BSP_LED_H__*/

