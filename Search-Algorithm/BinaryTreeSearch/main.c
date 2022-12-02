#include "Type.h"

int main() {
    BSTree T1 = NULL;
    BinaryTree T2;
    Init(&T2);
    int age,input=1;
    int choice;
    while (input)
    {
        printf("请输入需要插入的数据:");
        scanf("%d",&age);
        printf("请输入你要调用的方法：");
        scanf("%d",&choice);
        switch (choice)
        {
            //头结点
            case 1:
                T1=Create(T1,age);
                printf("顺序遍历(中序)为：");
                Traverse(T1);
                break;
            //结构体指针无头结点
            case 2:
                CreateBinaryTree(&T2,age);
                printf("顺序遍历(中序)为：");
                Traverse(T2.head);
                break;
            default:
                printf("错误！\n");
                break;
        }
        printf("继续插入<0.是 1.否>");
        scanf("%d",&input);
    }
    return 0;
}
