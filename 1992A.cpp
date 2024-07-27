#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    int a,b,c;
    cin>>a>>b>>c;
    int count=5;
    while(count){
        int x = min(a,min(b,c));
            if(a == x){
                a++;
                count--;
            }
            else if(b==x){
                b++;
                count--;
            }
            else if(c==x){
                c++;
                count--;
            }
    }
    cout<<a*b*c<<endl;
    }

return 0;
}
