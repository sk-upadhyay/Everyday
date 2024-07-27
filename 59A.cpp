#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    int uppercount=0;
     int lowercount=0;
    for(int i =0;i<s.length();i++){
        if((int)s[i]<97){
            uppercount++;
        }
        else {
            lowercount++;
        }
    }
    if(lowercount>uppercount || uppercount==lowercount){
        for(int i =0;i<s.length();i++){
        s[i] = tolower(s[i]);
        }
    }
    else if(uppercount>lowercount ){
            for(int i =0;i<s.length();i++){
        s[i] = toupper(s[i]);
        }

    }
    cout<<s<<endl;



return 0;
}
