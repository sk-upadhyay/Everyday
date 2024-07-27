#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int t;
	cin>>t;
    while(t--)
    {
        ll n, x;
        cin>>n>>x;
        vector<ll>a(n);
            for(ll i =0;i<n;i++){
                cin>>a[i];
            }
        ll collect =0;


    sort(a.begin(),a.end());
    ll i(0);
            for( i=n-1;i>=0;i--){
                if(a[i]>x){
                    collect+= a[i]-x;
                }
                else if(a[i]<x){
                if(collect<(x-a[i])) break;
                collect-=(x-a[i]);
                }
            }

        cout<<n-i-1<<endl;
    }
	return 0;
}

