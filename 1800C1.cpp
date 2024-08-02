#include <bits/stdc++.h>
using namespace std;
//Functions


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        priority_queue <int> p;
        long a;
        long long b=0;
        for(int i=0;i<n;i++){
            cin>>a;
            p.push(a);
            if(a==0){
                b+=p.top(),p.pop();
            }
        }
        
        cout<<b<<endl;
    }

return 0;
}