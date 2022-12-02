//
// Created by 86153 on 2022/12/2.
//

#ifndef QUEUEBINARYTREE_TYPE_H
#define QUEUEBINARYTREE_TYPE_H
#include"stdio.h"
#include"stdlib.h"
#include "string.h"

typedef struct ElemType
{
    char name[20];
    int age;
}ElemType;
typedef struct TNode
{
    struct TNode *lchild;
    struct TNode *rchild;
    ElemType data;
}TNode,*BSTree;
typedef struct BinaryTree
{
    struct TNode *head;
    int NodeNumber;
}BinaryTree;
void Init(BinaryTree *tree);
int CreateBinaryTree(BinaryTree *tree,int age);
int Traverse(TNode *T);
BSTree Create(BSTree T,int age);
#endif //QUEUEBINARYTREE_TYPE_H
