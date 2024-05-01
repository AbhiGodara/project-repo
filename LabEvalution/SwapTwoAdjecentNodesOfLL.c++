#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node*next;
}*head=new node;
void create(int n)
{
    struct node *last;
    // head=new node;
    cout<<"Enter data in linked list : ";
    cin>>head->data;
    head->next=NULL;
    last=head;
    for(int i=1 ; i<n ; i++)
    {
        struct node *t=new node;
        cin>>t->data;
        t->next=NULL;
        last->next=t;
        last=t;
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
void display(struct node *p)
{
    while(p!=NULL)
    {
        cout<<p->data<<endl;
        p=p->next;
    }
}
int swap(struct node *p,int n)
{
    struct node *temp=new node;
    temp=p;
    for(int i=0 ; i<n ; i++)
    {
        (p->next)->next=p;
        p->next=(p->next)->next;
    }
}
int main()
{
    int n;
    cout<<"Enter no. of nodes : ";
    cin>>n;
    create(n);
    display(head);
    swap(head,n);
    display(head);
    freememory(head);
    return 0;
}