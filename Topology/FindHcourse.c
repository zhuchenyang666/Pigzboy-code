//
// Created by 86153 on 2022/11/29.
//
#include "Type.h"
int  Find(Table *T,char name[20])
{
    for(int i=0;i<T->noHCourse;i++)
    {
        //�ٴ�ǿ���������ǵ�ַ������
        if(strcmp(name,T->Head[i].dataName)==0)
        {
            return i;
        }
    }
    printf("%s�γ̲����ڣ�",name);
}