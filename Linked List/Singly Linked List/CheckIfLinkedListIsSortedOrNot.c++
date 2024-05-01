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
        temp->next=NULL;
        last->next=temp;
        last=temp;
    }
}
void check(struct node *p, int size)
{
    int x=p->data;
    while(p!=NULL)
    {
        if(p->data<x)
        {
            cout<<"Linked list is not sorted "<<endl;
            return ;
        }
        x=p->data;
        p=p->next;
    }
    cout<<"Linked list is sorted "<<endl;
}
// void check(struct node *p, int size)
// {
//     while(p->next!=NULL)
//     {
//         if(p->data<=(p->next)->data)
//         {
//             p=p->next;
//         }
//         else
//         {
//             cout<<"Linked list is not sorted "<<endl;
//             break;
//         }
//     }
//     if(p->next==0)
//     {
//         cout<<"Linked list is sorted "<<endl;
//     }
// }
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
    check(head,size);
    display(head);
    freememory(head);
    return 0;
}