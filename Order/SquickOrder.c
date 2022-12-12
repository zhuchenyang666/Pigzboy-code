#include "Type.h"
void Change(int *a,int *b)
{
    //交换两个数
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int Location(int *a,int low,int high)
{
    int i,j;
    i=low,j=high+1;
    do
    {
        //a[low]为分割元素
        do i++; while (a[i] < a[low] && i<=high);
        do j--; while (a[j] > a[low] && j>=low);
        if(i<j) Change(a+i,a+j);
    } while (i<j);
    //结束了之后j作为分界线
    //同时将j和low的元素互换
    Change(a+low,a+j);
    return j;
}
void QuickOrder(int *a,int low,int high)
{
    int k;
    if (low<high)
    {
        k=Location(a,low,high);
        //k左侧排序
        QuickOrder(a,low,k-1);
        //k右侧排序
        QuickOrder(a,k+1,high);
    }
}