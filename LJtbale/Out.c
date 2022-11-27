//
// Created by 86153 on 2022/11/25.
//
#include "Type.h"
int Out(Table *T)
{
    printf("弧数为：%d\n",T->arcNumber);

    for(int i=0;i<T->topNumber;i++)
    {
        printf("%c ",T->head[i].topName);
    }
    printf("\n");

    for(int m=0;m<T->topNumber;m++)
    {
        ArcNode *p=T->head[m].firstarc;
        printf("顶点为%c的链表为：",T->head[m].topName);
        while (p!=NULL)
        {
            printf("%c(%d)->",T->head[p->dataNumber].topName,p->dataNumber);
            p=p->nextarc;
        }
        printf("\n");
    }
    return OK;
}