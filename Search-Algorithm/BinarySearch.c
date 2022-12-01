//
// Created by 86153 on 2022/12/1.
#include "Type.h"
//二分查找的递归算法
int BinarySearch(int a[],int number,int low,int high,int count)
{
    //查找次数
    count ++;
    if(low>high)
    {
        printf("查找的元素不存在！,已经查找了%d次\n",count);
        return -1;
    }
    int middle=(low+high)/2;
    if(a[middle]==number)
    {
        printf("查找的元素存在，下标位置为%d\n",middle);
        printf("查找次数为%d",count);
        return middle;
    }
    else if(a[middle]>number)
    {
        BinarySearch(a,number,low,middle-1,count);
    }
    else if(a[middle<number])
    {
        BinarySearch(a,number,middle+1,high,count);
    }
    //这个是最终的返回值
    return 1;
}