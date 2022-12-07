#include "Type.h"
//��2�������ڵ�Ԫ�ذ��մ�С�����˳��ŵ�����������
void Combine(int *a,int *b,int aSize,int bSize)
{
    int c[aSize+bSize];
    int i=0,j=0,k=0;
    while (i<aSize && j<bSize)
    {
        if(a[i]<=b[j])
        {
            c[k]=a[i];
            i++,k++;
        }
        else if(a[i]>b[j])
        {
            c[k]=b[j];
            j++,k++;
        }
    }
    //���a�Ѿ��������
    if(i==aSize)
    {
        while (j<bSize)
        {
            c[k] = b[j];
            j++, k++;
        }
    }
    //���b�Ѿ��������
    else if(j==bSize)
    {
        while (i<aSize)
        {
            c[k] = a[i];
            i++, k++;
        }
    }
    //��ӡC
    printf("�ºϲ�������Ϊ��");
    for(i=0;i<aSize+bSize;i++)
    {
        printf("%d ",c[i]);
    }
}