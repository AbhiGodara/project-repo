#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct node 
{
    int data;
    struct node *prev;
    struct node *next;
}*head;
void create(struct node *p, int size)
{
    struct node *last;
    head=new node;
    cout<<"Enter data : ";
    cin>>head->data;
    head->prev=NULL;
    head->next=NULL;
    last=head;
    for(int i=1 ; i<size ; i++)
    {
        struct node *temp=new node;
        cin>>temp->data;
        temp->next=NULL;
        temp->prev=last;
        last->next=temp;
        last=temp;
    }
}
void insert(struct node *p, int size)
{
    int pos;
    cout<<"Enter position : ";
    cin>>pos;
    struct node *temp=new node;
    if(pos==1)
    {
        cout<<"Enter data : ";
        cin>>temp->data;
        temp->next=head;
        head->prev=temp;
        temp->prev=NULL;
        head=temp;
    }
    else if(pos>1 && pos<=size)
    {
        for(int i=1 ; i<pos-1 ; i++)
        {
            p=p->next;
        }
        cout<<"Enter data : ";
        cin>>temp->data;
        temp->next=p->next;
        p->next->prev=temp;
        temp->prev=p;
        p->next=temp;
    }
    else if (pos==size+1)
    {
        while(p->next!=NULL)
        {
            p=p->next;
        }
        cout<<"Enter data : ";
        cin>>temp->data;
        temp->prev=p;
        p->next=temp;
        temp->next=NULL;
    }
    else
    {
        cout<<"you have entered wrong position : "<<endl;
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
        delete temp;
    }
}
int main()
{
    int size;
    cout<<"Enter size : ";
    cin>>size;
    create(head,size);
    cout<<"Linked list is : "<<endl;
    display(head);
    insert(head,size);
    cout<<"Linked list after insertion is : "<<endl;
    display(head);
    freememory(head);
    return 0;
}