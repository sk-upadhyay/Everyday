#include <bits/stdc++.h>

using namespace std;

int main(){

int t;
cin>>t;
int count=0;
while(t--){
    int p,q;
    cin>>p>>q;
    if(q>=p+2){
        count++;
    }
}
cout<<count<<endl;
return 0;
}
