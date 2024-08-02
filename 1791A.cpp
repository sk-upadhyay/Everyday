#include <bits/stdc++.h>
#include <string.h>
using namespace std;

bool solve(){
	string s = "codefrs";
	char c;
	cin>>c;
	return s.find(c)==-1?false:true;
}

int main(){
	int t;
	cin>>t;
	// string s= "codefrs";
	// vector<bool> p(26,false);
	// for(int i=0;i<7;i++){
	// 	p[s[i]-'a']=true;
	// }
	// while(t--){
	// 	char c;
	// 	cin>>c;
	// 	if(p[c-'a']==true){
	// 		cout<<"YES"<<endl;
	// 	}
	// 	else{
	// 		cout<<"NO"<<endl;
	// 	}
	// }
	//another approach learning
	while(t--){
		bool a= solve();
		if(a)
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;
	}


	return 0;
}