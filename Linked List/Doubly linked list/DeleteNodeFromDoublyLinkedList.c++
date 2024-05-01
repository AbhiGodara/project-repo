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
void Delete(struct node *p, int size)
{
    int pos;
    cout<<"Enter position : ";
    cin>>pos;
    if(pos==1)
    {
        head=head->next;
        head->prev=NULL;
        // struct node *temp;
        // temp=head->next;
        // temp->prev=NULL;
        // temp->next=head->next->next;
        // head->next->next->prev=temp;
        // head=temp;
    }
    else if(pos>1 && pos<size)
    {
        for(int i=1 ; i<pos-1 ; i++)
        {
            p=p->next;
        }
        p->next=p->next->next;
        p->next->prev=p;
    }
    else if(pos==size)
    {
        while(p->next->next!=NULL)
        {
            p=p->next;
        }
        p->next=NULL;
    }
    else
    {
        cout<<"You have entered wrong position "<<endl;
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
    Delete(head,size);
    cout<<"Linked list after delete node : "<<endl;
    display(head);
    freememory(head);
    return 0;
}