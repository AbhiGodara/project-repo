#include<stdio.h>
int main()
{
    int arr[15]={1,6,9,3,1,2,4,7,5,4,3,2,9,6,7};
    int n=15;
    int x=0;
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0; j<n ; j++)
        {
            if(arr[i]==arr[j] && i!=j)
            { 
               x++;
            }
        }
        if(x==0)
        {
           printf("%d\n",arr[i]);
        }
        x=0;
    }
    return 0;
}


                                                        OR



 #include<stdio.h>
int main()
{
    int arr[15]={1,9,6,3,5,2,4,7,5,4,3,2,9,6,7};
    int n=15;
    int x=0;
    for(int i=0 ; i<n ; i++)
    {
        x=x^arr[i];
    }
    printf("%d",x);
    return 0;
}                                            