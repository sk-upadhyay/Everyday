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
  	int l,r,a;
  	cin>>l>>r>>a;
  	if(l/a==r/a){
      cout<<(r/a)+(r%a)<<endl;
    }
    else{
      cout<<max(r/a + r%a ,r/a-1+a-1)<<endl;
    }
  }
  return 0;
}