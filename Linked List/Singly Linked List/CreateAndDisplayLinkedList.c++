#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
}*head;
void create(int arr[],int n)
{
    struct node *last;
    head=(struct node*)malloc(sizeof(struct node));
    head->data=arr[0];
    head->next=NULL;
    last=head;
    for(int i=1 ; i<n ; i++)
    {
        struct node *t=(struct node*)malloc(sizeof(struct node));
        t->data=arr[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
void display(struct node* ptr)
{
    while(ptr!=0)
    {
        cout<<ptr->data<<endl;
        ptr=ptr->next;
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
    int arr[]={9,5,6,3,1,2,8,7};
    create(arr,8);
    display(head);
    freememory(head);
    return 0;
}