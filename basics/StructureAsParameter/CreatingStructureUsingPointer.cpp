#include<iostream>
#include<stdio.h>
using namespace std;

struct rectangle
{
    int length,breadth;
};
struct rectangle *rect()
{
    struct rectangle *p;
    // p=new rectangle;
    p->length=96;
    p->breadth=56;
    return p;
}
int main()
{
    struct rectangle *ptr;
    ptr=rect();
    cout<<"length "<<ptr->length<<endl<<"breadth "<<ptr->breadth<<endl;
    return 0;
}