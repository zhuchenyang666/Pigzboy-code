//
// Created by 86153 on 2022/12/5.
//
#include "Type.h"
void BubbleOrder(int *data,int n)
{
    //i是冒泡排序的趟数
    int temp;
    int count=0;
    for(int i=1;i<=n-1;i++)
    {
        int flag=0;
        count++;
        //j是第i趟需要比较的次数
        for(int j=1;j<=n-i;j++)
        {
            if(data[j]>data[j+1])
            {
                //如果存在交换的情况flag=1；
                flag=1;
                temp=data[j];
                data[j]=data[j+1];
                data[j+1]=temp;
            }
        }
        //没有出现交换的情况，已经有序了，不需要再排序了
        if(flag==0)
            break;
    }
    printf("比较趟数为%d\n",count);
}