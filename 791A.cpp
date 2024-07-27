#include <bits/stdc++.h>

using namespace std;

int main(){
    int l,b;
    cin>>l>>b;
    int i=0;
    for(i=1;i<100;i++){
        if(l>b){
            break;
        }
        else {
            l*=3;
            b*=2;
        }

    }
    cout<<i-1<<endl;
return 0;
}
