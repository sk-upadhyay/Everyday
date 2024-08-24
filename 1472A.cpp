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
       int countone =0;
       int n;
       cin>>n;
       int a=0,b=0;
       int arr[n];
       FORL(i,n){
        cin>>arr[i];
        if(arr[i]==1){
            a++;
        }
        else{
            b++;
        }
        
        }
        if(a%2==1|| (b%2==1&& a==0)){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }


           
    }

return 0;
}