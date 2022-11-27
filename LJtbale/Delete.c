//
// Created by 86153 on 2022/11/27.
//
#include "Type.h"
int Delete(Table *T)
{
    int input=1;
    int i,j;
    char name1,name2;
    while (input)
    {
        printf("请有序输入需要删除的关系的两个顶点：");
        scanf("\n%c%c",&name1,&name2);
        i= FindLow(T,name1);
        j= FindLow(T,name2);
        //判断是否为存在的顶点
        if(i<0 || i>T->topNumber || j<0 || j>T->topNumber || i==j)
        {
            printf("输入的顶点不存在，或者重复顶点\n");
            goto case1;
        }
        //判断是否两个顶点间有关系
        ArcNode *p=T->head[i].firstarc;
        ArcNode *q=NULL;
        while (p!=NULL)
        {
            if(p->dataNumber==j)
            {
                printf("有%c到%c的关系,删除中……\n",name1,name2);
                //如果需要删除的结点是首个结点
                if(p==T->head[i].firstarc)
                {
                    T->head[i].firstarc=p->nextarc;
                    free(p);
                    T->arcNumber--;
                    goto case1;
                }
                //如果删除的是非第一个结点
                else
                {
                    q->nextarc = p->nextarc;
                    free(p);
                    T->arcNumber--;
                    goto case1;
                }
            }
            q=p;
            p=p->nextarc;
        }
        //上面都不成立，表示本身就没有A->B的关系，无需删除
        printf("没有%c到%c的关系,无需删除\n",name1,name2);
        case1:printf("请问还需要进行删除操作吗<0.否 1.是>");
        scanf_s("%d",&input);
    }
    return OK;
}