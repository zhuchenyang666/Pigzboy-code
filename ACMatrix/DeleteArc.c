//
// Created by 86153 on 2022/11/26.
//
#include "Type.h"
void Delete(ACMatrix *M)
{
    char name1,name2;
    int i,j;
    int input=1;
    while (input)
    {
        printf("请输入您需要删除边的两个顶点：");
        scanf("\n%c%c", &name1, &name2);
        i = FindLow(M, name1);
        j = FindLow(M, name2);
        if(M->Matrix[i][j]==100 ||M->Matrix[j][i] ==100)
        {
            //表示两条边之间本身无关系，无需删除
            printf("两个顶点之间没有关系！\n");
            goto case1;
        }
        if(i<0 || i>M->topNumber || j<0 || j>M->topNumber)
        {
            printf("您输入的顶点至少有一个不存在！");
            goto case1;
        }
        //输入的顶点在范围内，且两条边之间原来有联系
        M->Matrix[i][j] = M->Matrix[j][i] = 100;
        M->arcNumber--;
        case1:printf("是否还需要需要删除：<0.退出 1.继续>");
        scanf("\n%d",&input);
    }

}