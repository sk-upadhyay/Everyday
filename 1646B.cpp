#include <bits/stdc++.h>
#define ll long long
using namespace std;
//Functions


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
       int countblue = arr[0];
       int countred=0;
       int j=n-1;
        for(int i=1;i<=n/2 && j>i;i++){
            countblue+= arr[i];
            countred+=arr[j];
            if(countred>countblue){
                cout<<"YES\n";
                break;
            }
            j--;
        }
        if(j==0)
        cout<<"NO\n";
        

    }

return 0;
}