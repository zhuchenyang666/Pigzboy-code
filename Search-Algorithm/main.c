#include "Type.h"
//���ֲ����㷨
//Binary search algorithm
typedef struct ElemType
{
    char name[20];
    int age;
    int key;
}ElemType;


int main() {
    int a[]={5,13,19,21,37,56,64,75,80,88,92};
    int number;

    int input=1;
    while(input)
    {
        //����һ������
        printf("����������Ҫ���ҵ����֣�");
        scanf("%d",&number);
        //��ʼ�۰����
        //BinarySearch(a, number, 0, (sizeof a) / sizeof(a[0])-1, 0);
        //BinaryNormalSearch(a, number, 0, (sizeof a) / sizeof(a[0])-1, 0);
        QueueSearch(a,number,(sizeof a) / sizeof(a[0]));
        printf("���ʻ������������<0.�� 1.��>");
        scanf("%d",&input);
    }
    return 0;
}
