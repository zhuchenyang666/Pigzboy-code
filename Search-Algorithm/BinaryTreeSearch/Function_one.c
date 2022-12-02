//
// Created by 86153 on 2022/12/2.
//
#include "Type.h"
//结构体变量的指针
BSTree Create(BSTree T,int age)
{
    TNode *p=T,*q;
    while (p!=NULL)
    {
        q=p;
        if(age<p->data.age)
        {
            p=p->lchild;
        }
        else if(age>p->data.age)
        {
            p=p->rchild;
        }
        else if(age==p->data.age)
        {
            printf("插入的元素已经存在，无需插入！\n");
            return T;
        }
    }
    //找到应该插入的位置
    p=(TNode *) malloc(sizeof (TNode));
    p->data.age=age;
    p->lchild=p->rchild=NULL;
    if(T==NULL)
    {
        T=p;
        printf("%d",T->data.age);
        return T;
    }
    else if(age<q->data.age)
    {
        q->lchild=p;
    }
    else if(age>q->data.age)
    {
        q->rchild=p;
    }
   return T;
}