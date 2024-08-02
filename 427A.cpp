#include <bits/stdc++.h>
using namespace std;
//Functions


int main(){
    int n;
    cin>>n;
    int sum =0;
    int count=0;
    while(n--){
        int a;
        cin>>a;
        if(a>0){
            sum=sum+a;
        }
        else if(a==-1 && sum>0){
            sum=sum+a;
        }
        else if(a==-1 && sum== 0){
            count++;
        }
        
        
    }
    cout <<count<<endl;

return 0;
}