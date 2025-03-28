#include <bits/stdc++.h>
#define LL long long
#define FORL(i, n) for(int i = 0; i < n; ++i)
#define vi vector<int>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

//Functions
string solve(string s){
	string s1 =" ";
	while(s.find("WUB")!=string ::npos){
		s.replace(s.find("WUB"),3,s1);
	}
	return s;
}

int main(){
  IOS;
  string s,ans;
  cin>>s;
  ans= solve(s);
  cout<<ans;

  return 0;
}