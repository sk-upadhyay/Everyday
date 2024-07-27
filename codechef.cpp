#include <iostream>
using namespace std;

class rectangle
{
private :
    int length;// This is called data member
    int breadth;
public:
    rectangle()//member function so this is constructor type
    {          //it may or may not take parameter
        length = breadth = 1;//it is called default constructor as it have already value assigned
    }
    rectangle(int l,int b);//constructor overloading this is defined outside the class using scope resolution operator
    int area();//the above is known as parametrize constructor
    int perimeter();//the area and the perimeter function is facilitator
    int getlength()//this is accessors  function
    {
        return length;
    }
    void setlength(int l)//this is mutator function
    {
        length =l;
    }
    ~rectangle();//destructor is used when there is ant dynamic memory allocation int the constructor

};

rectangle::rectangle(int l,int b)
{
    length =l;
    breadth =b;
}
int rectangle::area()
{
    return length*breadth;
}
int rectangle::perimeter()
{
    return 2*(length+breadth);
}
rectangle::~rectangle()
{
}
int main()
{
    rectangle r(10,5);
    cout<<"AREA "<<r.area()<<endl;
    cout<<"PERIMETER "<<r.perimeter()<<endl;
    r.setlength(20);
    cout<<"NEW LENGHT "<<r.getlength()<<endl;
}
