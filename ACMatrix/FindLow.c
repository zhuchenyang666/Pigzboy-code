//
// Created by 86153 on 2022/11/24.
//
#include "Type.h"
//���Ҷ�Ӧ�����������е��±�
int FindLow(ACMatrix *M,char name)
{
    for(int i=0;i<M->topNumber;i++)
    {
        if(name==M->topName[i])
        {
            return i;
        }
    }
    printf("���ҵĶ���%c�����ڣ�\n",name);
    return WRONG;
}


