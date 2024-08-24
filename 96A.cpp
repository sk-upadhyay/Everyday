#include <bits/stdc++.h>
#define LL long long
#define FORL(i, n) for(int i = 0; i < n; i++)
#define vi vector<int>
using namespace std;

int main (){
	string s;
	cin>>s;
	// int countzero=1;
	// int countone =1; 
	// int n = s.length();
	// FORL(i,n){
	// 	if(s[i]==s[i+1] && s[i+1]=='0'){
	// 		countzero++;
	// 	}
	// 	else if(s[i]==s[i+1] && s[i+1]=='1'){
	// 		countone++;
	// 	}
	// 	else if(countzero>=7 || countone>=7){
	// 		break;
	// 	}
	// 	else{
	// 		countzero=1;
	// 		countone=1;
	// 	}
	// }
	// if(countzero>=7 || countone>=7){
		

	// 	cout<<"YES"<<endl;
	// }
	// else{
	// 	cout<<"NO"<<endl;
	// }
	cout<<(s.find("0000000")!=-1||s.find("1111111")!=-1?"YES":"NO");
	return 0;
}