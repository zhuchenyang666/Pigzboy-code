//
// Created by 86153 on 2022/11/24.
//
#include "Type.h"
void Out(ACMatrix *M)
{
    //打印各个顶点编号
    printf("各个顶点依次为：");
    for(int i=0;i<M->topNumber;i++)
    {
        printf("%c ",M->topName[i]);
    }
    printf("\n");

    //打印邻接矩阵
    printf("邻接矩阵为:\n");
    for(int j=0;j<M->topNumber;j++)
    {
        printf("%c ",M->topName[j]);
    }
    printf("\n");
    //开始打印矩阵
    for(int i=0;i<M->topNumber;i++)
    {
        printf("%c|",M->topName[i]);
        for(int j=0;j<M->topNumber;j++)
        {
            printf("%d ",M->Matrix[i][j]);
        }
        printf("\n");
    }
}