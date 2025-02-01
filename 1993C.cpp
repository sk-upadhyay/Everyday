#include <bits/stdc++.h>
#define LL long long
#define FORL(i, n) for(int i = 0; i < n; ++i)
#define vi vector<int>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

//Functions
void solve(){
	int n,m,k;
cin>>n>>m>>k;
for(int i=n;i>m;i--)cout<<i<<" ";
for(int i=1;i<=m;i++)cout<<i<<" ";
}

int main(){
  IOS;
  int t;
  cin>>t;
  while(t--){
  	solve();
  	cout<<endl;
  }

  return 0;
}
