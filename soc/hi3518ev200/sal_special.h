
#ifndef __SAL_SPECIAL_H__
#define __SAL_SPECIAL_H__


#ifdef __cplusplus
#if __cplusplus
extern "C"{
#endif
#endif

/*
 函 数 名: sal_special_start
 功能描述: 初始化其他模块，此接口在视频模块初始化后可以被调用
 输入参数: 无
 输出参数: 无
 返 回 值: 成功返回0,失败返回小于0
*/
int sal_special_start();

/*
 函 数 名: sal_special_start
 功能描述: 去初始化其他模块，此接口在视频模块初始化前可以被调用
 输入参数: 无
 输出参数: 无
 返 回 值: 成功返回0,失败返回小于0
*/
int sal_special_stop();

/*
 函 数 名: sal_special_disable
 功能描述: 不初始化其他模块，内部使用接口
 输入参数: disable 1 不启用其他模块 0 启用其他模块
 输出参数: 无
 返 回 值: 成功返回0,失败返回小于0
*/
int sal_special_disable(int disable);



#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif

#endif

