#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int arr[3][3]={9,8,7,6,5,4,3,2,1};
    int n=3;
    cout<<"Array is : "<<endl;
    for(int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
            printf("%d ",arr[i][j]);
        }
        cout<<endl;
    }
    for(int k=0 ; k<n ; k++)
    {
        int x=arr[k][0];
        int a=k;
        for(int i=0 ; i<n ; i++)
        {
            if(arr[k][i]<=x)
            {
                x=arr[k][i];
                a=i;
            }
        }
        // cout<<x<<endl;
        int y=0;
        for(int j=0 ; j<n ; j++)
        {
            if(x>=arr[j][a])
            {
                y=1;
            }
            else y=0;
        }    
        if(y==1)
        {
            cout<<"saddle point is "<<x;
            break;
        }
    }
    return 0;
}
