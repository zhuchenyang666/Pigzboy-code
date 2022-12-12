//
// Created by 86153 on 2022/11/29.
//
#include "Type.h"
void Create(Table *T)
{
    int number;
    printf("输入无前期必修课程的课程数量：");
    scanf("%d",&number);
    T->noHCourse=number;
    T->totalCourse=T->noHCourse;
    for(int i=0;i<T->noHCourse;i++)
    {
        T->Head[i].link=NULL;
        T->Head[i].prior=NULL;
        printf("请输入课程名：");
        scanf("\n%s",T->Head[i].dataName);
    }
}