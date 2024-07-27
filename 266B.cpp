#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
   for(int i =0;i<t;i++){
    for(int j =0;j<s.length();j++){
        if(s[j]=='B'&& s[j+1]=='G' && i+1<n){
            swap(s[j], s[j+1]);
            j++;
        }
    }
   }

    cout <<s<<endl;
return 0;
}
