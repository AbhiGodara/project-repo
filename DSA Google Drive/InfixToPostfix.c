#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
    char data;
    struct node *next;  
}*top=NULL;
struct stack
{
    char data;
    struct stack *next;
}*stack=NULL;
void push(char x)
{
    struct node *st=(struct node *)malloc(sizeof(struct node));
    st->data=x;
    st->next=top;
    top=st;
}
int pop()
{
    if(top==NULL)
    {
        printf("stack underflow!");
        return 0;
    }
    else
    {
        struct node *temp=top;
        char x=top->data;
        top=top->next;
        free (temp);
        return x;
    }    
}
int pre(char x)
{
    if(x=='+' || x=='-')
    {
        return 1;
    }
    else if(x=='*' || x=='/')
    {
        return 2;
    }
    else
    {
        return 0;
    }
}
int operands(char x)
{
    if(x=='+' || x=='-' || x=='*' || x=='/')
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
char * convert(char *infix)
{
    char *postfix=(char*)malloc((strlen(infix)+2)*sizeof(char));
    int i=0,j=0;
    while(infix[i]!='\0')
    {
        if(operands(infix[i]))
        {
            postfix[j++]=infix[i++];
        }
        else
        {
            if(top==NULL || pre(infix[i])>pre(top->data))
            {
                push(infix[i++]);
            }
            else
            {
                postfix[j++]=pop();
            }
        }
    }
    while(top!=NULL)
    {
        postfix[j++]=pop();
    }
    postfix[j]='\0';
    return postfix;
}
int paranthesis(char *exp)
{
    for(int i=0 ; exp[i]!='\0' ; i++)
    {
        if(exp[i]=='(')
        {
            struct stack *st=(struct stack *)malloc(sizeof(struct stack));
            st->data=exp[i];
            st->next=stack;
            stack=st;
        }
        else if(exp[i]==')')
        {
            if(stack==NULL)
            {
                return 0;
            }
            stack=stack->next;
        }
    }
    if(stack==NULL)     return 1;
    else                return 0;
}
int main()
{
    char exp[7]={'a','+','b','*','c','+','d',};
    int x=paranthesis(exp);
    if(x==1)
    {
        printf("balanced paranthesis\n");
    }
    else
    {
        printf("unbalanced paranthesis\n");
    }
    char *postfix=convert(exp);
    printf("%s ",postfix);
    return 0;
}