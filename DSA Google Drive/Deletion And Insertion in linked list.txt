#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head;
void create(int n)
{
    struct node *p=head,*last;
    head=(struct node *)malloc(sizeof(struct node));
    printf("Enter data of linked list : ");
    scanf("%d",&head->data);
    head->next=NULL;
    last=head;
    for(int i=1 ; i<n ; i++)
    {
        struct node *temp=(struct node *)malloc(sizeof(struct node));
        scanf("%d",&temp->data);
        temp->next=NULL;
        last->next=temp;
        last=temp;
    }
}
void delete(int n)
{
    int x;
    printf("Enter position of node which you want to delete : ");
    scanf("%d",&x);
    struct node *p=head;
    for(int i=1 ; i<x-1 ; i++)
    {
        p=p->next;
    }
    p->next=(p->next)->next;
}
void insert(int n)
{
    struct node *p=head;
    int k,pos;
    printf("Enter position where u want to insert your data : ");
    scanf("%d",&pos);
    printf("Enter data : ");
    for(int i=1 ; i<pos-1 ; i++)
    {
        p=p->next;
    }
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    scanf("%d",&temp->data);
    temp->next=p->next;
    p->next=temp;
}
void display(int n)
{
    struct node *temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
void freememory(int n)
{
    struct node *p=head,*temp;
    while(p!=NULL)
    {
        temp=p;
        p=p->next;
        free(temp);
    }
}
int main()
{
    int n;
    printf("Enter size of linked list : ");
    scanf("%d",&n);
    create(n);
    printf("Linked list before deletion and insertion is : ");
    display(n);
    delete(n);
    printf("Linked list after deletion is : ");
    display(n);
    insert(n);
    printf("Linked list after insertion is : ");
    display(n);
    freememory(n);
    return 0;
}