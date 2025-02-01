#include <bits/stdc++.h>
#define LL long long
#define FORL(i, n) for(int i = 0; i < n; ++i)
#define vi vector<int>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

//Functions

int t,l,r;
int main(){
  IOS;
  cin>>t;
  while(t--){
  	cin>>l>>r;
		if(l%2==0) l++;
		cout<<(r-l+2)/4<<endl;
  }
  return 0;
}