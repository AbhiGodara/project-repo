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
void display(struct node *p)
{
    struct node *q=head;
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
    freememory(head);
    return 0;
}