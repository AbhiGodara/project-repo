#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
struct node 
{
    int data;
    struct node *next;
}*head;
void create(int size)
{
    struct node *last;
    head=new node;
    cout<<"Enter data : ";
    cin>>head->data;
    head->next=head;
    last=head;
    for(int i=1 ; i<size ; i++)
    {
        struct node *temp=new node;
        cin>>temp->data;
        temp->next=NULL;
        last->next=temp;
        last=temp;
    }
    last->next=head;
}
void delet(struct node *p, int size)
{
    int pos;
    cout<<"Enter position : ";
    cin>>pos;
    if(pos==1)
    {
        do
        {
            p=p->next;
        } while (p->next!=head);
        head=head->next;
        p->next=head;
    }
    else if(pos>1 && pos<=size)
    {
        for(int i=1 ; i<pos-1 ; i++)
        {
            p=p->next;
        }
        p->next=p->next->next;
    }
    // else if (pos==size)
    // {
    //     do
    //     {
    //         p=p->next;
    //     } while (p->next->next!=head);
    //     p->next=head;
    // }
    else if(pos>size || pos<1)
    {
        cout<<"You have entered wrong position "<<endl;
    }
}
void display(struct node *p)
{
    do
    {
        cout<<p->data<<endl;
        p=p->next;
    } while (p!=head);
    
}
void freememory(struct node *p)
{
    struct node *temp;
    do
    {
        temp=p;
        p=p->next;
        free (temp);
    } while (p!=head);
    
}
int main()
{
    int size;
    cout<<"Enter size of linked list : ";
    cin>>size;
    create(size);
    display(head);
    delet(head,size);
    cout<<"List after deletation : "<<endl;
    display(head);
    freememory(head);
    return 0;
}