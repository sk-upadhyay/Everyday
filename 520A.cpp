#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int a[26]={0};
    bool flag = false;
    for(int i =0;i<n;i++){
        a[tolower(s[i]) - 'a']=1;
    }
    for(int i=0;i<26;i++){
        if(a[i]==0){
            cout<<"NO";
            flag = true;
            break;
        }
    }
    if(!flag){
        cout<<"YES"<<endl;
    }
return 0;
}
