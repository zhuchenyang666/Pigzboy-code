//
// Created by 86153 on 2022/11/24.
//
#include"Type.h"

typedef struct string string;

int Create(ACMatrix *M)
{
    printf("请输入顶点个数：");
    scanf("%d",&(M->topNumber));
    printf("请输入边的个数，");
    scanf("%d",&(M->arcNumber));
    //输入各个顶点的编号
    printf("请输入顶点符号：");
    for(int i=0;i<M->topNumber;i++)
    {
        scanf("\n%c",M->topName+i);
    }
    //得到矩阵的大小需求后，先将矩阵里面的元素全部赋值无穷大
    for(int i=0;i<M->topNumber;i++)
    {
        for(int j=0;j<M->topNumber;j++)
        {
            M->Matrix[i][j]=100;
        }
    }
    //给边赋值，两个顶点有边，则赋值对应的weight
    int weight;
    int m,n;
    //char name1[20];
    //char name2[20];
    char name1,name2;
    for(int k=0;k<M->arcNumber;k++)
    {

        //fflush(stdin);
        printf("请输入两个顶点：");
        scanf("\n%c%c",&name1,&name2);
        printf("请输入一个权值：");
        scanf("%d",&weight);
        //分别找两个顶点的下标
        m= FindLow(M,name1);
        n= FindLow(M,name2);
        M->Matrix[m][n]=M->Matrix[n][m]=weight;
    }
    return 1;
}
