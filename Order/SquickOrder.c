#include "Type.h"
void Change(int *a,int *b)
{
    //����������
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
        //a[low]Ϊ�ָ�Ԫ��
        do i++; while (a[i] < a[low] && i<=high);
        do j--; while (a[j] > a[low] && j>=low);
        if(i<j) Change(a+i,a+j);
    } while (i<j);
    //������֮��j��Ϊ�ֽ���
    //ͬʱ��j��low��Ԫ�ػ���
    Change(a+low,a+j);
    return j;
}
void QuickOrder(int *a,int low,int high)
{
    int k;
    if (low<high)
    {
        k=Location(a,low,high);
        //k�������
        QuickOrder(a,low,k-1);
        //k�Ҳ�����
        QuickOrder(a,k+1,high);
    }
}