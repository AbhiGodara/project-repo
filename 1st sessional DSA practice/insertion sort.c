// INSERTION SORT
#include<stdio.h>
int main()
{
    int arr[7]={9,5,6,-3,2,1,4};
    int n=7;
    for(int i=0 ; i<n ; i++)
    {
        int j=i-1;
        int temp=arr[i];
        while(j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    for(int i=0 ; i<n ; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}