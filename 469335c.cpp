#include <bits\stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
	int l,r,z;
	cin>>l>>r>>z;
	set<int> s;
	int max=0;
	int a = r/z;
	for(int i =r;i>=r-a;i--){
		int b = (i/z)+(i%z);
		if(max<b){
			max=b;
		}
	}
	
	cout<<max<<endl;
}
	return 0;
}