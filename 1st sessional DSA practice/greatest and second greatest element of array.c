#include<stdio.h>
int main()
{
    int arr[15]={9,8,6,5,4,7,1,12,45,6,89,65,20,58,56};
    int n=15;
    int x=arr[0];
    for(int i=0 ; i<n ; i++)
    {
        if(arr[i]>x)
        {
            x=arr[i];
        }
    }
    printf("Greatest element of array is : %d\n",x);

    int y=0;
    for(int j=0 ; j<n ; j++)
    {
        if(arr[j]>y && arr[j]<x)
        {
            y=arr[j];
        }
    }
    printf("Second greatest element of the array is : %d\n",y);
    return 0;
}