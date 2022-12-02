#include "Type.h"
//二分查找算法
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
        //输入一个数字
        printf("请输入您需要查找的数字：");
        scanf("%d",&number);
        //开始折半查找
        //BinarySearch(a, number, 0, (sizeof a) / sizeof(a[0])-1, 0);
        //BinaryNormalSearch(a, number, 0, (sizeof a) / sizeof(a[0])-1, 0);
        QueueSearch(a,number,(sizeof a) / sizeof(a[0]));
        printf("请问还需继续查找吗<0.是 1.否>");
        scanf("%d",&input);
    }
    return 0;
}
