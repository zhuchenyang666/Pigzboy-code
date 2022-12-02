//
// Created by 86153 on 2022/12/1.
//
#include "Type.h"
//二分查找非递归算法
int BinaryNormalSearch(const int a[],int number,int low,int high,int count)
{
    int middle;
    while (low<=high)
    {
        count++;
        middle=(low+high)/2;
        if(a[middle]==number)
        {
            printf("查找的元素存在，下标位置为%d\n",middle);
            printf("查找次数为%d\n",count);
            return middle;
        }
        else if(a[middle]>number)
        {
            high=middle-1;
        }
        else if(a[middle]<number)
        {
            low=middle+1;
        }
    }
    printf("查找的元素不存在\n");
    printf("已经查找次数为%d\n",count);
    return 0;
}