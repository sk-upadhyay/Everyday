#include <bits/stdc++.h>
#define LL long long
#define FORL(i, n) for(int i = 0; i < n; i++)
#define vi vector<int>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

//Functions
int solve(int n, int m){
	vi a(m);
	FORL(i, m){
		cin>>a[i];
	}
	sort(a.begin(),a.end());
	int minn = a[n-1] - a[0];
return minn;

}


int main(){
  IOS;
  int n,m;
  cin>>n>>m;
  int ans = solve(n,m);
  cout<<ans<<endl;
  return 0;
}