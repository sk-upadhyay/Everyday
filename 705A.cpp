#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    string s3 = "";
    for(int i=1;i<=n;i++){
            string x;
            string y;
            if(i%2==0){
        x="love ";
            }
            else{
                x="hate ";
            }
            if(i==n){
                y ="it";
            }
            else{
                y= "that ";
            }

        s3 = s3+"I "+x+y;
            }
            cout<<s3<<endl;

return 0;
}
