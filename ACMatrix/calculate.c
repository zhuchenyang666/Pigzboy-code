//
// Created by 86153 on 2022/11/26.
//
#include "Type.h"
int CalculateN(ACMatrix *M)
{
    //总度数就是边数
    //求某一个顶点的度
    char name;
    int temp;
    int input=1;
    while (input) {
        printf("请输入需要计算度的顶点：");
        scanf("\n%c", &name);
        temp = FindLow(M, name);
        int count=0;//统计度
        for (int j = 0; j < M->topNumber; j++) {
            if (M->Matrix[temp][j] != 100) {
                count++;
            }
        }
        printf("%c(%d)的度为%d：", name, temp, count);
        printf("是否还需要继续求：<0.退出 1.继续>");
        scanf_s("%d",&input);
    }
    return OK;
}
