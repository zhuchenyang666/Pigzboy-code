#include "Type.h"
void Menu()
{
    printf("0.�˳�\n");
    printf("1.����\n");
    printf("2.ɾ��\n");
    printf("3.����\n");
    printf("4.�鿴\n");
    printf("5.����ɾ��\n");
    printf("6.С��ǰ\n");
}
void InitList(LinkList *L)
{
    //������Ҫ������һ�����
    L->head=(LNode *) malloc(sizeof (LNode));
    L->head->next=NULL;
    L->length=0;
}
void InsertData(LinkList *L)
{
    //ͷ���뷨
    int input=1;
    LNode *p=L->head;
    while (input)
    {
        LNode *q = (LNode *) malloc(sizeof(LNode));
        if (q == NULL)
        {
            printf("����ʧ�ܣ�");
        }
        printf("��������������Ϣ:����:");
        scanf("%d", &q->age);
        q->next = p->next;
        p->next = q;
        L->length++;
        printf("��������<0.�˳� 1.����>");
        scanf("%d", &input);
    }
}
void Out(LinkList *L)
{
    LNode *p=L->head->next;
    printf("����ϢΪ��");
    while (p!=NULL)
    {
        printf("%d ",p->age);
        p=p->next;
    }
    printf("\n������%d����¼\n",L->length);
}
//����ĵ���
void Convert(LinkList *L)
{
    if(L->length==1)
    {
        printf("����һ��Ԫ����������\n");
        return;
    }
    LNode *q,*p,*m;
    p=L->head->next->next;
    q=L->head->next;
    q->next=NULL;
    while (p!=NULL)
    {
        m=q;
        q=p;
        p=p->next;
        q->next=m;
    }
    L->head->next=q;
    printf("���óɹ���");
}
void Delete(LinkList *L)
{
    int age;
    printf("����Ҫɾ����������Ϣ��");
    scanf("%d",&age);
    LNode *p=L->head->next;
    LNode *q=L->head;
    while (p && p->age!=age )
    {
        q=p;
        p=p->next;
    }
    if(p==NULL)
    {
        printf("��Ҫɾ������Ϣ�����ڣ�\n");
        return;
    }
    else
    {
        q->next=p->next;
        free(p);
        L->length--;
    }
}
int main()
{
    LinkList L;
    InitList(&L);
    int input=1;
    int a,b;
    Menu();
    while (input)
    {
        printf("ѡ�����:");
        scanf("%d",&input);
        switch (input)
        {
            case 0:
                printf("�˳���");
                break;
            case 1:
                InsertData(&L);
                break;
            case 2:
                Delete(&L);
                break;
            case 3:
                Convert(&L);
                break;
            case 4:
                Out(&L);
                break;
            case 5:
                printf("����һ����Χ:");
                scanf("%d%d",&a,&b);
                BetweenDelete(&L,a,b);
                break;
            case 6:
                FindMinimal(&L);
                break;
            default:
                printf("�����������½���");
                break;
        }
    }
    return 0;
}
