#include "Type.h"
/*
 * ɾ��������a��b֮���Ԫ��
 */
int BetweenDelete(LinkList *L,int a,int b)
{
    if(L->length==0)
    {
        printf("��Ϊ�գ�����ɾ����\n");
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