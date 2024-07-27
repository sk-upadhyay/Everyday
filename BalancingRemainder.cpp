#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >>n;
        int a[n];
        int count[3]={0};
        int move=0;
        for(int i =0;i<n;i++){
            cin>>a[i];
            if(a[i]%3==0){
                count[0]++;
            }
            else if(a[i]%3==1){
                count[1]++;
            }
            else if(a[i]%3==2){
                count[2]++;
            }
        }
        n =n/3;
        while(min(count[1], min(count[2],count[0]))!=n){
            for(int i=0;i<3;i++){
                if(count[i]>n){
                    move++;
                    count[i]--;
                    count[(i+1)%3]++;
                }
            }
        }
        cout<<move<<endl;

    }
    return 0;
}
