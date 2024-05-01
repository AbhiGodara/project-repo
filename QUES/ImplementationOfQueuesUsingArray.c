#include<stdio.h>
#include<stdlib.h>
struct queue
{
    int size;
    int front;
    int rear;
    int *arr;
}q;
void enqueue()
{
    if(q.rear==q.size-1)
    {
        printf("Queue Overflow !!\n");
    }
    else if(q.front==-1 && q.rear==-1)
    {
        q.front=q.rear=0;
        printf("Enter data : ");
        scanf("%d",&q.arr[q.rear]);
    }
    else
    {
        q.rear++;
        printf("Enter data : ");
        scanf("%d",&q.arr[q.rear]);
    }
}
void dequeue()
{
    if(q.front=-1 && q.rear==-1)
    {
        printf("Queue underflow\n");
    }
    else if(q.front==q.rear)
    {
        printf("Dequeued element is : %d\n",q.arr[q.front]);
        q.front=q.rear=-1;   
    }
    else
    {
        printf("Dequeued element is : %d\n",q.arr[q.front]);
        q.front++;
    }
}
void display()
{
    if(q.front==-1)
    {
        printf("Underflow!!\n");
    }
    else
    {
        printf("QUEUE : ");
        int x=q.front;
        int y=q.rear;
        for(int i=x ; i<=y ; i++)
        {
            printf("%d ",q.arr[i]);
        }
    }
    printf("\n");
}
int main()
{
    printf("Enter size of queue : ");
    scanf("%d",&q.size);
    q.front=q.rear=-1;
    q.arr=(int *)malloc(q.size*sizeof(int));
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    display();
    dequeue();
    return 0;
}



// #include<stdio.h>
// #include<stdlib.h>
// void enqueue(int queue[], int *front, int *rear, int size)
// {
//     if(*rear==size-1)
//     {
//         printf("Queue overflow\n");
//     }
//     else if(*front==-1 && *rear==-1)
//     {
//         *front=*rear=0;
//         printf("Enter data : ");
//         scanf("%d",&queue[*rear]);
//     }
//     else
//     {
//         (*rear)++;
//         printf("Enter data : ");
//         scanf("%d",&queue[*rear]);
//     }
// }
// void display(int queue[], int *front, int *rear)
// {
//     for(int i=*front ; i<=*rear ; i++)
//     {
//         printf("%d ",queue[i]);
//     }
// }
// int main()
// {
//     int size;
//     printf("Enter size of queue : ");
//     scanf("%d",&size);
//     int queue[size];
//     int front=-1,rear=-1;
//     enqueue(queue,&front,&rear,size);
//     enqueue(queue,&front,&rear,size);
//     enqueue(queue,&front,&rear,size);
//     enqueue(queue,&front,&rear,size);
//     display(queue,&front,&rear);
//     return 0;
// }





// #include<stdio.h>
// #include<stdlib.h>
// struct queue
// {
//     int size;
//     int front;
//     int rear;
//     int *arr;
// };
// void enqueue(struct queue *q)
// {
//     if(q->rear==q->size-1)
//     {
//         printf("Queue is full !!\n");
//     }
//     else
//     {
//         q->rear++;
//         printf("Enter data : ");
//         scanf("%d",&q->arr[q->rear]);
//     }
// }
// void dequeue(struct queue *q)
// {
//     int x;
//     if(q->rear==q->front)
//     {
//         printf("Queue is Empty !!");
//     }
//     else
//     {
//         q->front++;
//         printf("dequeued element is : %d\n",q->arr[q->front]);
//     }
// }
// void display(struct queue *q)
// {
//     int x=q->front+1;
//     int y=q->rear;
//     // printf("x=%d",x);
//     // printf("y=%d\n",y);
//     while(x!=y+1)
//     {
//         // printf("x=%d",x);
//         // printf("y=%d",y);
//         printf("%d ",q->arr[x]);
//         x++;
//     }
//     printf("\n");
// }
// int main()
// {
//     struct queue q;
//     printf("Enter size of queue : ");
//     scanf("%d",&q.size);
//     q.front=q.rear=-1;
//     q.arr=(int *)malloc(q.size*sizeof(int));
//     enqueue(&q);
//     enqueue(&q);
//     enqueue(&q);
//     enqueue(&q);
//     enqueue(&q);
//     enqueue(&q);
//     printf("Queue after enqueue : ");
//     display(&q);
//     dequeue(&q);
//     printf("Queue after dequeue : ");
//     display(&q);
//     return 0;
// }