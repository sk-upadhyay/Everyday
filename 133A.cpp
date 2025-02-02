#include <bits/stdc++.h>
#define LL long long
#define FORL(i, n) for(int i = 0; i < n; ++i)
#define vi vector<int>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

//Functions


int main(){
  IOS;
  string s;
  cin>>s;
  int n = s.size();
  bool flag = true;
  for(int i=0;i<n;i++){
  	if(s[i]=='H' ||s[i]=='Q'||s[i]=='9'){
  		cout<<"YES"<<endl;
  		flag = true;
  		break;
  	}
  	else{
  		flag = false;
  	}
  }
  if(flag ==false){
  	cout<<"NO"<<endl;
  }

  return 0;
}