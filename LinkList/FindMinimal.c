/*
 * �ҵ�������Ԫ����С�ģ����Ұ�����ǰ
 */
#include "Type.h"
void FindMinimal(LinkList *L)
{
    if(L->length==0)
    {
        printf("��Ϊ�գ�\n");
        return;
    }
    if(L->length==1)
    {
        printf("����һ����������ǰ�ã�\n");
        return;
    }
    LNode *p=L->head->next;
    //��tempָ��ָ����Ԫ�أ�pָ�������ƶ������ֱ�temp��Ԫ��С�ģ�����ָ��
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
    //��ָ���ƶ���temp��ǰ��һ��
    //Ч�ʱȽϵصķ���
    /*p=L->head->next;
    while (p!=temp)
    {
        q=p;
        p=p->next;
    }
     */
    //��ʱ��tempָ���ڲ�Ԫ������С��
    //��tempָ��Ľ��ӵ�head����
    minFront->next=temp->next;
    temp->next=L->head->next;
    L->head->next=temp;
}