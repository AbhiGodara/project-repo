#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

struct abhi
{
    int height;
    char name[10];
};
int main()
{
    int *p1;
    char *p2;
    float *p3;
    struct abhi *p4;
    cout<<sizeof(p1)<<endl;
    cout<<sizeof(p2)<<endl;
    cout<<sizeof(p3)<<endl;
    cout<<sizeof(p4)<<endl;
    printf("hii i'm Abhishek");
    printf("guys this change is on local");
    return 0;
}

