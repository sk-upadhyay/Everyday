#include <bits/stdc++.h>

using namespace std;

int main(){
    string s1;
    cin>>s1;
    int len= (s1.length()+1)/2;
    int a[len]={0};
    int j =0;
    for(int i=0;i<s1.length();i++){
        if(i%2==0){
                a[j]=s1[i] - '0';
                 j++;

        }
    }
    sort(a,a+len);
    for(int i =0;i<len-1;i++){
        cout<<a[i]<<"+";
    }
    cout<<a[len-1];

return 0;
}
