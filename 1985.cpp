#include <bits/stdc++.h>
#define LL long long
#define FORL(i, n) for(int i = 0; i < n; ++i)
#define vi vector<int>
using namespace std;

//Functions


int main(){
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        char temp = a[0];
        a[0] = b[0];
        b[0]= temp;
        cout<<a<<" "<<b<<endl;
    }
return 0;
}