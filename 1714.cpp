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
  	int n,h,m;
  	cin>>n>>h>>m;
  	int t= 60*h+m;
  	int t1 = 24*60;
  	FORL(i,n){
   		cin>>h>>m;
  		int t0 = 60*h + m - t;
  		if(t0 <0){
  			t0=+24*60;
  			t1 =min(t0,t1);
  		}
  		
  	}
  	cout<<t1/60<<" "<<t1 % 60;
  }
  cout<<endl;

  return 0;
}