#include <bits/stdc++.h>
using namespace std;

int solve(){
    long long n;
    cin>>n;
    if(n<2){
        return 0;
    }
    else if(n%2==0 && n>2){
        return (n/2)-1;
    }
    else{
        return ((n+1)/2)-1;
    }
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int ans = solve();
        cout<<ans<<endl;
    }
return 0;
}