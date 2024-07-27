#include <bits/stdc++.h>

using namespace std;

int main(){
    int a[4];
    cin>>a[0]>>a[1]>>a[2]>>a[3];
    sort(a,a+4);
    int count =0;
    for(int i=0;i<3;i++){
        if(a[i]==a[i+1]){
            count++;
        }
    }
    cout<<count;

return 0;
}
