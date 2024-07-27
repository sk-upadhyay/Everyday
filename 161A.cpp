#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int count=0;
 int max =0;
    int a =0;
    int d =0;
    for(int i=0;i<n;i++){
        cin>>d>>a;
        count = count-d+a;
        if(count>max){
            max = count;
        }

    }
    cout<<max<<endl;
return 0;
}
