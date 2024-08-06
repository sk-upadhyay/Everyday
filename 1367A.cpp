#include <bits/stdc++.h>

using namespace std;

int main(){ 	
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		if(s.length()<=2){
			cout<<s<<endl;
		}
		else{ 
			cout<<s[0];
			for(int i=2;i<s.length()-1;i++){
				if(i%2==0){
					cout<<s[i];
				}
			}
			cout<<s[s.length()-1]<<endl;
			
		}
	}
	return 0;
}