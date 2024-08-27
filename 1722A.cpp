#include <bits/stdc++.h>
#define LL long long
#define FORL(i, n) for(int i = 0; i < n; ++i)
#define vi vector<int>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

//Functions


int main(){
    IOS;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        bool flag = false;
        int array[5]={0};
        if(n>5 || n<5){
            flag = true;
        }
        else{
            FORL(i,n){
                if(s[i]=='T'){
                    array[0]=1;
                }
                else if(s[i]=='i'){
                    array[1]=1;
                }
                else if(s[i]=='m'){
                    array[2]=1;
                }
                else if(s[i]=='u'){
                    array[3]=1;
                }
                else if(s[i]=='r'){
                    array[4]=1;
                }
            }
        }
        FORL(i,n){
            if(array[i]==0){
                flag=true;
            }
        }
        if(!flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

return 0;
}