#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
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
int nodes(struct node *p)
{
    int x=0;
    if(p!=NULL)
    {
        x=nodes(p->next);
        return x+1;
    }
    else return x;
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
    int arr[]={0,1,2,3,4,5,6,7,8,9};
    create(arr,10);
    cout<<nodes(head)<<endl;
    freememory(head);
    return 0;
}