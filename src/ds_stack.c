/*
 * @Author: Kelch
 * @Date: 2022-12-17 20:42:10
 * @LastEditors: Kelch
 * git git
 * @LastEditTime: 2022-12-18 04:06:30
 * @FilePath: /DataStructure-C/src/ds_stack.c
 * @Description:
 *
 * QQ：331378054
 * 希儿也想变得更可爱
 * 希儿世界第一可爱
 *
 * Copyright (c) 2022 by Kelch, All Rights Reserved.
 */

#include "./../include/ds_stack.h"

#include <stdlib.h>
#include <string.h>

struct DsStack {
    size_t max;
    int index;
    void **elems;
};

DsStack *ds_stack_create(size_t size) {
    DsStack *stack = (DsStack *)malloc(sizeof(DsStack));
    memset(stack, 0, sizeof(DsStack));
    if (NULL == stack)
        exit(DS_STATUS_OUTMEM);
    if (size <= 0)
        size = 16;
    stack->elems = (void **)malloc(sizeof(void **));
    if (NULL == stack->elems)
        exit(DS_STATUS_OUTMEM);
    stack->max = size;
    stack->index = 0;
    return stack;
}

DS_STATUS
ds_stack_push(DsStack *stack, void *data) {
    if (NULL == stack)
        return DS_STATUS_NULL;
    if (stack->index >= stack->max)
        return DS_STATUS_FULL;
    stack->elems[stack->index++] = data;
    return DS_STATUS_OK;
}

DS_STATUS
ds_stack_pop(DsStack *stack, void **data) {
    if (NULL == stack)
        return DS_STATUS_NULL;
    if (stack->index <= 0)
        return DS_STATUS_EMPTY;
    if (data)
        *data = stack->elems[--stack->index];
    return DS_STATUS_OK;
}

int ds_stack_counts(DsStack *stack) {
    if (NULL == stack)
        return 0;
    return stack->index;
}

DS_STATUS
ds_stack_clear(DsStack *stack) {
    if (NULL == stack)
        return DS_STATUS_NULL;
    stack->index = 0;
    return DS_STATUS_OK;
}

void ds_stack_destroy(DsStack **in) {
    if (NULL != *in) {
        DsStack *stack = *in;
        free(stack->elems);
        free(stack);
        *in = NULL;
    }
}
