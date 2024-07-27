#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string s,t,r;
	    cin>>s>>t;
	    for(int i=0;i<5;i++)
	    {
	        if(s[i]==t[i])
	        {
	            r+='g';
	        }
	        else
	        {
	            r+='b';
	        }
	    }
	    cout<<r<<endl;

	}
	return 0;
}
