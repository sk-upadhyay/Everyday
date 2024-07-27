#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
   int a[n-1]={0};
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   int count =1;
   for(int i=0;i<n;i++){
    if(a[i]>a[i+1] || a[i]<a[i+1]){
        count++;
    }
   }
   if(count>1){
    cout<<count-1;
   }
   else{
    cout<<count;
   }
return 0;
}
