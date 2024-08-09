#include <bits\stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		int x=max(a,b);
		int y = max(c,d);
		if((c>d && x<d)||(c<d && x<c ) || (a<b && y<a)||(a>b && y<b)){
			cout<<"NO"<<endl;
		}
		else{
			cout<<"YES"<<endl;
		}
	}
	return 0;
}