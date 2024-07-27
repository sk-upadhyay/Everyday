#include <iostream>

using namespace std;

int factorial(int x)
{
    long long int fact=1;
    for(int i = 1;i<=x;i++)
    {
        fact=fact*i;
    }
    cout<<fact<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        factorial(x);

    }


}
