#include<iostream>
using namespace std;
struct node 
{
    int data;
    struct node *prev;
    struct node *next;
}*head;
void create(int n)
{
    struct node *last=new node;
    head=new node;
    cout<<"Enter data : ";
    cin>>head->data;
    head->prev=NULL;
    head->next=NULL;
    last=head;
    for(int i=1 ; i<n ; i++)
    {
        struct node *temp=new node;
        cin>>temp->data;
        temp->next=NULL;
        temp->prev=last;
        last->next=temp;
        last=temp;
    }
    last->next=head;
}
void display(struct node *p)
{
    do
    {
        cout<<p->data<<endl;
        p=p->next;
    }while(p!=head);
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
    int n;
    cout<<"Enter size of linked list : ";
    cin>>n;
    create(n);
    display(head);
    freememory(head);
    return 0;
}