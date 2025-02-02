#include <bits/stdc++.h>
#define LL long long
#define FORL(i, n) for(int i = 0; i < n; ++i)
#define vi vector<int>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

//Functions


int main(){
  IOS;
  int a[4];
   for(int i=0;i<4;i++)cin>>a[i];
   sort(a,a+4);
   cout<<a[3]-a[0]<<' '<<a[3]-a[1]<<' '<<a[3]-a[2];

  return 0;
}
