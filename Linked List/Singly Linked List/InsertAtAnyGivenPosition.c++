#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
}*head;
void create(int n)
{
    struct node *last;
    head=new node;
    cout<<"Enter elements of linked list : ";
    cin>>head->data;
    head->next=NULL;
    last=head;
    for(int i=1 ; i<n ; i++)
    {
        struct node *t=new node;
        cin>>t->data;
        last->next=t;
        t->next=NULL;
        last=t;
    }
}
void InsertAtPosition(struct node *ptr)
{
    int x,p;
    cout<<"Enter position and data which u want to insert : ";
    scanf("%d %d",&p,&x);
    for(int i=1 ; i<p-1 ; i++)
    {
        ptr=ptr->next;
    }
    struct node *temp=new node;
    temp->data=x;
    temp->next=ptr->next;
    ptr->next=temp;
}
void display(struct node *p)
{
    while(p!=NULL)
    {
        cout<<p->data<<endl;
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
    int n;
    cout<<"Enter size of linked list : ";
    cin>>n;
    create(n);
    display(head);
    InsertAtPosition(head);
    cout<<"Linked list after insertion : "<<endl;
    display(head);
    freememory(head);
    return 0;
}