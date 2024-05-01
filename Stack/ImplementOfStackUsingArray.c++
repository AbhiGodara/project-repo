#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
struct stack
{
    int top;
    int size;
    int *s;
}stack;
void create(struct stack *st)
{
    st->top=-1;
    cout<<"Enter size : ";
    cin>>st->size;
    // st->s=new int[st->size];
    st->s=(int*)malloc((st->size)*sizeof(int));
}
void push(struct stack *st)
{
    int n;
    cout<<"Enter no. of push : ";
    cin>>n;
    for(int i=0 ; i<n ; i++)
    {
        if(st->top==st->size-1)
        {
            printf("Stack overflow!\n");
            break;
        }
        else
        {
            cout<<"Enter Element : ";
            st->top++;
            cin>>st->s[st->top];
        }
    }
}
void pop(struct stack *st)
{
    if(st->top==-1)
    {
        printf("stack underflow!\n");
    }
    else
    {
        printf("poped element is : %d\n",st->s[st->top]);
        st->top--;
    }
}
void print(struct stack *st)
{
    struct stack p=*st;
    while(p.top!=-1)
    {
        printf("%d ",p.s[p.top]);
        p.top--;
    }
    printf("\n");
}
int main()
{
    create(&stack);
    push(&stack);
    printf("Stack after pushing elements : ");
    print(&stack);
    pop(&stack);
    printf("Stack after pop : ");
    print(&stack);
    delete (stack.s);
    return 0;
}
// #include<stdio.h>
// #include<stdlib.h>
// #include<iostream>
// using namespace std;
// struct stack
// {
//     int size;
//     int top;
//     int *s;
// }st;
// void create(struct stack *st)
// {
//     struct stack p=*st;
//     cout<<"Enter size of stack : ";
//     cin>>st->size;
//     st->top=-1;
//     st->s=new int[st->size];
// }
// int Isempty(struct stack st)
// {
//     if(st.top==-1)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }
// int Isfull(struct stack st)
// {
//     if(st.top==st.size-1)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }
// void Push(struct stack *st)
// {
//     if(st->top==st->size-1)
//     {
//         cout<<"Stack overflow !"<<endl;
//     }
//     else
//     {
//         int n;
//         cout<<"Enter no. of push : ";
//         cin>>n;
//         cout<<"Enter data to push : ";
//         for(int i=0 ; i<n ; i++)
//         {
//             st->top++;
//             cin>>st->s[st->top];
//         }
//     }
// }
// int pop(struct stack *st)
// {
//     if(st->top==-1)
//     {
//         cout<<"Stack underflow !"<<endl;
//     }
//     else
//     {
//         int x=st->s[st->top];
//         st->top--;
//         return x;
//     }
// }
// void StackTop(struct stack *st)
// {
//     cout<<endl<<"Top element is : "<<st->s[st->top]<<endl;
// }
// void peek(struct stack *st)
// {
//     int pos;
//     cout<<"Enter position : ";
//     cin>>pos;
//     cout<<"Element is : "<<st->s[st->top-pos+1];
// }
// void print(struct stack *st)
// {
//     for(int i=st->top ; i>=0 ; i--)
//     {
//         printf("%d ",st->s[i]);
//     }
// }
// int main()
// {
//     create(&st);
//     Push(&st);
//     cout<<"Stack is : ";
//     print(&st);
//     cout<<endl<<"Poped element is : "<<pop(&st)<<endl;
//     cout<<"Stack after poping : ";
//     print(&st);
//     StackTop(&st);
//     peek(&st);
//     return 0;
// }