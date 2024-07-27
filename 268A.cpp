#include <bits/stdc++.h>
using namespace std;

int solve(){
    int n;
    cin>>n;
    int m =2;
    int a[n][m];
    for(int i =0;i<n;i++){
        cin>>a[i][0]>>a[i][1];
    }
    int count =0;
    for( int i =0;i<n-1;i++){
        for(int j =i+1;j<n;j++){
            if(a[i][0]==a[j][1] && a[i][1]==a[j][0]){
                count+=2;
            }
            else if(a[i][0]==a[j][1]){
                count++;
            }
            else if(a[i][1]==a[j][0]){
                count++;
            }
        }
    }
    return count;
}


int main(){
    int ans = solve();
    cout<<ans;
return 0;
}