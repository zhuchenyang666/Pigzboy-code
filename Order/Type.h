//
// Created by 86153 on 2022/12/5.
//

#ifndef ORDER_TYPE_H
#define ORDER_TYPE_H
#include "stdio.h"
#include "string.h"
#include "stdlib.h"
typedef struct ElemType
{
    int age;
    char name[20];
}ElemType;
void BubbleOrder(int *data,int n);
void Out(int *data,int n);
void InsertOrder(int *a,int n);
void BinaryInsertOrder(int *a,int n);
void Combine(int *a,int *b,int aSize,int bSize);
void EasyOrder(int *a,int n);
#endif //ORDER_TYPE_H
