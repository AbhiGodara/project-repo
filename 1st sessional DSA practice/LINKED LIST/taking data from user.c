#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
};
void triverse(struct node*ptr)
{
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
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
    triverse(head);
    return 0;
}