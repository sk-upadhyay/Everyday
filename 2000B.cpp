#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int a[200005]={0};
    int seat;
    cin>>seat;
    a[seat]=1;
    bool visted = false;
    for(int i =1;i<n;i++){
        cin>>seat;
        if(a[seat+1]==0 && a[seat-1]==0){
            visted=true;
        }
        a[seat]=1;
    }
    cout<<(!visted ? "YES" : "NO")<<endl;  
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
