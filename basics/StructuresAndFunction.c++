#include<iostream>
#include<stdio.h>
using namespace std;
 struct rectangle
 {
    int length;
    int breadth;
 };
 void initialize(struct rectangle *r)
 {
    r->length=10;
    r->breadth=25;
 }
 int area(struct rectangle r)
 {
    return r.length*r.breadth;
 }
 void change(struct rectangle *r)
 {
    r->length=15;
    r->breadth=20;
 }
int main()
{
    struct rectangle r;
    initialize(&r);
    cout<<"Area is "<<area(r)<<endl;
    change(&r);
    cout<<"New Area is "<<area(r)<<endl;
    return 0;
}