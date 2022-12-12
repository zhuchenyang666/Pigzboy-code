//
// Created by 86153 on 2022/11/29.
//
#include "Type.h"
int  Find(Table *T,char name[20])
{
    for(int i=0;i<T->noHCourse;i++)
    {
        //再次强调，里面是地址！！！
        if(strcmp(name,T->Head[i].dataName)==0)
        {
            return i;
        }
    }
    printf("%s课程不存在！",name);
}