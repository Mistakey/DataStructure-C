/*
 * @Author: Kelch
 * @Date: 2022-12-17 20:42:10
 * @LastEditors: error: git config user.name & please set dead value or install git
 * git
 * @LastEditTime: 2022-12-18 14:23:32
 * @FilePath: /DataStructure-C/include/ds_stack.h
 * @Description:
 *
 * QQ：331378054
 * 希儿也想变得更可爱
 * 希儿世界第一可爱
 *
 * Copyright (c) 2022 by Kelch, All Rights Reserved.
 */

#ifndef DSSTACK_H_INCLUDE_
#define DSSTACK_H_INCLUDE_

#ifdef __cplusplus
extern "C" {
#endif

#include "ds_types.h"
#include <stddef.h>

typedef struct DsStack DsStack;

DS_API DsStack *ds_stack_create(size_t);

DS_API DS_STATUS ds_stack_push(DsStack *, void *);

DS_API DS_STATUS ds_stack_pop(DsStack *, void **);

DS_API int ds_stack_counts(DsStack *);

DS_API DS_STATUS ds_stack_clear(DsStack *);

DS_API void ds_stack_destroy(DsStack **);

#ifdef __cplusplus
}
#endif

#endif // DSSTACK_H_INCLUDE_
