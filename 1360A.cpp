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
		int a,b;
		cin>>a>>b;
		int x = min(a,b);
		int z = max(a,b);
		int y = x*2;
		if(y>=z){
			cout<<y*y<<endl;
		}
		else{
			cout<<z*z<<endl;
		}
		
		
	}

return 0;
}