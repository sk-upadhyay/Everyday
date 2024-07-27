#include <iostream>

using namespace std;

void bit(string &str,int n)
{
    int a =0;
    char c = '+';
    char b = '-';
    for(int y=0;y<n;y++)
    {
        for(int i=0; i<3;i+=2)
        {
            if(str[i] == c)
                a++;
            else if(str[i]== b)
                a--;
        }
    }
    cout<<a<<endl;
}

int main()
{
    int n;
    string h;
    cin>>n>>h;
    bit(h,n);
}
