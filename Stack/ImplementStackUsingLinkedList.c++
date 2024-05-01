#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
}*top;
void create()
{
    top=NULL;
}
void push()
{
    struct node *p=top;
    int n;
    cout<<"Enter number of push : ";
    cin>>n;
    cout<<"Enter elements : ";
    for(int i=0 ; i<n ; i++)
    {
        struct node *temp=(struct node*)malloc(sizeof(struct node));
        cin>>temp->data;
        temp->next=top;
        top=temp;
        // free (temp);
    }
}
void pop()
{
    struct node *p=top;
    int n=top->data;
    cout<<"poped element is : "<<n<<endl;
    top=top->next;
}
void stacktop()
{
    if(top==NULL)
    {
        cout<<"stack is empty"<<endl;
    }
    else
    {
        cout<<"top element is : "<<top->data<<endl;
    }
}
void peek()
{
    struct node *p=top;
    int pos;
    cout<<"Enter position : ";
    cin>>pos;
    for(int i=1 ; i<pos ; i++)
    {
        p=p->next;
    }
    cout<<"data on "<<pos<<" position is : "<<p->data<<endl;
}
void print()
{
    struct node *temp=top;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void freememory()
{
    struct node *p=top;
    while(p!=NULL)
    {
        free (p);
        p=p->next;
    }
}
int main()
{
    create();
    push();
    cout<<"stack after pushing elements : ";
    print();
    pop();
    cout<<"stack after poping element : ";
    print();
    stacktop();
    peek();
    freememory();
    return 0;
}
// #include<stdio.h>
// #include<stdlib.h>
// #include<iostream>
// using namespace std;
// struct node
// {
//     int data;
//     struct node *next;
// }*top;
// void create()
// {
//     top=NULL;
// }
// // int Isempty(struct stack st)
// // {
// //     if(st.top==-1)
// //     {
// //         return 1;
// //     }
// //     else{
// //         return 0;
// //     }
// // }
// // int Isfull(struct stack st)
// // {
// //     if(st.top==st.size-1)
// //     {
// //         return 1;
// //     }
// //     else
// //     {
// //         return 0;
// //     }
// // }
// void Push(struct node *p)
// {
//     int n;
//     cout<<"Enter no. of push : ";
//     cin>>n;
//     for(int i=0 ; i<n ; i++)
//     {
//         struct node *temp=new node;
//         if(temp==NULL)
//         {
//             cout<<"Stack overflow !"<<endl;
//         }
//         else
//         {
//             cout<<"Enter data : ";
//             cin>>temp->data;
//             temp->next=top;
//             top=temp;
//         }
//     }
// }
// int pop(struct node *p)
// {
//     if(p==NULL)
//     {
//         cout<<"Stack underflow ! ";
//         return -1;
//     }
//     else
//     {
//         struct node *temp;
//         temp=top;
//         int x=top->data;
//         top=top->next;
//         delete temp;
//         return x;
//     }
// }
// void StackTop()
// {
//     if(top==NULL)
//     {
//         cout<<"Stack is empty "<<endl;
//     }
//     else
//     {
//         cout<<endl<<"Top element is : "<<top->data<<endl;
//     }
// }
// void peek(struct node *p)
// {
//     int pos;
//     cout<<"Enter position : ";
//     cin>>pos;
//     for(int i=1 ; i<pos ; i++)
//     {
//         p=p->next;
//         if(p==NULL)
//         {
//             cout<<"You have entered wrong position !";
//             break;
//         }
//     }
//     cout<<"Element is : "<<p->data;
// }
// void print(struct node *p)
// {
//     while(p!=NULL)
//     {
//         printf("%d ",p->data);
//         p=p->next;
//     }
// }
// void freememory()
// {
//     struct node *temp;
//     while(top!=NULL)
//     {
//         temp=top;
//         top=top->next;
//         delete temp;
//     }
// }
// int main()
// {
//     create();
//     Push(top);
//     cout<<"Stack is : ";
//     print(top);
//     cout<<endl<<"Poped element is : "<<pop(top)<<endl;
//     cout<<"Stack after poping : ";
//     print(top);
//     StackTop();
//     peek(top);
//     freememory();
//     return 0;
// }