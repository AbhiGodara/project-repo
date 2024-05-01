#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
}*head;
void create(struct node *p, int size)
{
    struct node *last;
    head=new node;
    cout<<"Enter data of linked list : ";
    cin>>head->data;
    head->next=NULL;
    last=head;
    for(int i=1 ; i<size ; i++)
    {
        struct node *temp=new node;
        cin>>temp->data;
        last->next=temp;
        last=temp;
    }
    last->next=head;
}
void insert(struct node *p, int size)
{
    int pos;
    struct node *temp=new node;
    cout<<"Enter position : ";
    cin>>pos;
    cout<<"Enter data : ";
    if(pos==0)
    {
        cin>>temp->data;
        temp->next=head;
        while(p->next!=head)
        {
            p=p->next;
        }
        p->next=temp;
        head=temp;
    }
    else if(pos==size+1)
    {
        while(p->next!=head)
        {
            p=p->next;
        }
        cin>>temp->data;
        p->next=temp;
        temp->next=head;
    }
    else if(0<pos<size+1)
    {
        for(int i=1 ; i<pos-1 ; i++)
        {
            p=p->next;
        }
        cin>>temp->data;
        temp->next=p->next;
        p->next=temp;
    }
    else
    {
        cout<<"ERROR FOUND"<<endl<<"you have entered wrong position ";
    }
}
void display(struct node *p)
{
    struct node *q=p;
    do
    {
        cout<<p->data<<endl;
        p=p->next;   
    }while(p!=q);
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
    int size;
    cout<<"enter size of linked list : ";
    cin>>size;
    create(head,size);
    cout<<"Circular linked list is : "<<endl;
    display(head);
    insert(head,size);
    cout<<"List after insertion is : "<<endl;
    display(head);
    freememory(head);
    return 0;
}