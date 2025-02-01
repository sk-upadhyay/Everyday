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
  	int n;
  	cin>>n;
  	char a[n][4];
  	int temp;
	vi p;
  	FORL(i,n){
  		FORL(j,4){
  			cin>>a[i][j];
  			if(a[i][j]=='#'){
  				temp=j+1;
				p.push_back(temp);
  			}
  		} 	
  	}
	for(int i=n-1;i>=0;i--){
		cout<<p[i]<<" ";
	}
  	cout<<endl;
  }
  
  return 0;
}