#include <bits/stdc++.h>
using namespace std;
//Functions


int main(){
    int a[5]={100,20,10,5,1};
    int n;
    cin>>n;
    int count =0;
   for(int i=0;i<5 && n>0;i++){
    if(n>=a[i]){
        if(n%a[i]>=0){
            count += (n/a[i]);
            n = n%a[i];
        }
    }
   }
   cout<<count<<endl;

return 0;
}