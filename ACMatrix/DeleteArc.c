//
// Created by 86153 on 2022/11/26.
//
#include "Type.h"
void Delete(ACMatrix *M)
{
    char name1,name2;
    int i,j;
    int input=1;
    while (input)
    {
        printf("����������Ҫɾ���ߵ��������㣺");
        scanf("\n%c%c", &name1, &name2);
        i = FindLow(M, name1);
        j = FindLow(M, name2);
        if(M->Matrix[i][j]==100 ||M->Matrix[j][i] ==100)
        {
            //��ʾ������֮�䱾���޹�ϵ������ɾ��
            printf("��������֮��û�й�ϵ��\n");
            goto case1;
        }
        if(i<0 || i>M->topNumber || j<0 || j>M->topNumber)
        {
            printf("������Ķ���������һ�������ڣ�");
            goto case1;
        }
        //����Ķ����ڷ�Χ�ڣ���������֮��ԭ������ϵ
        M->Matrix[i][j] = M->Matrix[j][i] = 100;
        M->arcNumber--;
        case1:printf("�Ƿ���Ҫ��Ҫɾ����<0.�˳� 1.����>");
        scanf("\n%d",&input);
    }

}