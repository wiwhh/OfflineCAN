/* generated thread header file - do not edit */
#ifndef APP_CREATE_THREAD_H_
#define APP_CREATE_THREAD_H_
#include "bsp_api.h"
                #include "FreeRTOS.h"
                #include "task.h"
                #include "semphr.h"
                #include "hal_data.h"
                #ifdef __cplusplus
                extern "C" void app_create_thread_entry(void * pvParameters);
                #else
                extern void app_create_thread_entry(void * pvParameters);
                #endif
FSP_HEADER
FSP_FOOTER
#endif /* APP_CREATE_THREAD_H_ */
