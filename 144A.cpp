#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    int min_index, max_index;
    int result;
    min_index = max_index =0;
    for(int i =0;i<n;i++){
        cin>>a[i];
        if(a[min_index]>a[i] || (a[min_index]==a[i] && i>min_index)){
            min_index =i;
        }
        if(a[max_index]<a[i]){
            max_index =i;
        }
    }
    if(min_index < max_index){
        result = n-1-min_index+max_index - 1;
    }
    else{
        result = n-1-min_index+max_index;
    }
    cout<<result<<endl;
return 0;
}
