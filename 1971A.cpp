#include<bits/stdc++.h>

using namespace std;


int main(){
    int n;
    cin>>n;
    for(int i =0;i<n;i++){
        int n1,n2;
        cin>>n1>>n2;

        if(n1<n2){
            cout<<n1<<" "<<n2<<endl;
        }
        else{
            cout<<n2<<" "<<n1<<endl;
        }
    }

return 0;
}
