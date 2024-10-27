#include "elog.h"
#include "bsp_led.h"
#include "debug.h"



void debug_init(void)
{
    Debug_UART9_Init();
    elog_init();
    /* 设置每个级别的日志输出格式 */
    //输出所有内容
    elog_set_fmt(ELOG_LVL_ASSERT, ELOG_FMT_ALL);
    //输出日志级别信息和日志TAG
    elog_set_fmt(ELOG_LVL_ERROR, ELOG_FMT_LVL | ELOG_FMT_TAG);
    elog_set_fmt(ELOG_LVL_WARN, ELOG_FMT_LVL | ELOG_FMT_TAG);
    elog_set_fmt(ELOG_LVL_INFO, ELOG_FMT_LVL | ELOG_FMT_TAG);
    //除了时间、进程信息、线程信息之外，其余全部输出
    elog_set_fmt(ELOG_LVL_DEBUG, ELOG_FMT_ALL & ~(ELOG_FMT_TIME | ELOG_FMT_P_INFO | ELOG_FMT_T_INFO));
    //输出所有内容
    elog_set_fmt(ELOG_LVL_VERBOSE, ELOG_FMT_ALL);
    /* 启动elog */
    elog_start();
}


int8_t debug_DisableOutput(void)
{
    elog_set_output_enabled(0);
    if(elog_get_output_enabled() != 0)
    {
        return -1;
    }
    return 0;
}

int8_t debug_EnableOutput(void)
{
    elog_set_output_enabled(1);
    if(elog_get_output_enabled() != 1)
    {
        return -1;
    }
    return 0;
}

int8_t debug_SetFilterLevelMax(void)
{
    elog_set_filter_lvl(5);
    return 0;
}

int8_t debug_SetFilterLevelMid(void)
{
    elog_set_filter_lvl(2);
    return 0;
}
















