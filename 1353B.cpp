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
        vi p;
        vi q;
        FORL(i,n){
            int a;
            cin>>a;
            p.push_back(a);
        }
        sort(p.begin(),p.end());
        FORL(i,n){
            int a;
            cin>>a;
            q.push_back(a);
        }
        sort(q.rbegin(),q.rend());
        int sum=0;
        FORL(i,n){
            if(i<k){
                sum+= max(p[i],q[i]);
            }
            else{
                sum+=p[i];
            }
        }
        cout<<sum<<endl;
    }

return 0;
}