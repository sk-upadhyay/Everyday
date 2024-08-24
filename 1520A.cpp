#include <bits/stdc++.h>
#define LL long long
#define FORL(i, n) for(int i = 0; i < n; i++)
#define vi vector<int>
using namespace std;

//Functions


int main(){
    int t;
    cin>>t;
    while(t--){
        int a[26]={0};
        int n;
        cin>>n;
        string s;
        cin>>s;
        int flag = 0;
        for(int i = 0; i < n; i++){
                if(a[s[i]-'A']== 1 && s[i]!=s[i-1]){
                    cout<<"NO"<<endl;
                    flag=1;
                    break;
                }
            a[s[i]-'A']=1;
            
        }

        if(flag==0){
            cout<<"YES"<<endl;
        }

    }
    

return 0;
}