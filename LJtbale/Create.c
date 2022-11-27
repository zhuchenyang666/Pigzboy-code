//
// Created by 86153 on 2022/11/25.
//
#include "Type.h"
int Create(Table *T)
{
    //输入顶点个数，边数
    printf("请输入顶点的个数,拥有的边数：");
    scanf("%d%d",&(T->topNumber),&(T->arcNumber));
    printf("请依次输入顶点的编号：");
    //输入每个顶点的名字
    //将每个顶点的指针域值赋NULL，方便后续的结点头插入操作
    for(int i=0;i<T->topNumber;i++)
    {
        scanf("\n%c",&(T->head[i].topName));
        T->head[i].firstarc=NULL;
    }
    //开始建立边之间的联系
    char name1,name2;
    int temp;
    for(int j=0;j<T->arcNumber;j++)
    {
        ArcNode *p=(ArcNode *)malloc(sizeof (ArcNode));
        printf("请分别输入两个顶点：");
        scanf("\n%c%c",&name1,&name2);
        temp=FindLow(T,name1);
        //第一个地方插入头顶点对应的数字
        p->dataNumber=FindLow(T,name2);
        //开始接表,头插入法
        p->nextarc=T->head[temp].firstarc;
        T->head[temp].firstarc=p;
    }
    return OK;
}
