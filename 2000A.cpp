#include <bits\stdc++.h>

using namespace std;
void solve(){
 		int n;
		cin>>n;
		if(n>101 && n<=109){
			cout<<"YES"<<endl;
			return;
		}
		else if(n<=1099 && n>=1010){
			cout<<"YES"<<endl;
			return;
		}
		else if(n%1000<=1099 && n%1000>=1010){
			cout<<"YES"<<endl;
			return;
		}
		else{
			cout<<"NO"<<endl;
			return;
		}
		
		
 }

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return  0;
}