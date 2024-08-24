#include <bits/stdc++.h>
#define LL long long
#define FORL(i, n) for(int i = 0; i < n; ++i)
#define vi vector<int>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vi p;
        int MaxNum = INT_MIN;
        FORL(i,n){
            int a;
            cin>>a;
            if(a>MaxNum){
                MaxNum = a;
            }
            p.push_back(a);

        }
       
        int MaxCount = 0;
        FORL(i,n){
            if(MaxNum-p[i]>MaxCount){
                MaxCount=MaxNum-p[i];
            }
        }
        cout<<MaxCount<<endl;
    }

return 0;
}