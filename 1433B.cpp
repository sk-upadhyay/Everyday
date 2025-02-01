#include <bits/stdc++.h>
#define LL long long
#define FORL(i, n) for(int i = 0; i < n; ++i)
#define vi vector<int>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

//Functions
void solve(){
	int n;
	cin>>n;
	vi p;
	int a;
	int max=0,ans=-1;
	bool flag = true;
	FORL(i,n){
		cin>>a;
		p.push_back(a);
		if(a>max){
			max=a;
		}
	}
	FORL(i,n){
		if(p[i]!=max){
			flag=false;
		}
		else {
			if(i-1>=0 &&p[i-1]<p[i] ){
				ans=i+1;
				break;
			}else if(i+1<n && p[i+1]<p[i]){
				ans=i+1;
				break;
			}
		}

	}
	if(flag){
		cout<<ans<<endl;
	}
	else{
		cout<<ans<<endl;
	}
}

int main(){
  IOS;
  int t;
  cin>>t;
  while(t--){
  	solve();
  }
  return 0;
}