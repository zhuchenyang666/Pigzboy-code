//
// Created by 86153 on 2022/11/26.
//
#include "Type.h"
//判断两个顶点有关系有关系与否
int Judge(ACMatrix *M)
{
    char name1,name2;
    int i,j;
    printf("请输入两个顶点：");
    scanf("\n%c%c",&name1,&name2);
    i= FindLow(M,name1);
    j= FindLow(M,name2);
    if(i<0 || i>M->topNumber || j<0 || j>M->topNumber)
    {
        return WRONG;
    }
    if(M->Matrix[i][j]==100)
    {
        printf("没有%c到%c的关系",name1,name2);
        return WRONG;
    }
    else
        printf("有%c到%c的关系，权值为%d\n",name1,name2,M->Matrix[i][j]);
    return OK;
}