//
// Created by 86153 on 2022/11/29.
//
#include "Type.h"
void Insert(Table *T)
{
    //name1��ǰ�ڱ��޿γ�
    char name1[20];
    int input=1;
    printf("�ÿγ̵ı���ǰ�ڿγ�Ϊ��");
    scanf("%s",name1);
    LNode *p = T->Head + Find(T, name1);
    while (input)
    {
        LNode *q=(LNode *) malloc(sizeof (LNode));
        printf("����������γ̵����֣�");
        scanf("%s", q->dataName);
        //ֻ����β���뷨����Ϊ����γ�Ҳ��Ҫ��Ϊ����ǰ�ڿγ�
        //����
        q->link = p->link;
        p->link = q;
        q->prior=p;
        T->totalCourse++;
        //��pָ���ƶ���ĩβ������ѭ������
        p = p->link;
        printf("�������<0.�� 1.��>");
        scanf("%d",&input);
    }

}