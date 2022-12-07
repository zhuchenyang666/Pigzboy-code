#include "Type.h"
//简单选择排序
void EasyOrder(int *a,int n)
{
    int i,j;
    int temp;
    for(i=0;i<n-1;i++)
    {
        int min=a[i];
        int k=i;
        int flag=0;
        //从i开始找最小元素
        for (j=i+1;j<n;j++)
        {
            if(a[j]<min)
            {
                flag=1;
                //一直找最小的，并且记录下它的位置
                min=a[j];
                k=j;
            }
        }
        //flag==0表示本身已经是最小的了，不用进行交换
        if(flag==0)
            continue;
        //最小元素置前，较大元素放在原来最小元素的位置
        temp=a[i];
        a[i]=a[k];
        a[k]=temp;
    }
    printf("\n简单选择排序为:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}