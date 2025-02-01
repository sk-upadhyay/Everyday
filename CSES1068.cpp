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
  while(n!=1){
  	cout<<n<<" ";
  	if(n%2==0){
  		n=n/2;
  	}
  	else {
  		n=(n*3)+1;
  	}

  }
 cout<<n;

  return 0;
}