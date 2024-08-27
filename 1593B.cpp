#include <bits/stdc++.h>
#define LL long long
#define FORL(i, n) for(int i = 0; i < n; ++i)
#define vi vector<int>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

//Functions
void solve(){
    string s;
    cin >> s;
    int n = s.size();
    int ans = n;
 
    FORL(i,n) {
        for(int j = i + 1; j < n; j++) {
            int x = (s[i] - '0')*10 + (s[j] -'0');
            if(x % 25 == 0){
            ans = min(ans,(j-i-1)+ (n-1-j));
            }
        }
    }
    cout << ans <<endl;
}

int main(){
IOS;
int t;
cin>>t;
while(t--){
    solve();
}

return 0;
}