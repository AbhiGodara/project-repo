#include<iostream>
#include<stdio.h>
using namespace std;
struct rectangle
{
    int length,breadth;
};
void rect(struct rectangle r)
{
    r.length++;
    r.breadth++;
    cout<<"length "<<r.length<<endl<<"breadth "<<r.breadth<<endl;
}
int main()
{
    struct rectangle r={8,9};
    rect(r);
    cout<<"length "<<r.length<<endl<<"breadth "<<r.breadth<<endl;
    return 0;
}