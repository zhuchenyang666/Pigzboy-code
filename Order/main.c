#include "Type.h"
int main() {
    printf("ԭ����Ϊ��\n");
    int a[11]={100,7,6,5,4,1,2,3,4,5,10,};
    for(int i=0;i<11;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    //BubbleOrder(a,10);
    //InsertOrder(a,10);
    BinaryInsertOrder(a,10);
    Out(a,10);
    printf("\n+++++++++++\n");
    int m[]={1,2,3,4,5,14,16,22,};
    int n[]={6,7,9,10,11};
    //Combine(m,n,sizeof m/sizeof m[0],sizeof n/sizeof n[0]);
    int aaa[11]={100,7,6,5,4,1,2,3,4,5,10,};
    //��ѡ������
    //EasyOrder(aaa,11);
    //��������
    QuickOrder(aaa,0,sizeof(aaa)/sizeof aaa[0]);
    printf("����");
    Out(aaa,sizeof(aaa)/sizeof aaa[0]);

    return 0;
}
void Out(int *data,int n)
{
    printf("����������Ϊ��\n");
    for(int i=0;i<=n;i++)
    {
        printf("%d,",data[i]);
    }
}
