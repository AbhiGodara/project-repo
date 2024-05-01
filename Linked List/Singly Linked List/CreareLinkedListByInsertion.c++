#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
struct node 
{
    int data;
    struct node *next;
}*head=new node;
void insert(struct node *p)
{
    cout<<"Enter elements of linked list : ";
    struct node *temp=new node;
    cin>>temp->data;
    temp->next=NULL;
    p->next=temp;
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
int main ()
{
    display(head);
    freememory(head);
    return 0;
}