//
// Created by 86153 on 2022/11/27.
//
//销毁各个顶点之间的关系，
#include "Type.h"
void Destroy(ACMatrix *M)
{
    for(int i=0;i<M->topNumber;i++)
    {
        for(int j=0;j<=i;j++)
        {
            //将所有权值赋初始值100
            M->Matrix[i][j]=M->Matrix[j][i]=100;
        }
    }
    //将边数归0
    M->arcNumber=0;
}