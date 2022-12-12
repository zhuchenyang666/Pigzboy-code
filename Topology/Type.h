//
// Created by 86153 on 2022/11/29.
//
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#ifndef TOPOLOGICAL_TYPE_H
#define TOPOLOGICAL_TYPE_H
#define NEED 5
typedef struct LNode
{
    struct LNode *link;
    struct LNode *prior;
    char dataName[20];
}LNode;
typedef struct Table
{
    int noHCourse;
    int totalCourse;
    LNode Head[NEED];
}Table;
void Create(Table *T);
void Out(Table *T);
void Insert(Table *T);
int  Find(Table *T,char name[20]);
#endif //TOPOLOGICAL_TYPE_H
