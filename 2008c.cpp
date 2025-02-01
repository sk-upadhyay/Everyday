#include <bits/stdc++.h>
#define LL long long
#define FORL(i, n) for(int i = 0; i < n; ++i)
#define vi vector<long long>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

//Functions


int main(){
  IOS;
  int t;
  cin>>t;
  while(t--){
  	LL l,r;
  	cin>>l>>r;
  	vi p;
  	LL c=l;
  	int k=1;
  	for(int i =0; c<=r;i++){
  		p.push_back(c);
  		c=c+k;
  		k=k+1;
  	}
  	cout<<p.size()<<endl;
  }
  return 0;
}