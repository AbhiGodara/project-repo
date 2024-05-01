#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct node 
{
    int data;
    struct node *next;
}*head;
void create(int n)
{
    struct node *last;
    head=new node;
    cout<<"Enter data in linked list : ";
    cin>>head->data;
    head->next=NULL;
    last =head;
    for(int i=1 ; i<n ; i++)
    {
        struct node *t=new node;
        cin>>t->data;
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
void display(struct node *p, int n)
{
    while(p!=NULL)
    {
        cout<<p->data<<endl;
        p=p->next;
    }
}
void search(struct node *p, int x, int n)
{
    for(int i=0 ; i<n ; i++)
    {
        if(p->data==x)
        {
            printf("Element %d is found at address %p ",x,p);
            break;
        }
        p=p->next;
        if(i==n-1)
        {
            printf("Element %d not found in given linked list",x);
        }
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
    int n,x;
    cout<<"Enter size of linked list  : ";
    cin>>n;
    create(n);
    display(head,n);
    cout<<"Enter element which u want to search : ";
    cin>>x;
    search(head,x,n);
    freememory(head);
    return 0;
}