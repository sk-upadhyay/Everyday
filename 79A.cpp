#include <bits/stdc++.h>

using namespace std;

int main(){
    int c, h;
    cin>>c>>h;
    if(c*100 >220 ){
        if(h*10 == 220){
           cout<<"Hanako"<<endl;
        }
        else if(h*10<220){
            cout<<"Ciel"<<endl;
        }
    }
    else if(c*100<220){
             if(h*10 == 220){
           cout<<"Hanako"<<endl;
        }
        else if(h*10>220){
            cout<<"Ciel"<<endl;
        }

    }



return 0;
}
