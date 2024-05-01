#include<iostream>
#include<stdio.h>
using namespace std;
void array(int A[], int n)
{
    for(int i=0 ; i<n ; i++)
    {
        A[i]=A[i]*A[i];
    }
} 
int main()
{
    int arr[]={9,5,4,2,3,1,8};
    int n=sizeof(arr)/sizeof(int);
    cout<<"size of array is "<<n<<endl;
    array(arr,n);
    for(int x:arr)
    cout<<x<<endl;
    for(int x:arr)
    {
        x=x+x;
        cout<<x<<endl;
    }
    return 0;
}