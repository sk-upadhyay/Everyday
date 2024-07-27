#include <bits/stdc++.h>

using namespace std;


int main(){
   string s1;
   cin>>s1;
   string s2;
   cin>>s2;
    string s3(s1.length(),'0');
   for(int i=0;i<s1.length();i++)
    {
        if(s1[i]=='1' && s2[i]=='1')
        {

            s3[i]='0';
        }
        else if(s1[i]=='0' && s2[i]=='0')
        {
            s3[i]='0';
        }
        else
        {
            s3[i]='1';
        }
   }
        cout<<s3<<endl;

return 0;
}
