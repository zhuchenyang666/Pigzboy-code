//
// Created by 86153 on 2022/11/25.
//

#ifndef LJTBALE_TYPE_H
#define LJTBALE_TYPE_H
#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#define NEED 100
#define OK 1
#define ERROR -1
typedef struct ArcNode
{
    int dataNumber;
    struct ArcNode *nextarc;
    int weight;
}ArcNode;
typedef struct Head
{
    char topName;
    struct ArcNode *firstarc;
}Head;
typedef struct Table
{
    int topNumber,arcNumber;
    Head head[NEED];
}Table;
int Create(Table *T);
int Out(Table *T);
int FindLow(Table *T,char name);
void Menu();
int InsertArc(Table *T);
int Delete(Table *T);
int Calculate(Table *T);
int Traverse(Table *T,int m,int *visit);
void choice(Table *T);
#endif //LJTBALE_TYPE_H
