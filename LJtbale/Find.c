//
// Created by 86153 on 2022/11/25.
//
#include "Type.h"
int FindLow(Table *T,char name)
{
    for(int i=0;i<T->topNumber;i++)
    {
        if(name==T->head[i].topName)
            return i;
    }
    printf("%c���㲻���ڣ�",name);
    return ERROR;
}