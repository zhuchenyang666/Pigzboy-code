#include "Type.h"
/*
 * 删除链表中a到b之间的元素
 */
int BetweenDelete(LinkList *L,int a,int b)
{
    if(L->length==0)
    {
        printf("表为空，无需删除！\n");
        return 0;
    }
    LNode *p=L->head->next;
    LNode *q=L->head;
    while (p && p->age<b)
    {
        if(p->age>a && p->age<b)
        {
            q->next=p->next;
            free(p);
            L->length--;
            p=q->next;
        }
        else
        {
            q = p;
            p = p->next;
        }
    }
    return 1;
}