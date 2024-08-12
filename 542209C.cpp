#include <bits\stdc++.h>

using namespace std;

int main(){
	int p,h;
	cin>>p>>h;
	int max_t=0;
	for(int i =0;i<p;i++){
		int a,b;
		cin >>a>>b;
		int meet_t = max(h - a, b);
        int total = meet_t + a;
        max_t = max(max_t, total);
	}
	cout<<max_t<<endl;
	return 0;
}