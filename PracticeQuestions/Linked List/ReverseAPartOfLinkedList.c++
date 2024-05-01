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
void ReversePart(struct node *p)
{
    int k;
    cout<<"Enter value of k : ";
    cin>>k;
    struct node *ptr=head,*last,*q=NULL,*r=NULL;
    int x=1;
    while(ptr!=NULL)
    {
        last=q;
        for(int i=x ; i<k ; i++)
        {
            // if(ptr==NULL)
            // {
            //     break;
            // }
            ptr=ptr->next;
            r=q;
            q=p;
            p=p->next;
            q->next=r;
            x=0;
        }
        last->next=p;
        if(x==1)
        {
            last=head=q;
        }
        else
        {
            last=q;
        }
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
    ReversePart(head);
    cout<<"List after reverse a part of it : "<<endl;
    display(head);
    freememory(head);
    return 0;
}