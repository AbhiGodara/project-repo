#include <stdio.h>
#include <stdlib.h>

struct Node 
{
    int data;
    struct Node *next;
};

struct Stack 
{
    struct Node *top;
};

void initialize(struct Stack *stack) 
{
    stack->top = NULL;
}

int IsEmpty(struct Stack *stack) 
{
    return stack->top == NULL;
}

void push(struct Stack *stack) 
{
    int x;
    printf("Enter data : ");
    scanf("%d",&x);
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL)
    {
        printf("Memory allocation failed. Cannot push %d.\n", x);
        return;
    }
    newNode->data = x;
    newNode->next = stack->top;
    stack->top = newNode;
}

int pop(struct Stack *stack) 
{
    if (IsEmpty(stack)) 
    {
        printf("Stack underflow. Cannot pop.\n");
        return -1;
    }
    int n;
    printf("Enter no. of times pop : ");
    scanf("%d",&n);
    for(int i=0 ; i<n ; i++)
    {
        struct Node *temp = stack->top;
        stack->top = temp->next;
        free(temp);
    }
}

int peek(struct Stack *stack) 
{
    if (IsEmpty(stack)) 
    {
        printf("Stack is empty. Cannot peek.\n");
        return -1; 
    }

    return stack->top->data;
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

    printf("Stack: ");
    struct Node *current = stack.top;
    while (current != NULL) 
    {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");

    pop(&stack);

    printf("Stack after pop: ");
    current = stack.top;
    while (current != NULL) 
    {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");

    printf("Peek: %d\n", peek(&stack));

    return 0;
}
