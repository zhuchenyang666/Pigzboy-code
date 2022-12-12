/*
 * 找到链表中元素最小的，并且把它置前
 */
#include "Type.h"
void FindMinimal(LinkList *L)
{
    if(L->length==0)
    {
        printf("表为空！\n");
        return;
    }
    if(L->length==1)
    {
        printf("仅有一个链表，无需前置！\n");
        return;
    }
    LNode *p=L->head->next;
    //将temp指针指向首元素，p指针往后移动，出现比temp内元素小的，重新指向
    LNode *temp=p;
    LNode *minFront=NULL;
    LNode *pFront=NULL;
    while (p)
    {
        if(p->age < temp->age)
        {
            temp=p;
            minFront=pFront;
        }
        pFront=p;
        p=p->next;
    }
    //将指针移动到temp的前面一个
    //效率比较地的方法
    /*p=L->head->next;
    while (p!=temp)
    {
        q=p;
        p=p->next;
    }
     */
    //此时，temp指针内部元素是最小的
    //将temp指向的结点接到head后面
    minFront->next=temp->next;
    temp->next=L->head->next;
    L->head->next=temp;
}