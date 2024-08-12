#include <bits\stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        bool flag=false;
        int a = sqrt(x);
        for(int i=0;pow(3,i)<=x;i++){
            if(pow(3,i)==x && a*a==x){
                cout<<"Happy"<<endl;
                flag=true;
                break;
            }
        }
        if(!flag){
            cout<<"Unhappy"<<endl;
        }

    }
    return 0;
}