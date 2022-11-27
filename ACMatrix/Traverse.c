//
// Created by 86153 on 2022/11/26.
//
//深度优先遍历联通图
//recursive递归访问，traverse遍历
#include "Type.h"
int Traverse(ACMatrix *M,int m,int *visit)
{
    printf("%c(%d) ",M->topName[m],m);
    //给访问过的顶点打上标记号1
    visit[m]=1;
    for(int n=0;n<M->topNumber;n++)
    {
        //从m这一行开始，访问列不是0，且没有被访问过的顶点
        if(M->Matrix[m][n]!=100 && visit[n]!=1)
        {
            Traverse(M,n,visit);
        }
    }
    return OK;
}