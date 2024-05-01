#include<stdio.h>
void sort(int arr[], int n)
{
    for(int i=0 ; i<n-1 ; i++)
    {
        for(int j=0 ; j<n-i-1 ; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
int search(int arr[], int n)
{
    int x;
    printf("Enter no. which you want to search : ");
    scanf("%d",&x);
    int start=0;
    int end=n;
    while(start<=end)
    {
        int middle=(start+end)/2;
        if(arr[middle]==x)
        {
            printf("%d present in array",x);
            return 0;
        }
        else if (x<arr[middle])
        {
            end=middle-1;
        }
        else if (x>arr[middle])
        {
            start=middle+1;
        }
    }
    printf("%d not present in array",x);
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
    sort(arr,n);
    printf("sorted array is : ");
    for(int i=0 ; i<n ; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    search(arr,n);
    return 0;
}