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
    freememory(head);
    return 0;
}