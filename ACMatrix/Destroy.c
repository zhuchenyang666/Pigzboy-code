//
// Created by 86153 on 2022/11/27.
//
//���ٸ�������֮��Ĺ�ϵ��
#include "Type.h"
void Destroy(ACMatrix *M)
{
    for(int i=0;i<M->topNumber;i++)
    {
        for(int j=0;j<=i;j++)
        {
            //������Ȩֵ����ʼֵ100
            M->Matrix[i][j]=M->Matrix[j][i]=100;
        }
    }
    //��������0
    M->arcNumber=0;
}