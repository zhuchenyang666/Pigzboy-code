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
        printf("请输入两个顶点：");
        scanf("\n%c%c",&name1,&name2);
        i= FindLow(T,name1);
        j= FindLow(T,name2);
        //判断是否为存在的顶点
        if(i<0 || i>T->topNumber || j<0 || j>T->topNumber || i==j)
        {
            printf("输入的顶点不存在，或者重复顶点\n");
            goto case1;
        }
        //判断是否已经两个顶点间是否有关系了
        ArcNode *p=T->head[i].firstarc;
        while (p!=NULL)
        {
            if(p->dataNumber==j)
            {
                printf("已经有%c到%c的关系了\n",name1,name2);
                goto case1;
            }
            p=p->nextarc;
        }
        //A->B无边关系，且AB都是存在的顶点
        //开始接表,头插入法
        p=(ArcNode *)malloc(sizeof(ArcNode));
        if(p==NULL)
        {
            printf("分配失败！\n");
            return ERROR;
        }
        p->dataNumber=j;
        p->nextarc=T->head[i].firstarc;
        T->head[i].firstarc=p;
        T->arcNumber++;
        case1:printf("请问还需要添加关系吗<0.否 1.是>");
        scanf_s("\n%d",&input);
    }
    return OK;
}