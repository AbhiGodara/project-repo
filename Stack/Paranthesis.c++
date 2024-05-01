#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stack
{
    int size;
    char *s;
    int top;
};
void push(struct stack *st, char x)
{
    st->top++;
    st->s[st->top]=x;
}
int pop(struct stack *st, char x)
{
    if(x==')') x='(';
    if(x==']') x='[';
    if(x=='}') x='{';
    // (int)st->top-(int)x==-1 || (int)st->top-(int)x==-2|| (int)st->top-(int)x==-2
    // (st->s[st->top]=='(' && x==')') || (st->s[st->top]=='[' && x==']') || (st->s[st->top]=='{' && x=='}')
    if(st->s[st->top]==x)
    {
        st->top--;
        return 1;
    }
    st->top--;
    return 0;
}
int paranthesis(char *exp)
{
    struct stack st;
    st.size=strlen(exp);
    st.top=-1;
    st.s=(char*)malloc(st.size*(sizeof(char)));
    for(int i=0 ; exp[i]!='\0' ; i++)
    {
        if(exp[i]=='(' || exp[i]=='[' || exp[i]=='{')
        {
            push(&st,exp[i]);
        }
        else if(exp[i]==')' || exp[i]==']' || exp[i]=='}')
        {
            if(st.top==-1)
            {
                return 0;
            }
            int k=pop(&st,exp[i]);
            if(k==0)
            {
                return 0;
            }
        }
    }
    if(st.top!=-1)
    {
        return 0;
    }
    return 1;
}
int main()
{
    char exp[15]={'{','[','(','a','+','b',')','*','(','c','+','d',')',']','}'};
    int x=paranthesis(exp);
    if(x==1)
    {
        printf("balanced paranthesis");
    }
    else
    {
        printf("unbalanced paranthesis");
    }
    return 0;
}
// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// struct stack
// {
//     int size;
//     char *s;
//     int top;
// };
// void push(struct stack *st, char x)
// {
//     st->top++;
//     st->s[st->top]=x;
// }
// void pop(struct stack *st)
// {
//     st->top--;
// }
// int paranthesis(char *exp)
// {
//     struct stack st;
//     st.size=strlen(exp);
//     st.top=-1;
//     st.s=(char*)malloc(st.size*(sizeof(char)));
//     for(int i=0 ; exp[i]!='\0' ; i++)
//     {
//         if(exp[i]=='(')
//         {
//             push(&st,'(');
//         }
//         else if(exp[i]==')')
//         {
//             if(st.top==-1)
//             {
//                 return 0;
//             }
//             pop(&st);
//         }
//     }
//     if(st.top!=-1)
//     {
//         return 0;
//     }
//     return 1;
// }
// int main()
// {
//     char exp[15]={'{','[','(','a','+','b',')','*','(','c','+','d',')',']','}'};
//     int x=paranthesis(exp);
//     if(x==1)
//     {
//         printf("balanced paranthesis");
//     }
//     else
//     {
//         printf("unbalanced paranthesis");
//     }
//     return 0;
// }