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
    struct node *last=new node;
    head=new node;
    cout<<"Enter nodes in linked list : ";
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
struct node * InsertAtStart(struct node *p)
{
    int x;
    cout<<"Enter data which u want to insert at start : ";
    cin>>x;
    struct node *temp=new node;
    temp->data=x;
    temp->next=p;
    return temp;
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
    head=InsertAtStart(head);
    display(head);
    freememory(head);
    return 0;
}