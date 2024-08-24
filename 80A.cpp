#include <bits\stdc++.h>

using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	bool flag=true;
	int a[15]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
	for(int i =0;i<15;){
		if(a[i]== n && a[i+1]==m){
			cout<<"YES"<<endl;
			flag=false;
			break;
		}
		else{
			i++;
		}
	}
	if(flag){
		cout<<"NO"<<endl;
	}

}