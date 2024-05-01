// SELECTION SORT
#include<stdio.h>
int main()
{
    int arr[7]={7,6,5,4,3,2,1};
    int n=7;
    for(int i=0 ; i<n ; i++)
    {
        int min=arr[i];
        int index=i;
        for(int j=i ; j<n ; j++)
        {
            if(arr[j]<min)
            {
                min=arr[j];
                index=j;
            }
        }
        int temp=arr[index];
        arr[index]=arr[i];
        arr[i]=temp;
    }

    printf("Sorted array is : ");
    for(int i=0 ; i<n ; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}