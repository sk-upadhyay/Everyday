#include <bits/stdc++.h>
using namespace std;

int main(){


    string s1;
    cin>>s1;
    string s2;
    cin>>s2;
    string s3(s2.length(),' ');
    string s4(s1.length(),' ');
    for(int i =0;i<s2.length();i++){
       s3[i] = tolower(s2[i]);
       s4[i] = tolower(s1[i]);
    }
    if(s4.compare(s3)>0){
        cout<<1<<endl;
    }
    else if(s4.compare(s3)<0){
        cout<<-1<<endl;
    }
    else if(s4.compare(s3)==0){
        cout<<0<<endl;
    }


return 0;
}
