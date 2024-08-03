#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	vector<int> p;
	int t;
	cin>>t;
	for(int i=1;i<=1666;i++){
		if(i%3!=0 && i%10!=3){
			p.push_back(i);
		}
	}
	while(t--){
		int n;
		cin>>n;
		cout<<p[n-1]<<endl;

	}

	return 0;
}