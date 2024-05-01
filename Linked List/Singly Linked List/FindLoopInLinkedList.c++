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
void loop(struct node *head)
{
    struct node *q=head,*p=head;
    do
    {
        if(q->next==p) 
        {
            printf("Starting point is %p \n",q);
            printf("Ending point is %p \n",p);
            break;
        }
        p=p->next;
        q=q->next->next;
    } while (p!=NULL && q!=NULL);
    // if(p==q)  cout<<"There is loop present in linked list "<<endl;
    // else      cout<<"There is no loop present in linked list "<<endl;
}
// void display(struct node *p)
// {
//     while(p!=NULL)
//     {
//         cout<<p->data<<endl;
//         p=p->next;   
//     }
// }
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
    struct node *t1=head,*t2=head;
    // for(int i=0 ; i<size-1 ; i++)  t1=t1->next;
    // for(int i=0 ; i<size-3 ; i++)  t2=t2->next;
    t1=t1->next->next;
    t2=t2->next->next->next->next;
    t2->next=t1;
    struct node *x=head;
    for(int i=0 ; i<size ; i++)
    {
        printf("%p\n",x);
        x=x->next;
    }
    loop(head);
    freememory(head);
    return 0;
}