#include <bits\stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;

	while(t--){
		int sum =0;
		int n;
		cin>>n;
		while(n>0){
			sum= sum+n%10;
			n=n/10;
		}
		cout<<sum<<endl;
	}	
	return 0;
}