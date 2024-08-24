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
        while(t--)
        {
            int n;
            cin>>n;
            int a[n]={0};
            FORL(i,n){
                cin>>a[i];
            }
            sort(a,a+n);
            int iterated=0,count=1;
            FORL(i,n){
                if(a[i]==a[i-1]){
                    count++;
                }
                else{
                    count=1;
                }
                if(count>iterated){
                    iterated=count;
                }
            }
            
            cout<<n-iterated<<endl;
            
        }
        
        

return 0;
}