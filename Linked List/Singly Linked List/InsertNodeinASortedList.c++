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
    cout<<"Enter elements of linked list : ";
    cin>>head->data;
    head->next=NULL;
    last=head;
    for(int i=1 ; i<n ; i++)
    {
        struct node *t=new node;
        cin>>t->data;
        last->next=t;
        t->next=NULL;
        last=t;
    }
}
// void insertinsorted(struct node *p, int x, int n)
// {
//     if(x<p->data)
//     {
//         struct node *temp=new node;
//         temp->data=x;
//         temp->next=p;
//         head=p;
//     }
//     while(p!=NULL)
//     {
//         if(x<(p->next)->data)
//         {
//             struct node *temp=new node;
//             temp->data=x;
//             temp->next=p->next;
//             p->next=temp;
//             break;
//         }
//         p=p->next;
//     }
//     if(x>p->data)
//     {
//         struct node *temp=new node;
//         temp->data=x;
//         p->next=temp;
//         temp=NULL;
//     }
// }
void insertinsorted(struct node *p, int x)
{
    struct node *temp;
    if(x<p->data)
    {
        temp=new node;
        temp->data=x;
        temp->next=p;
        head=temp;
        return ;
    }
    while(p!=NULL)
    {
        if(x<(p->next)->data)
        {
            temp=new node;
            temp->data=x;
            temp->next=p->next;
            p->next=temp;
            return ;
        }
        p=p->next;
        if(p->next==NULL)
        {
            temp=new node;
            temp->data=x;
            temp->next=NULL;
            p->next=temp;
            return ;
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
    int n,x;
    cout<<"Enter size of linked list : ";
    cin>>n;
    create(n);
    display(head);
    cout<<"Enter data which u want to insert : ";
    cin>>x;
    insertinsorted(head,x);
    cout<<"Linked list after insertion : "<<endl;
    display(head);
    freememory(head);
    return 0;
}