//
// Created by 86153 on 2022/11/29.
//
#include "Type.h"
void Out(Table *T)
{
    for(int i=0;i<T->noHCourse;i++)
    {
        LNode *p=T->Head+i;
        printf("%s �γ̵�ѧϰ˳��Ϊ��",p->dataName);
        while (p!=NULL)
        {
            printf("%s ",p->dataName);
            p=p->link;
        }
        printf("\n");
    }
    printf("һ��Ҫѧϰ�Ŀγ���%d��",T->totalCourse);
    //C��ֻ�����������ָ��洢�ַ���
    //�޸������е�ÿһ���ַ��ķ������ǵ���strcpy()
    //�Ƚ����������е��ַ����Ƿ���Ⱦ��ǵ���strcmp()
    //strcpy(T->Head[0].dataName,"����");

}