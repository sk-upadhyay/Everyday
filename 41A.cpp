#include <bits/stdc++.h>

using namespace std;

int main(){
    string s,t;
    cin>>s>>t;
    int n = t.length();
    reverse(t.begin(),t.end());
    if(s==t){
        cout<<"YES"<<endl;

    }
    else{
        cout<<"NO"<<endl;


    }
return 0;
}
