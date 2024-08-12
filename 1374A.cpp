#include <bits\stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int x,y,n;
		cin>>x>>y>>n;
		int a = n%x;
		int b= x-y;
		if(n%x==y){
			cout<<n<<endl;
		}
		
		else if(a>y)
		{
			cout<<n-(a-y)<<endl;
		}
		else if(a<y)
		{
			cout<<n-a-b<<endl;
		}
	}
	return 0;
}