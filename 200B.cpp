#include <bits/stdc++.h>

using namespace std;

int main (){
    int n;
    cin>>n;
    float a=0;
    float x;
    for(int i=0;i<n;i++){
        cin>>x;
        a+=(x/100);
    }
    cout<<((float) a)/n*100<<endl;
return 0;
}
