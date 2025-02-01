#include <bits/stdc++.h>
#define LL long long
#define FORL(i, n) for(int i = 0; i < n; ++i)
#define vi vector<int>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

//Functions


int main(){
  IOS;
  int t;
  cin>>t;
  while(t--){
  	int n,m;
  	cin>>n>>m;
  	vi p;
  	for(int i =0;i<n;i++){
  		int a;
  		cin>>a;
  		p.push_back(a);
  	}
  	int maxy = *max_element(p.begin(), p.end());
    int arr[n];
       FORL(i,n){
        arr[i]=maxy;
       }
  	FORL(i,m){
  		char c;
  		int l,r;
  		cin>>c>>l>>r;
        
  		FORL(j,n){
  			if(maxy>=l && maxy<=r){
                if(c=='-'){
                    arr[j]--;
                }
                else{
                    arr[j]++;
                }
            }
  			
  		}
  	}
  	FORL(i,n){
  		cout<<arr[i]<<" ";
  	}
  	cout<<endl;
  }

  return 0;
}