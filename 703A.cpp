#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	int m=0,k=0;
	while(t--){
		int x,y;
		cin>>x>>y;
		if(x>y){
			m++;
		}else if(x<y){
			k++;
		}
		
	}
	if(m>k){
			cout<<"Mishka"<<endl;
		}
		else if(m<k){
			cout<<"Chris"<<endl;
		}
		else{
			cout<<"Friendship is magic!^^"<<endl;
		}
	return 0;
}