#ifndef __DEBUG_H__
#define __DEBUG_H__
#include "hal_data.h"
#include <stdio.h>
#include "elog.h"

#define DEBUG_PRINT                 1
#define NET_PRINT                   1
#define FILE_PRINT                  1
#define CAN_PRINT                   1

#if DEBUG_PRINT
#define PRINT_DEBUG(format, ...)    elog_d("DEBUG", format, ##__VA_ARGS__) 
#else
#define PRINT_DEBUG(format, ...)
#endif

#if NET_PRINT
#define PRINT_NET(format, ...)      elog_d("NET", format, ##__VA_ARGS__) 
#else
#define PRINT_NET(format, ...)
#endif

#if FILE_PRINT
#define PRINT_FILE(format, ...)     elog_d("FILE", format, ##__VA_ARGS__) 
#else
#define PRINT_FILE(format, ...)
#endif

#if CAN_PRINT
#define PRINT_CAN(format, ...)      elog_d("CAN", format, ##__VA_ARGS__) 
#else
#define PRINT_CAN(format, ...)
#endif

void debug_init(void);
int8_t debug_DisableOutput(void);
int8_t debug_EnableOutput(void);
int8_t debug_SetFilterLevelMax(void);
int8_t debug_SetFilterLevelMid(void);

#endif  /*__DEBUG_H__*/