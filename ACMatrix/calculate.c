//
// Created by 86153 on 2022/11/26.
//
#include "Type.h"
int CalculateN(ACMatrix *M)
{
    //�ܶ������Ǳ���
    //��ĳһ������Ķ�
    char name;
    int temp;
    int input=1;
    while (input) {
        printf("��������Ҫ����ȵĶ��㣺");
        scanf("\n%c", &name);
        temp = FindLow(M, name);
        int count=0;//ͳ�ƶ�
        for (int j = 0; j < M->topNumber; j++) {
            if (M->Matrix[temp][j] != 100) {
                count++;
            }
        }
        printf("%c(%d)�Ķ�Ϊ%d��", name, temp, count);
        printf("�Ƿ���Ҫ������<0.�˳� 1.����>");
        scanf_s("%d",&input);
    }
    return OK;
}
