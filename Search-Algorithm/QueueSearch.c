//
// Created by 86153 on 2022/12/1.
//
#include "Type.h"
int QueueSearch(int a[],int number,int length)
{
    //Ϊ�˼��ٶԱȴ�������a0λ������ڱ�
    a[-1]=number;
    int i;
    for(i=length-1;number!=a[i] && i>-1;i--);
    //���ص���
    if(i==-1)
    {
        printf("���ҵ�Ԫ�ز����ڣ�\n");
    }
    else
    {
        printf("a[%d]��ŵ�����Ҫ���ҵ�Ԫ��\n", i);
    }
    return i;
}