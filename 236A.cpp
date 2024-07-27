#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    int a[26]={0};
    int count=0;
    for(int i=0;i<s.length();i++){
        if((a[s[i] - 'a'])== 0){
            a[s[i]-'a']=1;
            count++;
        }

    }
    if(count%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }
return 0;
}
