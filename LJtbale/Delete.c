//
// Created by 86153 on 2022/11/27.
//
#include "Type.h"
int Delete(Table *T)
{
    int input=1;
    int i,j;
    char name1,name2;
    while (input)
    {
        printf("������������Ҫɾ���Ĺ�ϵ���������㣺");
        scanf("\n%c%c",&name1,&name2);
        i= FindLow(T,name1);
        j= FindLow(T,name2);
        //�ж��Ƿ�Ϊ���ڵĶ���
        if(i<0 || i>T->topNumber || j<0 || j>T->topNumber || i==j)
        {
            printf("����Ķ��㲻���ڣ������ظ�����\n");
            goto case1;
        }
        //�ж��Ƿ�����������й�ϵ
        ArcNode *p=T->head[i].firstarc;
        ArcNode *q=NULL;
        while (p!=NULL)
        {
            if(p->dataNumber==j)
            {
                printf("��%c��%c�Ĺ�ϵ,ɾ���С���\n",name1,name2);
                //�����Ҫɾ���Ľ�����׸����
                if(p==T->head[i].firstarc)
                {
                    T->head[i].firstarc=p->nextarc;
                    free(p);
                    T->arcNumber--;
                    goto case1;
                }
                //���ɾ�����Ƿǵ�һ�����
                else
                {
                    q->nextarc = p->nextarc;
                    free(p);
                    T->arcNumber--;
                    goto case1;
                }
            }
            q=p;
            p=p->nextarc;
        }
        //���涼����������ʾ�����û��A->B�Ĺ�ϵ������ɾ��
        printf("û��%c��%c�Ĺ�ϵ,����ɾ��\n",name1,name2);
        case1:printf("���ʻ���Ҫ����ɾ��������<0.�� 1.��>");
        scanf_s("%d",&input);
    }
    return OK;
}