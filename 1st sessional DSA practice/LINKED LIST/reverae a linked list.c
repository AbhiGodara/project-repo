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
void inverse(struct node*ptr)
{
    for(int i=0 ; i<4 ; i++)
    {
        struct node *p=ptr,*q=ptr;
        for(int j=i ; j<4-i ; j++)
        {
            p=p->next;
        }
        int temp=p->data;
        p->data=q->data;
        q->data=temp;
    }    
}
int main()
{
    struct node *head,*second,*third,*fourth,*fifth;
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));
    fifth=(struct node*)malloc(sizeof(struct node));
    printf("Enter data : ");
    scanf("%d%d%d%d%d",&head->data,&second->data,&third->data,&fourth->data,&fifth->data);
    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    printf("Output is : ");
    traverse(head);
    printf("inverted linked list is : ");
    inverse(head);
    traverse(head);
    return 0;
}