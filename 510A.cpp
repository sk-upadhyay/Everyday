#include <bits/stdc++.h>
using namespace std;
//Functions
int main(){
    int m,n;
    cin>>m>>n;
   string a[m][n];
   int k=n-1;
   for(int i=0;i<m;i++){
    
    for(int j=0;j<n;j++){
       if(i%2==0){
        a[i][j]="#";
       }
       else{
        a[i][j]=".";
        a[i][k]="#";
       }
       
    }
    if(i%2!=0){
        k= (k==0)?n-1:0;
       }
     
   }
   
   for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
       cout<< a[i][j];
    }
    cout<<endl;
   }

return 0;
}