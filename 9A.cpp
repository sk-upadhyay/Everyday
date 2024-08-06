#include <bits\stdc++.h>

using namespace std;

int main(){
	int y,w;
	cin>>y>>w;
	int a= max(y,w);
	int num = 7-a;
	int den = 6;
	if(num==4){
		num=2;
		den=3;
	}
	else if(num==2){
		num=1;
		den=3;
	}
	else if(num==3){
		num=1;
		den=2;
	}
	else if(num==6){
		num=1;
		den=1;
	}
	cout<<num<<"/"<<den<<endl;
	return 0;
}