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
void delet(struct node *p, int size)
{
    int n;
    cout<<"Enter position to delete node : ";
    cin>>n;
    if(n<1 || n>size)
    {
        cout<<"Error found"<<endl<<"position not valid"<<endl;
    }
    else if(n==1)
    {
        head=p->next;
    }
    else
    {
        for(int i=1 ; i<n-1 ; i++)
        {
            p=p->next;
        }
            p->next=(p->next)->next;
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
    delet(head,size);
    cout<<"Linked list after deletation of node : "<<endl;
    display(head);
    freememory(head);
    return 0;
}