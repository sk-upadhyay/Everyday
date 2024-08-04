#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> one,second,three;

	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		if(x==1){
			one.push_back(i);
		}
		else if(x==2){
			second.push_back(i);
		}
		else{
			three.push_back(i);
		}
	}
	int teams= min(one.size(),min(second.size(),three.size()));
		cout<<teams<<endl;
		for(int i=0;i<teams;i++){
			cout<<one[i]<<" "<<second[i]<<" "<<three[i]<<" "<<endl;
		}
		
	return 0;
}