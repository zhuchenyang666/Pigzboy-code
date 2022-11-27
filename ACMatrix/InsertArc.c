//
// Created by 86153 on 2022/11/26.
//
#include "Type.h"
void Insert(ACMatrix *M)
{
    int input;
    char name1,name2;
    int i,j;
    int choice;
    int weight;
    printf("请问您确定要新添加两个顶点间的关系吗<0.否 1.是>");
    scanf("\n%d",&input);
    while (input)
    {
        printf("请输入两个顶点：");
        scanf("\n%c%c",&name1,&name2);
        i= FindLow(M,name1);
        j= FindLow(M,name2);
        if(i<0 || i>M->topNumber || j<0 || j>M->topNumber || i==j)
        {
            printf("您输入的顶点至少有一个不存在或者非法！\n");
            goto case1;
        }
        if(M->Matrix[i][j]!=100 || M->Matrix[j][i] !=100)
        {
            printf("这两个顶点之间已经有关系了，请问是需要修改两点之间的权值吗？\n");
            printf("<0.否 1.是>");
            scanf("%d",&choice);
            if(choice==1)
            {
                M->arcNumber--;
                goto case2;
            }
            else
            {
                goto case1;
            }
        }
        //输入的顶点合法
        case2:printf("请输入一个权值：");
        scanf("%d",&weight);
        M->Matrix[i][j]=M->Matrix[j][i]=weight;
        M->arcNumber++;
        //判断是否还需要继续添加边之间的关系
        case1:printf("是否还需要继续添加两个顶点间的关系：<0.退出 1.继续>");
        scanf("%d",&input);
    }

}