#include <bits\stdc++.h>

using namespace std;
const int MOD = 1e9+7;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,r,n;
		cin>>a>>r>>n;
		for(int i=1;i<=n;i++){
			cout<<a<<" ";
			a=(a*r)%MOD;
		}
		cout<<endl;
	}

}