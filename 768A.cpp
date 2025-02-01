#include <bits/stdc++.h>
#define LL long long
#define FORL(i, n) for(int i = 0; i < n; ++i)
#define vi vector<int>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

//Functions


int main(){
  IOS;
  vi p;
  int mn = INT_MAX;
  int mx = INT_MIN;
  int n;
  cin >>n;
  LL count=0;
  FORL(i,n){
  	LL a;
  	cin>>a;
  	p.push_back(a);
  	if(a>mx){
  		mx=a;
  	}
  	if(a<mn){
  		mn=a;
  	}
  }
  FORL(i,n){
  	if(p[i]!=mx && p[i]!=mn){
  		count++;
  	}
  }
  cout<<count<<endl;
  

	return 0;
 
}


