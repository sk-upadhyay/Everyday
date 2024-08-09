#include <bits/stdc++.h>

using namespace std;
int main()
{	
	int n;
	cin>>n;
	int count=0;
	if(n%2==0){
		cout<<n/2<<endl;
		for(int i=2;i<=n;i+=2){
			cout<<'2'<<" ";
		}
	}
	else{
		count=(n-3)/2+1;
		cout<<count<<endl;
		for(int i =2;i<=n-3;i+=2)

		{
			
			cout<<'2'<<" ";
		}
		cout<<'3'<<endl;
	}
	return 0;
}