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
void sort(struct node*ptr)
{
    struct node*p=ptr;
    for(int i=0 ; i<5 ; i++)
    {
        ptr=p;
        for(int j=i+1 ; j<5 ; j++)
        {
            if(ptr->data>(ptr->next)->data)
            {
                int temp=ptr->data;
                ptr->data=(ptr->next)->data;
                (ptr->next)->data=temp;
            }
            ptr=ptr->next;
        }
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
    sort(head);
    printf("\nSorted list is : ");
    traverse(head);
}