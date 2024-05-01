#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
};
void traverse(struct node*ptr)
{
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}
struct node*insert(struct node*ptr,int d)
{
    struct node* newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=newnode;
    newnode->data=d;
    newnode->next=NULL;
}
int main()
{
    struct node *head,*second,*third,*fourth;
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));
    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=NULL;
    printf("Enter data : ");
    scanf("%d",&head->data);
    scanf("%d",&second->data);
    scanf("%d",&third->data);
    scanf("%d",&fourth->data);
    printf("Output is : ");
    traverse(head);
    
    int d;
    printf("\nEnter data which you want to insert at last position : ");
    scanf("%d",&d);
    insert(head,d);
    printf("\nNew output is : ");
    traverse(head);
    return 0;
}