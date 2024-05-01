#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

struct Stack 
{
    int items[MAX_SIZE];
    int top;
};

void initialize(struct Stack *stack) 
{
    stack->top = -1;
}

int IsEmpty(struct Stack *stack) 
{
    return stack->top == -1;
}

int IsFull(struct Stack *stack) 
{
    return stack->top == MAX_SIZE - 1;
}

void push(struct Stack *stack) 
{
    int x;
    printf("Enter data : ");
    scanf("%d",&x);
    if (IsFull(stack)) 
    {
        printf("Stack overflow. Cannot push %d.\n", x);
        return;
    }
    stack->items[++stack->top] = x;
}

int pop(struct Stack *stack) 
{
    if (IsEmpty(stack)) 
    {
        printf("Stack underflow. Cannot pop.\n");
        return -1; 
    }
    int x;
    printf("Enter pop : ");
    scanf("%d",&x);
    for(int i=0 ; i<x-1 ; i++)
    {
        stack->items[stack->top--];
    }
    return stack->items[stack->top--];
}

int peek(struct Stack *stack) 
{
    if (IsEmpty(stack)) 
    {
        printf("Stack is empty. Cannot peek.\n");
        return -1;
    }
    return stack->items[stack->top];
}

int size(struct Stack *stack) 
{
    return stack->top + 1;
}

int main() 
{
    struct Stack stack;
    initialize(&stack);

    int n;
    printf("Enter no. of times : ");
    scanf("%d",&n);
    for(int i=0 ; i<n ; i++)
    {
        push(&stack);
    }
    printf("Stack : ");
    for (int i = 0; i < size(&stack); ++i) 
    {
        printf("%d ", stack.items[i]);
    }
    printf("\n");
    pop(&stack);
    printf("Stack after pop: ");
    for (int i = 0; i < size(&stack); ++i) 
    {
        printf("%d ", stack.items[i]);
    }
    printf("\n");

    printf("Peek: %d\n", peek(&stack));
    printf("Stack size: %d\n", size(&stack));

    return 0;
}
