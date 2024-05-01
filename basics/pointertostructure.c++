#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct rectangle
{
    int length;
    int breadth;
};
int main()
{
    struct rectangle *p;
    p=new rectangle;  //in c++
    // p=(struct rectangle*)malloc(sizeof(struct rectangle));   in c
    p->length=10;
    p->breadth=27;
    printf("%d\n",p->length);
    return 0;
}