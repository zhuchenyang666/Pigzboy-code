//
// Created by 86153 on 2022/11/27.
//
#include "Type.h"
int InsertArc(Table *T)
{
    char name1,name2;
    int input=1;
    int i,j;
    while(input)
    {
        printf("�������������㣺");
        scanf("\n%c%c",&name1,&name2);
        i= FindLow(T,name1);
        j= FindLow(T,name2);
        //�ж��Ƿ�Ϊ���ڵĶ���
        if(i<0 || i>T->topNumber || j<0 || j>T->topNumber || i==j)
        {
            printf("����Ķ��㲻���ڣ������ظ�����\n");
            goto case1;
        }
        //�ж��Ƿ��Ѿ�����������Ƿ��й�ϵ��
        ArcNode *p=T->head[i].firstarc;
        while (p!=NULL)
        {
            if(p->dataNumber==j)
            {
                printf("�Ѿ���%c��%c�Ĺ�ϵ��\n",name1,name2);
                goto case1;
            }
            p=p->nextarc;
        }
        //A->B�ޱ߹�ϵ����AB���Ǵ��ڵĶ���
        //��ʼ�ӱ�,ͷ���뷨
        p=(ArcNode *)malloc(sizeof(ArcNode));
        if(p==NULL)
        {
            printf("����ʧ�ܣ�\n");
            return ERROR;
        }
        p->dataNumber=j;
        p->nextarc=T->head[i].firstarc;
        T->head[i].firstarc=p;
        T->arcNumber++;
        case1:printf("���ʻ���Ҫ��ӹ�ϵ��<0.�� 1.��>");
        scanf_s("\n%d",&input);
    }
    return OK;
}