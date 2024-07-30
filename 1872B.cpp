#include <bits/stdc++.h>
using namespace std;
//Functions
int solve (){
    int n;
    cin>>n;
    int a[n];
    int d,s;
    for(int i =0;i<n;i++){
        cin>>d>>s;
        if(s%2==0){
        a[i]=(d+((s/2)-1));
        }
        else{
            a[i]= d+((s-1)/2);
        }
    }
    sort(a,a+n);
    return a[0];
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int ans =  solve();
        cout<<ans<<endl;
    }

return 0;
}