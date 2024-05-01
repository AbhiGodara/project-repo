#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a=10;
    int &r=a;
    cout<<a<<endl<<r<<endl;
    r++;
    cout<<a<<endl<<r<<endl;
    int b=24;
    r=b;
    cout<<a<<endl<<r<<endl;
    return 0;
}