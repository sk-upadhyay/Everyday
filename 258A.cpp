#include <bits/stdc++.h>
#define LL long long
#define FORL(i, n) for(int i = 0; i < n; ++i)
#define vi vector<int>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define find f;
using namespace std;

//Functions


int main(){
  IOS;
  string s;
  cin>>s;
  int n = s.length();
  bool nz =true;
  	FORL(i,n){
	  	if(s[i]=='0'){
	  		nz=false;
	  		s.erase(s.begin()+i);
	  		break;
		}
	}
	  if(nz){
	  	s.erase(s.begin()+1);
	  }
  	cout<<s<<endl;

  	
  return 0;
}