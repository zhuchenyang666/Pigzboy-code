//
// Created by 86153 on 2022/12/5.
//
#include "Type.h"
void BubbleOrder(int *data,int n)
{
    //i��ð�����������
    int temp;
    int count=0;
    for(int i=1;i<=n-1;i++)
    {
        int flag=0;
        count++;
        //j�ǵ�i����Ҫ�ȽϵĴ���
        for(int j=1;j<=n-i;j++)
        {
            if(data[j]>data[j+1])
            {
                //������ڽ��������flag=1��
                flag=1;
                temp=data[j];
                data[j]=data[j+1];
                data[j+1]=temp;
            }
        }
        //û�г��ֽ�����������Ѿ������ˣ�����Ҫ��������
        if(flag==0)
            break;
    }
    printf("�Ƚ�����Ϊ%d\n",count);
}