//
// Created by 86153 on 2022/11/26.
//
//������ȱ�����ͨͼ
#include "Type.h"
//�ݹ��㷨ʵ��
int Traverse(Table *T,int m,int *visit)
{
    //���ʹ��Ķ�����Ϊ1
    visit[m]=1;
    printf("%c(%d) ",T->head[m].topName,m);
    ArcNode *p=T->head[m].firstarc;
    while (p!=NULL)
    {
        if(visit[m]!=1)
        {
            Traverse(T, m, visit);
        }
        m=p->dataNumber;
        p=p->nextarc;

    }
    return OK;
}
