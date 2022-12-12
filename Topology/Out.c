//
// Created by 86153 on 2022/11/29.
//
#include "Type.h"
void Out(Table *T)
{
    for(int i=0;i<T->noHCourse;i++)
    {
        LNode *p=T->Head+i;
        printf("%s 课程的学习顺序为：",p->dataName);
        while (p!=NULL)
        {
            printf("%s ",p->dataName);
            p=p->link;
        }
        printf("\n");
    }
    printf("一共要学习的课程有%d门",T->totalCourse);
    //C中只能用数组或者指针存储字符串
    //修改数组中的每一个字符的方法就是调用strcpy()
    //比较两个数组中的字符串是否相等就是调用strcmp()
    //strcpy(T->Head[0].dataName,"张三");

}