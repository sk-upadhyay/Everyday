#include <bits/stdc++.h>
#define LL long long
#define FORL(i, n) for(int i = 0; i < n; ++i)
#define vi vector<int>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

//Functions

int n,k;
int main(){
  IOS;

  cin>>n>>k;
  int maxf=INT_MIN;
  int fi=0;

  FORL(i,n){
	int f,t;
  	cin>>f>>t;
  	if(t>k){
  		fi=f-(t-k);
  	}
  	else{
  		fi=f;
  	}
  	if(fi>maxf){
  		maxf=fi;
  	}
  }
  cout<<maxf<<endl;

  return 0;
}