#include "Type.h"

int main() {
    BSTree T1 = NULL;
    BinaryTree T2;
    Init(&T2);
    int age,input=1;
    int choice;
    while (input)
    {
        printf("��������Ҫ���������:");
        scanf("%d",&age);
        printf("��������Ҫ���õķ�����");
        scanf("%d",&choice);
        switch (choice)
        {
            //ͷ���
            case 1:
                T1=Create(T1,age);
                printf("˳�����(����)Ϊ��");
                Traverse(T1);
                break;
            //�ṹ��ָ����ͷ���
            case 2:
                CreateBinaryTree(&T2,age);
                printf("˳�����(����)Ϊ��");
                Traverse(T2.head);
                break;
            default:
                printf("����\n");
                break;
        }
        printf("��������<0.�� 1.��>");
        scanf("%d",&input);
    }
    return 0;
}
