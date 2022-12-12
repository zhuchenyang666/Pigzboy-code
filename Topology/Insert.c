//
// Created by 86153 on 2022/11/29.
//
#include "Type.h"
void Insert(Table *T)
{
    //name1是前期必修课程
    char name1[20];
    int input=1;
    printf("该课程的必修前期课程为：");
    scanf("%s",name1);
    LNode *p = T->Head + Find(T, name1);
    while (input)
    {
        LNode *q=(LNode *) malloc(sizeof (LNode));
        printf("请输入后续课程的名字：");
        scanf("%s", q->dataName);
        //只能用尾插入法，因为这个课程也需要成为必修前期课程
        //连接
        q->link = p->link;
        p->link = q;
        q->prior=p;
        T->totalCourse++;
        //将p指针移动到末尾，减少循环次数
        p = p->link;
        printf("继续添加<0.否 1.是>");
        scanf("%d",&input);
    }

}