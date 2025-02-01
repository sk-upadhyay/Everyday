#include <bits/stdc++.h>
#define LL long long
#define FORL(i, n) for(int i = 0; i < n; ++i)
#define vi vector<int>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

//Functions


int main(){
  IOS;
  LL n;
  cin>>n;
  int a[n];
  LL cm=0,count=0,cz=0;
  FORL(i,n){
  	cin>>a[i];
  	if(a[i]<0){
  		cm++;
  		count =count+abs(-1-a[i]);
  	}
  	else if(a[i]==0){
  		cz++;
  		count++;
  	}
  	else{
  		count=count+(a[i]-1);
  	}

  }
  	if(cm%2!=0 && cz==0){
  		cout<<count+2<<endl;
  	}
  	else{
  		cout<<count<<endl;
  	}
  return 0;
}
