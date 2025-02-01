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
    int n,k;
    cin>>n>>k;
    if(k>n){
        cout<<k-n<<endl;
    }
    else{
        cout<<(n+k)%2<<endl;
    }
}

return 0;
}