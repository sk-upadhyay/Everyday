#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,a,b;
    cin>>n>>a;
    int X[a] = {0};

    bool A[n+1] = {false};
    bool notfound = false;
    for( int i=0;i<a;i++){
        cin>>X[i];
        A[X[i]]= true;
        if(X[i]==0){
            break;
        }

    }
    cin>>b;
     int Y[b] ={0};
    for(int i=0;i<b;i++){
        cin>>Y[i];

        A[Y[i]]=true;
    }

    for(int i=1;i<=n;i++){
        if(A[i]== false){
            cout<<"Oh, my keyboard!"<<endl;
            notfound = true;
            break;
        }
    }
    if(!notfound){
        cout<<"I become the guy."<<endl;

    }
return 0;
}
