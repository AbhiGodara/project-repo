#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
}*head,*first;
void create1(int n1)
{
    int i;
    struct node *last;
    head=(struct node *)malloc(sizeof(struct node));
    printf("Enter elements of first linked list : ");
    scanf("%d",&head->data);
    head->next=NULL;
    last=head;
    for(i=1 ; i<n1 ; i++)
    {
        struct node *t;
        t=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&t->data);
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
void create2(int n2)
{
    int i;
    struct node *last;
    first=(struct node *)malloc(sizeof(struct node));
    printf("Enter elements of second linked list : ");
    scanf("%d",&first->data);
    first->next=NULL;
    last=first;
    for(i=1 ; i<n2 ; i++)
    {
        struct node *t;
        t=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&t->data);
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
void insert(struct node *p, struct node *ptr)
{
    while(p!=NULL)
    {
        struct node *t;
        t=(struct node *)malloc(sizeof(struct node));
        t->data=ptr->data;
        ptr->data=0;
        t->next=p->next;
        p->next=t;
        ptr=ptr->next;
        p=(p->next)->next;
    }
}
void freememory(struct node *p)
{
    struct node *temp;
    while(p!=NULL)
    {
        temp=p;
        p=p->next;
        free(temp);
    }
}
void display(struct node *p)
{
    while(p!=NULL)
    {
        printf("%d\n",p->data);
        p=p->next;
    }
}
int main()
{
    int n1,n2;
    printf("Enter size of first linked list : ");
    scanf("%d",&n1);
    create1(n1);
    printf("Enter size of second linked list : ");
    scanf("%d",&n2);
    create2(n2);
    printf("\nFirst linked list is : \n");
    display(head);
    printf("\nSecond linked list is : \n");
    display(first);
    insert(head,first);
    printf("New first list is : \n");
    display(head);
 // display(first);   
 freememory(head);
 freememory(first);
    return 0;
}