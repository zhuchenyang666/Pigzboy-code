//
// Created by 86153 on 2022/11/24.
//
#include "Type.h"
void Out(ACMatrix *M)
{
    //��ӡ����������
    printf("������������Ϊ��");
    for(int i=0;i<M->topNumber;i++)
    {
        printf("%c ",M->topName[i]);
    }
    printf("\n");

    //��ӡ�ڽӾ���
    printf("�ڽӾ���Ϊ:\n");
    for(int j=0;j<M->topNumber;j++)
    {
        printf("%c ",M->topName[j]);
    }
    printf("\n");
    //��ʼ��ӡ����
    for(int i=0;i<M->topNumber;i++)
    {
        printf("%c|",M->topName[i]);
        for(int j=0;j<M->topNumber;j++)
        {
            printf("%d ",M->Matrix[i][j]);
        }
        printf("\n");
    }
}