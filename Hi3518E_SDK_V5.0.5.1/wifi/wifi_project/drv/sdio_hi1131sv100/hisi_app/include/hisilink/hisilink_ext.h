/******************************************************************************

                  版权所有 (C), 2001-2011, 华为技术有限公司

 ******************************************************************************
  文 件 名   : hisilink_ext.h
  版 本 号   : 初稿
  作    者   : 
  生成日期   : 2016年6月27日
  最近修改   :
  功能描述   : hisilink_ext.c 的头文件
  函数列表   :
  修改历史   :
  1.日    期   : 2016年6月27日
    作    者   : 
    修改内容   : 创建文件

******************************************************************************/
#ifndef __HISILINK_EXT_H__
#define __HISILINK_EXT_H__
#ifdef __cplusplus
#if __cplusplus
    extern "C" {
#endif
#endif
/*****************************************************************************
  1 其他头文件包含
*****************************************************************************/
#include "hisilink_lib.h"
#include "driver_hisi_lib_api.h"
/*****************************************************************************
  2 宏定义
*****************************************************************************/
#define HSL_PRINT_DEBUG
#ifdef HSL_PRINT_DEBUG
#define HSL_PRINT_INFO    printf
#define HSL_PRINT_WARNING printf
#define HSL_PRINT_ERROR   printf
#else
#define HSL_PRINT_INFO(fmt, arg...)    HISI_PRINT_INFO(fmt, ##arg)
#define HSL_PRINT_WARNING(fmt, arg...) HISI_PRINT_WARNING(fmt, ##arg)
#define HSL_PRINT_ERROR(fmt, arg...)   HISI_PRINT_ERROR(fmt, ##arg)
#endif
/*****************************************************************************
  3 枚举定义
*****************************************************************************/

/*****************************************************************************
  4 全局变量声明
*****************************************************************************/

/*****************************************************************************
  5 消息头定义
*****************************************************************************/


/*****************************************************************************
  6 消息定义
*****************************************************************************/


/*****************************************************************************
  7 STRUCT定义
*****************************************************************************/

/*****************************************************************************
  8 UNION定义
*****************************************************************************/


/*****************************************************************************
  9 OTHERS定义
*****************************************************************************/


/*****************************************************************************
  10 函数声明
*****************************************************************************/
hsl_uint32 hsl_memcpy(void * p_dest, void * p_src, hsl_uint32 ul_len);
hsl_uint32 hsl_memset(void * p_src, hsl_int32 l_data, hsl_uint32 ul_len);
hsl_uint32 hsl_get_time(void);
hsl_uint8* hsl_get_macaddr(void);
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif //__HISILINK_EXT_H__


