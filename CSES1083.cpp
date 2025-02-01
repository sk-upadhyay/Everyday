#include <bits/stdc++.h>
#define LL long long
#define FORL(i, n) for(int i = 0; i < n; ++i)
#define vi vector<int>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

//Functions


int main(){
IOS;
    int n;
    cin>>n;
    int flag =0;
    set<int> s;

    for(int i =0;i<n-1;i++){
        int a;
        cin>>a;
        s.insert(a);
    }
    auto j = s.begin();
    for( j = s.begin();j!=s.end();j++){
        if((*j+1) !=(*j)){
            flag=1;
            break;
        }
    }
    if(flag==1){
        cout<<*j+1<<endl;
    }
    
return 0;
}