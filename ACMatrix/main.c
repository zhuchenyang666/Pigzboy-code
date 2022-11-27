#include <stdio.h>
#include "Type.h"
int main() {
    ACMatrix M;
    char name;
    int visit[Need],choice=1;
    Create(&M);
    Menu();
    while (choice)
    {
        printf("请选择您要进行的操作：");
        case0:scanf("%d", &choice);
        switch (choice) {
            case -1:
                Menu();
                break;
            case 0:
                printf("退出成功！\n");
                break;
            case 1:
                Insert(&M);
                break;
            case 2:
                Delete(&M);
                break;
            case 3:
                Out(&M);
                break;
            case 4:
                printf("请输入需要开始的顶点：");
                scanf("\n%c",&name);
                //遍历需要传递邻接矩阵，第一个顶点编号，给这个顶点标记1
                Traverse(&M, FindLow(&M,name),visit);
                printf("\n");
                break;
            case 5:
                //计算某一个顶点的度
                CalculateN(&M);
                break;
            case 6:
                Destroy(&M);
                break;
            case 7:
                Judge( &M);
                break;
            default:
                printf("您输入的数字非法，重新输入：");
                goto case0;
        }
    }



    return 0;
}
