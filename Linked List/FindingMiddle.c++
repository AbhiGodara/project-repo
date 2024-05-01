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
    struct node *last=
    head=new node;
    cout<<"Enter data of linked list : ";
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
void middle(struct node *p, int size)
{
//     for(int i=0 ; i<size/2 ; i++)
//     {
//         p=p->next;
//     }
//     cout<<"Data of middle node is : "<<p->data;
    struct node *q=p;
    while(q!=NULL)
    {
        q=q->next;
        if(q!=NULL)
        {
            q=q->next;
        }
        if(q!=NULL)
        {
            p=p->next;
        }
    }
    cout<<"Data of middle node is : "<<p->data;
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
    int size;
    cout<<"enter size of linked list : ";
    cin>>size;
    create(head,size);
    display(head);
    middle(head,size);
    freememory(head);
    return 0;
}