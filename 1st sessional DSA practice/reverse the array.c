#include<stdio.h>
int main()
{
    int arr[7]={1,2,3,4,5,6,7};
    int n=7,i=0,j=n-1;
    while(j>=i)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    printf("Sorted array : ");
    for(int k=0 ; k<n ; k++)
    {
        printf("%d ",arr[k]);
    }
    return 0;
}