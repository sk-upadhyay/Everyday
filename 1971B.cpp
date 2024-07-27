#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i =0;i<n;i++){
        string s;
        cin>>s;
        string s1 = s;
        s1[0] = s[1];
        s1[1] = s[0];
        if(s==s1){
            cout<<"NO
        }
    }

return 0;
}
