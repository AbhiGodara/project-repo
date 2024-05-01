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
struct node*insert(struct node*ptr,int p)
{
    struct node* newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    for(int i=1 ; i<p-1 ; i++)
    {
        ptr=ptr->next;
    }
    ptr->next=(ptr->next)->next;
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
    
    int p;
    printf("\nEnter position : ");
    scanf("%d",&p);
    insert(head,p);
    printf("\nNew output is : ");
    traverse(head);
    return 0;
}