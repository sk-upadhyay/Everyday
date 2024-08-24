#include <bits\stdc++.h>

using namespace std;

int main(){
	int n;//1,3,6,10,15
	cin>>n;
	int counter = 0;
	for(int i =1;;i++){
		counter =counter+i; 
		n = n-counter;
		if(n<0 && counter>n){
			cout<<i-1<<endl;
			break;
		}
		else if(counter>n){
			cout<<i<<endl;
			break;
		}
	}
	return 0;
}