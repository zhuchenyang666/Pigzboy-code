//
// Created by 86153 on 2022/12/2.
//
#include "Type.h"
int Traverse(TNode *T)
{
    //����������Եõ����������
    if(T!=NULL)
    {
        Traverse(T->lchild);
        printf("%d ",T->data.age);
        Traverse(T->rchild);
    }
    return 1;
}