#include<stdio.h>
int main()
{
    int arr[11]={2,9,6,3,5,4,7,8,1,0};
    int n=11;
    int x,m;
    // x->number that we want to insert
    // m->position where we want to insert
    printf("Enter no. and position : ");
    scanf("%d %d",&x,&m);
    for(int i=n ; i>=m ; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[m-1]=x;
    printf("\ninserted array");
    for(int i=0 ; i<n ; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}