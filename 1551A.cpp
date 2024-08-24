#include <bits/stdc++.h>
#define LL long long
#define FORL(i, n) for(int i = 0; i < n; ++i)
#define vi vector<int>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

//Functions


int main(){
	IOS;
	int t;
	cin>>t;
	while(t--){
		long int n;
		cin>>n;
		int a =n/3 ,b=n/3;
		if((a+2*b)==n){
			cout<<a<<" "<<b<<endl;
		}
		else if(a+1+b*2==n) {
			cout<<a+1<<" "<<b<<endl;
		}
		else if(a+(b+1)*2==n){
			cout<<a<<" "<<b+1<<endl;
		}
	}

return 0;
}