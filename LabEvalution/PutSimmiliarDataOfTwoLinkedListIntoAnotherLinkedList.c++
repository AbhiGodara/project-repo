#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node*next;
}*head,*first,*prior=new node;
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
void check(struct node *p, struct node *ptr)
{
    struct node *last;
    prior->next=NULL;
    prior=last;
    while(p!=NULL)
    {
        while(ptr!=NULL)
        {
            if(p->data==ptr->data)
             {
            //  prior=(struct node *)malloc(sizeof(struct node));
                last->data=p->data;
                last->next=NULL;
                last=last->next;
            }
            ptr=ptr->next;
        }
        p=p->next;
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
    check(head,first);
    printf("New list is : \n");
    display(prior);
 // display(first);   
 freememory(head);
 freememory(first);
 freememory(prior);

    return 0;
}