//
// Created by 86153 on 2022/11/27.
//
#include "Type.h"
int Calculate(Table *T) {
    char name;
    int input = 1;
    int temp;
    while (input) {
        int outcount = 0, incount = 0;
        ArcNode *p = NULL;
        ArcNode *q = NULL;
        //�������outcount
        printf("������Ҫ����ȵĶ�������:");
        case1:scanf("\n%c", &name);
        //temp�����洢A�ı��
        temp= FindLow(T,name);
        //����Ķ��㲻�ڷ�Χ��
        if(temp<0 || temp >T->topNumber)
        {
            printf("���㲻����,���������룺");
            goto case1;
        }
        p = T->head[temp].firstarc;
        while (p != NULL) {
            outcount++;
            p = p->nextarc;
        }
        //�������incount
        for (int m = 0; m < T->topNumber; m++)
        {
            //����һ��ѭ������ΪA������Ϊ���㣬�϶�����û����ȱ�
            if (m == temp)
                continue;
            //��ÿһ�в�ѯ��A�й�ϵ����ȱ�
            q = T->head[m].firstarc;
            while (q != NULL) {
                //ÿ�������ÿ����ȱ߶�����ͬ
                //�������ƥ�䵽һ���Ͳ���������ѭ����
                if (q->dataNumber == temp) {
                    incount++;
                    continue;
                }
                q = q->nextarc;
            }
            printf("%c�ĳ�����%d,�����%d,�ܶ���%d\n", name, outcount, incount, outcount + incount);
            printf("�����Ƿ���Ҫ������ѯ<0.�� 1.��>");
            scanf_s("%d", &input);
        }
    }
    return OK;
}
