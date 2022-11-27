//
// Created by 86153 on 2022/11/24.
//
#include "Type.h"
//查找对应符号在数组中的下标
int FindLow(ACMatrix *M,char name)
{
    for(int i=0;i<M->topNumber;i++)
    {
        if(name==M->topName[i])
        {
            return i;
        }
    }
    printf("查找的顶点%c不存在！\n",name);
    return WRONG;
}


