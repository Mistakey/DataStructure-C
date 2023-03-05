/*
 * @Author: Kelch
 * @Date: 2022-12-17 20:42:10
 * @LastEditors: error: git config user.name & please set dead value or install git
 * git
 * @LastEditTime: 2022-12-18 14:23:20
 * @FilePath: /DataStructure-C/include/ds_types.h
 * @Description:
 *
 * QQ：331378054
 * 希儿也想变得更可爱
 * 希儿世界第一可爱
 *
 * Copyright (c) 2022 by Kelch, All Rights Reserved.
 */

#ifndef DSTYPES_H_INCLUDE_
#define DSTYPES_H_INCLUDE_

#ifdef __cplusplus
extern "C" {
#endif

#define DS_API extern
#define DS_MAXCHAR (2 << 7)
#define DS_TRUE (1)
#define DS_FALSE (0)

typedef int DS_BOOL;
typedef enum {
    DS_STATUS_OK,
    DS_STATUS_NULL,
    DS_STATUS_OUTMEM,
    DS_STATUS_FULL,
    DS_STATUS_EMPTY
} DS_STATUS;

#ifdef __cplusplus
}
#endif

#endif // DSTYPES_H_INCLUDE_
