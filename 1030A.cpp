#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    bool hard=false;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(a==1){
            cout<<"Hard"<<endl;
           hard =  true;
           break;
        }

    }
    if(!hard){
        cout<<"Easy"<<endl;
    }
    return 0;
}
