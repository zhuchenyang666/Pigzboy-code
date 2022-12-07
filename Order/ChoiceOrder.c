#include "Type.h"
//将2个数组内的元素按照从小到大的顺序放到第三个数组
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
    //如果a已经输出完了
    if(i==aSize)
    {
        while (j<bSize)
        {
            c[k] = b[j];
            j++, k++;
        }
    }
    //如果b已经输出完了
    else if(j==bSize)
    {
        while (i<aSize)
        {
            c[k] = a[i];
            i++, k++;
        }
    }
    //打印C
    printf("新合并的数组为：");
    for(i=0;i<aSize+bSize;i++)
    {
        printf("%d ",c[i]);
    }
}