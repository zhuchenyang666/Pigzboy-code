//
// Created by 86153 on 2022/12/1.
//
#include "Type.h"
int QueueSearch(int a[],int number,int length)
{
    //为了减少对比次数，在a0位置添加哨兵
    a[-1]=number;
    int i;
    for(i=length-1;number!=a[i] && i>-1;i--);
    //返回的是
    if(i==-1)
    {
        printf("查找的元素不存在！\n");
    }
    else
    {
        printf("a[%d]存放的是需要查找的元素\n", i);
    }
    return i;
}