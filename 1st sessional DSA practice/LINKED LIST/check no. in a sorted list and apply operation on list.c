#include<stdio.h>
int main()
{
    int arr[11]={10,9,8,7,6,5,4,3,2,1};
    int n=11;
    for(int i=0 ; i<n ; i++)
    {
        for(int j=i+1 ; j>0 ; j--)
        {
            if(arr[j]<arr[j-1])
            {
                int temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }
        }
    }
    printf("Sorted array is : ");
    for(int i=0 ; i<n ; i++)
    {
        printf("%d ",arr[i]);
    }
    int x,y;
    printf("\nEnter no. you want to check : ");
    scanf("%d",&x);
    for(int i=0 ; i<n ; i++)
    {
        if(x>=arr[i])
        {
            y=i;
            break;
        }
    }
    for(int i=n ; i>y ; i--)
    {
        arr[i]=arr[i-1];
    }
    printf("\noperated array is : ");
    for(int i=0 ; i<n ; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}