#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int a = s[0]-'0';
		int con =s.length();	
		int sum;
		if(con==1){
			sum=1;
		}
		else if(con==2){
			sum =3;
		}
		else if(con==3){
			sum=6;
		}
		else if(con==4){
			sum=10;
		}
		cout<<(10*(a-1))+sum<<endl;
	}

	return 0;
}