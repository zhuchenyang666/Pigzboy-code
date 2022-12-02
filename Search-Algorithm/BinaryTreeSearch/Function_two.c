//
// Created by 86153 on 2022/12/2.
//
#include "Type.h"
//带有头结点的
int CreateBinaryTree(BinaryTree *tree,int age)
{
    //首先要将树指向第一个结点
    TNode *p=tree->head;
    TNode *q=NULL;
    while (p!=NULL)
    {
        //用q保留p的位置，方便后续的链接操作
        //保证循环结束前，q是p的双亲结点
        q=p;
        if(age==p->data.age)
        {
            printf("该数字已经存在，不需要再插入！\n");
            return 0;
        }
        if(age<p->data.age)
        {
            p=p->lchild;
        }
        else if(age>p->data.age)
        {
            p=p->rchild;
        }
    }
    //循环结束了，找到应该插入的位置了
    p=(TNode *) malloc(sizeof (TNode));
    p->data.age=age;
    p->lchild=p->rchild=NULL;
    //如果T是一颗空树，则让p结点直接插入
    if(tree->head==NULL)
    {
        tree->head=p;
        return 1;
    }
    else if(age<q->data.age)
    {
        q->lchild=p;
    }
    else if(age>q->data.age)
    {
        q->rchild=p;
    }
    return 1;
}