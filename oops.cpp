#include <iostream>
using namespace std;

class rectangle
{
public:
    int length;
    int breadth;
void initialisation(int l, int b)
{
    length = l;
    breadth = b;
}
int area ()
     {
         return length*breadth;
     }
void changel(int l)
     {
         length=l;
     }
};
int main()
{
   rectangle r1;
   int l,b;
   cin>>l>>b;
   r1.initialisation(l,b);
   cout<<r1.length<<" Length "<<endl<<r1.breadth<<" Breadth "<<endl;
    r1.area();
    r1.changel(40);
    cout<<"new length "<<r1.length<<endl;
}
