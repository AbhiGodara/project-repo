#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
}*head,*first;
void create1(struct node *p, int size)
{
    struct node *last;
    head=new node;
    cout<<"Enter data of first linked list : ";
    cin>>head->data;
    head->next=NULL;
    last=head;
    for(int i=1 ; i<size ; i++)
    {
        struct node *temp=new node;
        cin>>temp->data;
        temp->next=NULL;
        last->next=temp;
        last=temp;
    }
}
void create2(struct node *p, int size)
{
    struct node *last;
    first=new node;
    cout<<"Enter data of second linked list : ";
    cin>>first->data;
    first->next=NULL;
    last=first;
    for(int i=1 ; i<size ; i++)
    {
        struct node *temp=new node;
        cin>>temp->data;
        temp->next=NULL;
        last->next=temp;
        last=temp;
    }
}
void concatenating(struct node *p, struct node *q)
{
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=q;
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
    int size1,size2;
    cout<<"enter size of first linked list : ";
    cin>>size1;
    create1(head,size1);
    cout<<"enter size of second linked list : ";
    cin>>size2;
    create2(first,size2);
    cout<<"First list is : "<<endl;
    display(head);
    cout<<"Second list is : "<<endl;
    display(first);
    concatenating(head,first);
    cout<<"New linked list is : "<<endl;
    display(head);
    freememory(head);
    freememory(first);
    return 0;
}