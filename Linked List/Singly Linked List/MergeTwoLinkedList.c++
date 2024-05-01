#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
}*head=NULL,*first=NULL,*prior=NULL;
void create1(struct node *p, int size1)
{
    struct node  *last;
    head=new node;
    cout<<"Enter data of first linked list : ";
    cin>>head->data;
    head->next=NULL;
    last=head;
    for(int i=1 ; i<size1 ; i++)
    {
        struct node *temp=new node;
        cin>>temp->data;
        temp->next=NULL;
        last->next=temp;
        last=temp;
    }
}
void create2(struct node *p, int size2)
{
    struct node  *last;
    first=new node;
    cout<<"Enter data of second linked list : ";
    cin>>first->data;
    first->next=NULL;
    last=first;
    for(int i=1 ; i<size2 ; i++)
    {
        struct node *temp=new node;
        cin>>temp->data;
        temp->next=NULL;
        last->next=temp;
        last=temp;
    }
}
void merge(struct node *p, struct node *q)
{
    struct node *last=new node;
    prior=new node;
    if(p->data<q->data)
    {
        prior=last=p;
        // prior->next=last;
        p=p->next;
    }
    else
    {
        prior=last=q;
        // prior->next=last;
        q=q->next;
    }
    while(p!=NULL && q!=NULL)
    {
        if(p->data<q->data)
        {
            last->next=p;
            last=p;
            p=p->next;
            // last->next=NULL;
        }
        else
        {
            last->next=q;
            last=q;
            // q=q->next;
            // last->next=NULL;
        }
    }
    if(p!=NULL)
    {
        last->next=p;
    }
    if(q!=NULL)
    {
        last->next=q;
    }
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
        free (temp);
    }
}
int main()
{
    int size1,size2;
    cout<<"Enter size of first linked list : ";
    cin>>size1;
    create1(head,size1);
    cout<<"Enter size of second linked list : ";
    cin>>size2;
    create2(first,size2);
    cout<<"First list is : "<<endl;
    display(head);
    cout<<"Second list is : "<<endl;
    display(first);
    merge(head,first);
    cout<<"Linked list after merge : "<<endl;
    display(prior);
    freememory(head);
    freememory(first);
    freememory(prior);
    return 0;
}