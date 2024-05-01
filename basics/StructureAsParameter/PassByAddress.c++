#include<iostream>
#include<stdio.h>
using namespace std;

struct rectangle
{
    int length,breadth;
};
void rect(struct rectangle *ptr)
{
    (*ptr).length=5;
    //ptr->length=5;
    cout<<"length "<<ptr->length<<endl<<"breadth "<<ptr->breadth<<endl;
}
int main()
{
    struct rectangle r={9,6};
    cout<<"length "<<r.length<<endl<<"breadth "<<r.breadth<<endl;
    rect(&r);
    cout<<"length "<<r.length<<endl<<"breadth "<<r.breadth<<endl;
    return 0;
}