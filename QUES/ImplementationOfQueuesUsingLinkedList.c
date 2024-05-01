#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*front=NULL,*rear=NULL;
void enqueue()
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter data : ");
    scanf("%d",&temp->data);
    temp->next=NULL;
    if(front==NULL && rear==NULL)
    {
        front=rear=temp;
    }
    else
    {
        rear->next=temp;
        rear=temp;
    }
}
void dequeue()
{
    if(front==NULL && rear==NULL)
    {
        printf("QUEUE UNDERFLOW !!\n");
    }
    else
    {
        struct node *temp;
        front=front->next;
        free(temp);
    }
    printf("\n");
}
void display()
{
    struct node *temp=front;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
int main()
{
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    display();
    dequeue();
    display();
    return 0;
}