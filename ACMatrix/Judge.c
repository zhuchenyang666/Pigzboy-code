//
// Created by 86153 on 2022/11/26.
//
#include "Type.h"
//�ж����������й�ϵ�й�ϵ���
int Judge(ACMatrix *M)
{
    char name1,name2;
    int i,j;
    printf("�������������㣺");
    scanf("\n%c%c",&name1,&name2);
    i= FindLow(M,name1);
    j= FindLow(M,name2);
    if(i<0 || i>M->topNumber || j<0 || j>M->topNumber)
    {
        return WRONG;
    }
    if(M->Matrix[i][j]==100)
    {
        printf("û��%c��%c�Ĺ�ϵ",name1,name2);
        return WRONG;
    }
    else
        printf("��%c��%c�Ĺ�ϵ��ȨֵΪ%d\n",name1,name2,M->Matrix[i][j]);
    return OK;
}