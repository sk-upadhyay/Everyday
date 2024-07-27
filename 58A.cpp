#include <bits/stdc++.h>

using namespace std;

int main(){
    string word, match="hello";
    cin>>word;
    int j=0, count=0;
    for(int i=0; i<word.length();i++){
        if(word[i]==match[j]){
            j++;
            count++;
        }
    }
    if(count==5){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}
