//
// Created by 86153 on 2022/11/25.
//
#include "Type.h"
int Create(Table *T)
{
    //���붥�����������
    printf("�����붥��ĸ���,ӵ�еı�����");
    scanf("%d%d",&(T->topNumber),&(T->arcNumber));
    printf("���������붥��ı�ţ�");
    //����ÿ�����������
    //��ÿ�������ָ����ֵ��NULL����������Ľ��ͷ�������
    for(int i=0;i<T->topNumber;i++)
    {
        scanf("\n%c",&(T->head[i].topName));
        T->head[i].firstarc=NULL;
    }
    //��ʼ������֮�����ϵ
    char name1,name2;
    int temp;
    for(int j=0;j<T->arcNumber;j++)
    {
        ArcNode *p=(ArcNode *)malloc(sizeof (ArcNode));
        printf("��ֱ������������㣺");
        scanf("\n%c%c",&name1,&name2);
        temp=FindLow(T,name1);
        //��һ���ط�����ͷ�����Ӧ������
        p->dataNumber=FindLow(T,name2);
        //��ʼ�ӱ�,ͷ���뷨
        p->nextarc=T->head[temp].firstarc;
        T->head[temp].firstarc=p;
    }
    return OK;
}
