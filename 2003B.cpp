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
	FORL(i,n){
		int a ;
		cin>>a;
		p.push_back(a);
	}
	sort(p.begin(),p.end());
	cout<<p[n/2]<<endl;
}


int main(){
  IOS;
  int t;
  cin>>t;
  while(t--)
  {
  	solve();
  }

  return 0;
}