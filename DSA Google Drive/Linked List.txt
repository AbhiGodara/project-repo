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
int main()
{
    int n;
    printf("Enter size of linked list : ");
    scanf("%d",&n);
    create(n);
    struct node *temp=head;
    printf("Linked list is : ");
    for(int i=0 ; i<n ; i++)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    return 0;
}