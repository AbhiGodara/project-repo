#include<stdio.h>
#include<stdlib.h>

struct node
{
    struct node *lchild;
    int data;
    struct node *rchild;
}*root=NULL;

struct Queue
{
    int size;
    int front;
    int rear;
    struct node **arr;
}*q;

void create()
{
    q->size=50;
    q->front=q->rear=0;
    q->arr=(struct node **)malloc(q->size*sizeof(struct node *));
}

void enqueue(struct node *x)
{
    if((q->rear+1)%q->size==q->front)
    {
        printf("Queue if full !!\n");
    }
    else
    {
        q->arr[q->rear]=x;
        q->rear=(q->rear+1)%q->size;
    }
}

struct node *dequeue()
{
    struct node *x=NULL;
    if(q->front==q->rear)
    {
        printf("Queue is Empty \n");
    }
    else
    {
        x=q->arr[q->front];
        q->front=(q->front+1)%q->size;
    }
    return x;
}

int isEmpty(struct Queue Q)
{
    return Q.front==Q.rear;
}

void TreeCreate()
{
    struct node *p,*t;
    int x;
    create();

    printf("Enter root value : ");
    scanf("%d",&x);
    root=(struct node *)malloc(sizeof(struct node));
    root->data=x;
    root->lchild=root->rchild=NULL;
    enqueue(root);

    while(!isEmpty(*q))
    {
        p=dequeue();
        printf("Enter left child of %d : ",p->data);
        scanf("%d",&x);
        if(x!=-1)
        {
            t=(struct node *)malloc(sizeof(struct node));
            t->data=x;
            t->lchild=t->rchild=NULL;
            p->lchild=t;
            enqueue(t);
        }
        printf("Enter right child of %d : ",p->data);
        scanf("%d",&x);
        if(x!=-1)
        {
            t=(struct node *)malloc(sizeof(struct node));
            t->data=x;
            t->lchild=t->rchild=NULL;
            p->rchild=t;
            enqueue(t);
        }
    }
}

void preorder(struct node *p)
{
    if(p)
    {
        printf("%d ",p->data);
        preorder(p->lchild);
        preorder(p->rchild);
    }
}

void Inorder(struct node *p)
{
    if(p)
    {
        Inorder(p->lchild);
        printf("%d ",p->data);
        Inorder(p->rchild);
    }
}

void postorder(struct node *p)
{
    if(p)
    {
        postorder(p->lchild);
        postorder(p->rchild);
        printf("%d ",p->data);
    }
}

int main()
{
    q=(struct Queue *)malloc(sizeof(struct node));
    TreeCreate();
    printf("\nPreorder : ");
    preorder(root);
    printf("\npostorder : ");
    postorder(root);
    printf("\nInorder : ");
    Inorder(root);
    return 0;
}