#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node*next;
}*head;
void create(int arr[], int n)
{
    struct node *last;
    head=new node;
    head->data=arr[0];
    head->next=NULL;
    last=head;
    for(int i=1 ; i<n ; i++)
    {
        struct node *t=new node;
        t->data=arr[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
int max(struct node *p)
{
    int x=p->data;
    while(p!=NULL)
    {
        if(p->data>x)
        {
            x=p->data;
        }
        p=p->next;
    }
    return x;
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
    int arr[]={95,65,12,32,04,785,42,12,321,52};
    create(arr,10);
    cout<<"Maximum element is : "<<max(head)<<endl;
    freememory(head);
    return 0;
}