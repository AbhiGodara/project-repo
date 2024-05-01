#include<iostream>
#include<stdio.h>
using namespace std;

class rectangle
{
    private:
    int length;
    int breadth;

    public:
    rectangle(int l, int b)
    {
        length=l;
        breadth=b;
    }
    int area()
    {
        return length*breadth;
    }
    void change(int l, int b)
    {
        length=l;
        breadth=b;
    }
};
int main()
{
    rectangle r(10,9);
    cout<<"Area is : "<<r.area()<<endl;
    r.change(15,10);
    cout<<"New area is : "<<r.area()<<endl;
    return 0;
}