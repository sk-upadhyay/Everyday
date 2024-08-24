#include <bits/stdc++.h>
#define LL long long
#define FORL(i, n) for(int i = 0; i < n; ++i)
#define vi vector<int>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

//Functions
LL arr[100005];
LL a;
signed main(){
    IOS;
    long n;
    cin>>n;
  
    FORL(i,n){
        cin>>a;
        arr[a]=i;
    }
    LL m;
    cin>>m;

    LL x=0,y=0;
    FORL(i,m){
        cin>>a;
        x = x+arr[a]+1;
        y= y+ (n-arr[a]);
    }
    cout<<x<<" "<<y<<endl;
}