//
// Created by 86153 on 2022/11/29.
//
#include "Type.h"
void Create(Table *T)
{
    int number;
    printf("������ǰ�ڱ��޿γ̵Ŀγ�������");
    scanf("%d",&number);
    T->noHCourse=number;
    T->totalCourse=T->noHCourse;
    for(int i=0;i<T->noHCourse;i++)
    {
        T->Head[i].link=NULL;
        T->Head[i].prior=NULL;
        printf("������γ�����");
        scanf("\n%s",T->Head[i].dataName);
    }
}