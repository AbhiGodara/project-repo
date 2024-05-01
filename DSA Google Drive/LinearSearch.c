#include<stdio.h>
int linearsearch(int arr[], int n)
{
    int x;
    printf("Enter no. which u want to search : ");
    scanf("%d",&x);
    for(int i=0 ; i<n ; i++)
    {
        if(x==arr[i])
        {
            printf("%d present in array ",x);
            return 0;
        }
    }
    printf("%d not present in array ",x);
}
int main()
{
    int n;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int arr[n];

    printf("Enter elements of array : \n");
    for(int i=0 ; i<n ; i++)
    {
        printf("arr[%d]:",i);
        scanf("%d",&arr[i]);
    }
    linearsearch(arr,n);
    return 0;
}