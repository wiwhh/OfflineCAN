#include "app_create_thread.h"
#include "app_led_thread.h"
#include "debug.h"

static void app_common_init(void)
{
    debug_init();
}



    /* app_create_thread entry function */
    /* pvParameters contains TaskHandle_t */
    void app_create_thread_entry(void * pvParameters)
    {
        FSP_PARAMETER_NOT_USED(pvParameters);

        /* TODO: add your own code here */
        app_common_init();
        PRINT_DEBUG("app running!\r\n");
        xTaskCreate(app_led_thread_entry, "app_led_thread_entry", 512, NULL, 4, NULL);
        vTaskDelete(NULL);
    }
