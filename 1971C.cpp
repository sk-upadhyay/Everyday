#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n1,n2,n3,n4;
        cin>>n1>>n2>>n3>>n4;
        bool flaga,flagb;
        flaga = flagb =false;
        if((n3<max(n1,n2) && n3>min(n1,n2)) ){
            flaga = true;
        }
        if((n4<max(n1,n2) && n4>min(n1,n2))){
                flagb =true;

        }
        if(flaga && flagb){
            cout<<"NO"<<endl;
        }
        else if(flaga || flagb){
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
return 0;
}
