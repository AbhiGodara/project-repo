#include<iostream>
#include<stdio.h>
using namespace std;

class rectangle
{
private:
    int length;
    int breadth;
public:
    rectangle()
    {
        length=0;
        breadth=0;
    }
    rectangle(int l, int b)
    {
        length=l;
        breadth=b;
    }
    int area()
    {
        return length*breadth;
    }
    int perameter()
    {
        return 2*(length+breadth);
    }
    // setlength(int l)
    // {
    //     length=l;
    // }
    // setbreadth(int b)
    // {
    //     breadth=b;
    // }
    // getlength()
    // {
    //     return length;
    // }
    // getbreadth()
    // {
    //     return breadth;
    // }
    ~rectangle()
    {
        cout<<"destractor"<<endl;
    }
};
int main()
{
    rectangle r(20,30);
    cout<<"Area is : "<<r.area()<<endl;
    cout<<"Perameter is : "<<r.perameter()<<endl;
    return 0;
}
//the 4 function are there for further use