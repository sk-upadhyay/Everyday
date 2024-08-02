#include <bits/stdc++.h>

using namespace std;

//Functions


int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int c =1;
		vector<int> p;
		while(n>0){
            if(n%10>0){
                p.push_back((n%10)*c);
            }
            n=n/10;
            c*=10;
        }
		cout<<p.size()<<endl;
		for(auto x:p){
			cout<<x<<" ";
		}
        cout<<endl;
	}

	
	
	return 0;
}