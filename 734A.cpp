#include <bits/stdc++.h>

using namespace std;

int main (){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int A=0;
    int D =0;
    for(int i=0;i<s.length();i++){
            if(s[i]=='A'){
                A++;
            }
            else{
                D++;
            }
    }
    if(A>D){
        cout<<"Anton"<<endl;
    }
    else if(D>A){
        cout<<"Danik"<<endl;
    }
    else{
        cout<<"Friendship"<<endl;
    }
return 0;
}
