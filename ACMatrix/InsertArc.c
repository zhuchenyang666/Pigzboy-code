//
// Created by 86153 on 2022/11/26.
//
#include "Type.h"
void Insert(ACMatrix *M)
{
    int input;
    char name1,name2;
    int i,j;
    int choice;
    int weight;
    printf("������ȷ��Ҫ��������������Ĺ�ϵ��<0.�� 1.��>");
    scanf("\n%d",&input);
    while (input)
    {
        printf("�������������㣺");
        scanf("\n%c%c",&name1,&name2);
        i= FindLow(M,name1);
        j= FindLow(M,name2);
        if(i<0 || i>M->topNumber || j<0 || j>M->topNumber || i==j)
        {
            printf("������Ķ���������һ�������ڻ��߷Ƿ���\n");
            goto case1;
        }
        if(M->Matrix[i][j]!=100 || M->Matrix[j][i] !=100)
        {
            printf("����������֮���Ѿ��й�ϵ�ˣ���������Ҫ�޸�����֮���Ȩֵ��\n");
            printf("<0.�� 1.��>");
            scanf("%d",&choice);
            if(choice==1)
            {
                M->arcNumber--;
                goto case2;
            }
            else
            {
                goto case1;
            }
        }
        //����Ķ���Ϸ�
        case2:printf("������һ��Ȩֵ��");
        scanf("%d",&weight);
        M->Matrix[i][j]=M->Matrix[j][i]=weight;
        M->arcNumber++;
        //�ж��Ƿ���Ҫ������ӱ�֮��Ĺ�ϵ
        case1:printf("�Ƿ���Ҫ����������������Ĺ�ϵ��<0.�˳� 1.����>");
        scanf("%d",&input);
    }

}