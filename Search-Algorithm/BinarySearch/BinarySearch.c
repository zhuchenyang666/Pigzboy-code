//
// Created by 86153 on 2022/12/1.
#include "Type.h"
//���ֲ��ҵĵݹ��㷨
int BinarySearch(int a[],int number,int low,int high,int count)
{
    //���Ҵ���
    count ++;
    if(low>high)
    {
        printf("���ҵ�Ԫ�ز����ڣ�,�Ѿ�������%d��\n",count);
        return -1;
    }
    int middle=(low+high)/2;
    if(a[middle]==number)
    {
        printf("���ҵ�Ԫ�ش��ڣ��±�λ��Ϊ%d\n",middle);
        printf("���Ҵ���Ϊ%d",count);
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
    //��������յķ���ֵ
    return 1;
}