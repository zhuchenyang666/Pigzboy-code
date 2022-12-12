#ifndef LINKLIST_TYPE_H
#define LINKLIST_TYPE_H
#include"stdio.h"
#include "stdlib.h"
#include "string.h"
typedef struct LNode
{
    int age;
    char name[20];
    struct LNode *next;
}LNode;
typedef  struct LinkList
{
    struct LNode *head;
    int length;
}LinkList;
int BetweenDelete(LinkList *L,int a,int b);
void FindMinimal(LinkList *L);
#endif //LINKLIST_TYPE_H
