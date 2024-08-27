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
        string s;
        cin>>s;
        if(s[0]==s[n-1]){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }

return 0;
}