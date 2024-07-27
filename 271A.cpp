#include <bits/stdc++.h>

using namespace std;

int main(){
    int y;
    cin>>y;
int i=y+1;
   while(true){
        string s = to_string(i);
   if(s[0]!= s[1]&& s[0] != s[2] && s[0] != s[3] && s[1] != s[2] && s[1] !=s[3] && s[2] !=s[3]){
    cout<<s<<endl;
    break;
   }
   else{
    i++;
   }
   }
return 0;
}

