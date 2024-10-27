#include "app_led_thread.h"
#include "bsp_led.h"
#include "hal_data.h"
#include "FreeRTOS.h"
#include "task.h"
#include "debug.h"
void app_led_thread_entry(void * pvParameters)
{
	FSP_PARAMETER_NOT_USED(pvParameters); 
    LED_Init();
    LED1_ON;
    while(1)
    {
        LED2_ON;
        vTaskDelay(500);
        LED2_OFF;
        vTaskDelay(500);
    }
}

