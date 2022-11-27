//
// Created by 86153 on 2022/11/27.
//
#include "Type.h"
int Calculate(Table *T) {
    char name;
    int input = 1;
    int temp;
    while (input) {
        int outcount = 0, incount = 0;
        ArcNode *p = NULL;
        ArcNode *q = NULL;
        //计算出度outcount
        printf("请输入要计算度的顶点名字:");
        case1:scanf("\n%c", &name);
        //temp用来存储A的编号
        temp= FindLow(T,name);
        //输入的顶点不在范围内
        if(temp<0 || temp >T->topNumber)
        {
            printf("顶点不存在,请重新输入：");
            goto case1;
        }
        p = T->head[temp].firstarc;
        while (p != NULL) {
            outcount++;
            p = p->nextarc;
        }
        //计算入度incount
        for (int m = 0; m < T->topNumber; m++)
        {
            //减少一次循环，因为A自身作为顶点，肯定那行没有入度边
            if (m == temp)
                continue;
            //从每一行查询与A有关系的入度边
            q = T->head[m].firstarc;
            while (q != NULL) {
                //每个顶点的每条入度边都不相同
                //所以如果匹配到一条就不用再往下循环了
                if (q->dataNumber == temp) {
                    incount++;
                    continue;
                }
                q = q->nextarc;
            }
            printf("%c的出度是%d,入度是%d,总度是%d\n", name, outcount, incount, outcount + incount);
            printf("请问是否还需要继续查询<0.否 1.是>");
            scanf_s("%d", &input);
        }
    }
    return OK;
}
