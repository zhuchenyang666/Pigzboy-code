//
// Created by 86153 on 2022/11/27.
//
#include "Type.h"
void choice(Table *T)
{
    int input=1;
    char name;
    int visit[T->topNumber];

    while (input)
    {
        printf("请选择你要进行的操作：");
        case0:scanf("%d",&input);
        switch (input)
        {
            case -1:
                Menu();
                break;
            case 0:
                printf("退出！");
                break;
            case 1:
                InsertArc(T);
                break;
            case 2:
                Delete(T);
                break;
            case 3:
                Out(T);
                break;
            case 4:
                printf("请输入开始的顶点名字：");
                scanf("\n%c",&name);
                Traverse(T, FindLow(T,name),visit);
                break;
            case 5:
                Calculate(T);
                break;
            default:
                printf("您输入的数字非法,请重新输入：");
                goto case0;
        }
    }
}