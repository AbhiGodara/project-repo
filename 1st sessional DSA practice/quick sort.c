#include<stdio.h>
int partition(int arr[],int low,int high)
{
    int pivot=arr[low];
    int i=low+1;
    int j=high;
    while(i<=j)
    {
        while(arr[i]<=pivot)
        {
            i++;
        }
        while(arr[j]>pivot)
        {
            j--;
        }
        if(i<j)
        {    int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    int temp=arr[low];
    arr[low]=arr[j];
    arr[j]=temp;
    
    return j;
}
void sort(int arr[],int low,int high)
{
    if(low<high)
    {
        int j=partition(arr,low,high);
        sort(arr,low,j-1);
        sort(arr,j+1,high);
    }
}
int main()
{
    int arr[10]={9,5,6,3,2,1,4,7,8,0};
    int n=10;
    sort(arr,0,9);
    for(int i=0 ; i<n ; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}