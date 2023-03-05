/*
 * @Author: Kelch
 * @Date: 2022-12-17 20:42:10
 * @LastEditors: error: git config user.name & please set dead value or install git
 * git
 * @LastEditTime: 2022-12-18 14:23:37
 * @FilePath: /DataStructure-C/include/ds_list.h
 * @Description:
 *
 * QQ：331378054
 * 希儿也想变得更可爱
 * 希儿世界第一可爱
 *
 * Copyright (c) 2022 by Kelch, All Rights Reserved.
 */

#ifndef DSLIST_H_INCLUDE_
#define DSLIST_H_INCLUDE_

#ifdef __cplusplus
extern "C" {
#endif

#include "ds_types.h"
#include <stddef.h>

typedef struct DsList DsList;
typedef struct DsListIter DsListIter;

// 创建链表
DS_API DsList *ds_list_create(void);

// 创建带有比较函数指针的链表
DS_API DsList *ds_list_create_equal(DS_BOOL (*equal)(void *, void *));

// 链表长度
DS_API size_t ds_list_size(DsList *);

// 插入链表元素
DS_API DS_STATUS ds_list_insert(DsList *, int, void *);

// 链首插入元素
DS_API DS_STATUS ds_list_prepend(DsList *, void *);

// 链尾插入元素
DS_API DS_STATUS ds_list_append(DsList *, void *);

// 移除链表元素
DS_API DS_STATUS ds_list_remove(DsList *, int, void **);

// 移除链首元素
DS_API DS_STATUS ds_list_remove_first(DsList *, void **);

// 移除链尾元素
DS_API DS_STATUS ds_list_remove_last(DsList *, void **);

// 查找指定元素索引
DS_API int ds_list_find_index(DsList *, void *);

// 获取链表元素
DS_API DS_STATUS ds_list_get(DsList *, int, void **);

// 销毁链表
DS_API void ds_list_destroy(DsList **);

// 创建链表迭代器
DS_API DsListIter *ds_list_iter_create(DsList *);

// 迭代器是否有下一个元素
DS_API DS_BOOL ds_list_iter_hasNext(DsListIter *);

// 获取迭代器的下一个元素
DS_API DS_STATUS ds_list_iter_next(DsListIter *, void **);

// 获取迭代器当前节点数据
DS_API DS_STATUS ds_list_iter_val(DsListIter *, void **);

// 销毁迭代器
DS_API void ds_list_iter_destroy(DsListIter **);

#ifdef __cplusplus
}
#endif

#endif // DSLIST_H_INCLUDE_
