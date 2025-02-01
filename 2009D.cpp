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
    int cnt1=0,cnt0=0;
    FORL(i,n){
    int x,y;
    cin>>x>>y;
    if(y==0){
        cnt0++;
    }
    else{
        cnt1++;
    }
    }
    if(cnt0==0 || cnt1==0){
        cout<<0<<endl;
    }
    else{
        cout<<min(cnt0,cnt1)*2<<endl;
    }
}
return 0;
}