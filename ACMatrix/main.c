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
        printf("��ѡ����Ҫ���еĲ�����");
        case0:scanf("%d", &choice);
        switch (choice) {
            case -1:
                Menu();
                break;
            case 0:
                printf("�˳��ɹ���\n");
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
                printf("��������Ҫ��ʼ�Ķ��㣺");
                scanf("\n%c",&name);
                //������Ҫ�����ڽӾ��󣬵�һ�������ţ������������1
                Traverse(&M, FindLow(&M,name),visit);
                printf("\n");
                break;
            case 5:
                //����ĳһ������Ķ�
                CalculateN(&M);
                break;
            case 6:
                Destroy(&M);
                break;
            case 7:
                Judge( &M);
                break;
            default:
                printf("����������ַǷ����������룺");
                goto case0;
        }
    }



    return 0;
}
