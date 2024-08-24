#include <bits/stdc++.h>
#include <string>
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
            string s;
            cin>>s;
            int n = s.length();
            if(s.length()%2==0){
                if(s.substr(0,(n/2))==s.substr(n/2)){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
            else{
                cout<<"NO"<<endl;
            }


        }

return 0;
}