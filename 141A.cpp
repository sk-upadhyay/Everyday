#include <bits/stdc++.h>
using namespace std;

vector<int> countWord(string s){
    vector<int> a (26,0);
    for(int i=0;i<=s.length();i++){
        a[s[i]-'A']++;
    }
    return a;
}


int main(){
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    vector<int> a(26,0), b(26,0), c(26,0),d(26,0);
    a = countWord(s1);
    b = countWord(s2);
    c = countWord(s3);
    for(int i=0;i<26;i++){
        d[i]= a[i]+b[i];
    }
    if(d==c){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

return 0;
}