//
// Created by 86153 on 2022/11/24.
//
#include"Type.h"

typedef struct string string;

int Create(ACMatrix *M)
{
    printf("�����붥�������");
    scanf("%d",&(M->topNumber));
    printf("������ߵĸ�����");
    scanf("%d",&(M->arcNumber));
    //�����������ı��
    printf("�����붥����ţ�");
    for(int i=0;i<M->topNumber;i++)
    {
        scanf("\n%c",M->topName+i);
    }
    //�õ�����Ĵ�С������Ƚ����������Ԫ��ȫ����ֵ�����
    for(int i=0;i<M->topNumber;i++)
    {
        for(int j=0;j<M->topNumber;j++)
        {
            M->Matrix[i][j]=100;
        }
    }
    //���߸�ֵ�����������бߣ���ֵ��Ӧ��weight
    int weight;
    int m,n;
    //char name1[20];
    //char name2[20];
    char name1,name2;
    for(int k=0;k<M->arcNumber;k++)
    {

        //fflush(stdin);
        printf("�������������㣺");
        scanf("\n%c%c",&name1,&name2);
        printf("������һ��Ȩֵ��");
        scanf("%d",&weight);
        //�ֱ�������������±�
        m= FindLow(M,name1);
        n= FindLow(M,name2);
        M->Matrix[m][n]=M->Matrix[n][m]=weight;
    }
    return 1;
}
