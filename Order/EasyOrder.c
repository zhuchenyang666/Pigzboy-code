#include "Type.h"
//��ѡ������
void EasyOrder(int *a,int n)
{
    int i,j;
    int temp;
    for(i=0;i<n-1;i++)
    {
        int min=a[i];
        int k=i;
        int flag=0;
        //��i��ʼ����СԪ��
        for (j=i+1;j<n;j++)
        {
            if(a[j]<min)
            {
                flag=1;
                //һֱ����С�ģ����Ҽ�¼������λ��
                min=a[j];
                k=j;
            }
        }
        //flag==0��ʾ�����Ѿ�����С���ˣ����ý��н���
        if(flag==0)
            continue;
        //��СԪ����ǰ���ϴ�Ԫ�ط���ԭ����СԪ�ص�λ��
        temp=a[i];
        a[i]=a[k];
        a[k]=temp;
    }
    printf("\n��ѡ������Ϊ:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}