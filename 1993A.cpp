#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s;
		cin>>s;
		int a=0,b=0,c=0,d=0;
		for(int i =0;i<(4*n);i++){
			if(s[i]=='A' && a<n){
				a++;
			}
			else if(s[i]=='B' && b<n){
				b++;
			}
			else if(s[i]=='C' && c<n){
				c++;
			}
			else if(s[i]=='D' && d<n){
				d++;
			}
		}
		cout<<a+b+c+d<<endl;
	}

	return 0;
}