//
// Created by 86153 on 2022/11/26.
//
//深度优先遍历联通图
#include "Type.h"
//递归算法实现
int Traverse(Table *T,int m,int *visit)
{
    //访问过的顶点标记为1
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
