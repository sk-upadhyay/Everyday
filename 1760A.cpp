#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		int a,b,c;
		cin>>a>>b>>c;
		priority_queue<int> x;
		x.push(a);
		x.push(b);
		x.push(c);
		x.pop();
		cout<<x.top()<<endl;;

	}
	return 0;
}