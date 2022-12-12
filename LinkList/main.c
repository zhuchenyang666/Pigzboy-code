#include "Type.h"
void Menu()
{
    printf("0.退出\n");
    printf("1.插入\n");
    printf("2.删除\n");
    printf("3.逆置\n");
    printf("4.查看\n");
    printf("5.批量删除\n");
    printf("6.小置前\n");
}
void InitList(LinkList *L)
{
    //别忘记要先生成一个结点
    L->head=(LNode *) malloc(sizeof (LNode));
    L->head->next=NULL;
    L->length=0;
}
void InsertData(LinkList *L)
{
    //头插入法
    int input=1;
    LNode *p=L->head;
    while (input)
    {
        LNode *q = (LNode *) malloc(sizeof(LNode));
        if (q == NULL)
        {
            printf("分配失败！");
        }
        printf("依次输入以下信息:年龄:");
        scanf("%d", &q->age);
        q->next = p->next;
        p->next = q;
        L->length++;
        printf("继续插入<0.退出 1.继续>");
        scanf("%d", &input);
    }
}
void Out(LinkList *L)
{
    LNode *p=L->head->next;
    printf("表信息为：");
    while (p!=NULL)
    {
        printf("%d ",p->age);
        p=p->next;
    }
    printf("\n表中有%d条记录\n",L->length);
}
//链表的倒置
void Convert(LinkList *L)
{
    if(L->length==1)
    {
        printf("仅有一个元素无需逆置\n");
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
    printf("逆置成功！");
}
void Delete(LinkList *L)
{
    int age;
    printf("输入要删除的年龄信息；");
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
        printf("需要删除的信息不存在！\n");
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
        printf("选择操作:");
        scanf("%d",&input);
        switch (input)
        {
            case 0:
                printf("退出！");
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
                printf("输入一个范围:");
                scanf("%d%d",&a,&b);
                BetweenDelete(&L,a,b);
                break;
            case 6:
                FindMinimal(&L);
                break;
            default:
                printf("输入有误，重新进行");
                break;
        }
    }
    return 0;
}
