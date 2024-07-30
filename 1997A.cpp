#include <bits/stdc++.h>
#include <string>
using namespace std;

char next(char c) {
    return (c == 'a') ? 'b' : 'a';
}
string solve(string s) {
    
    if (s.size() == 1) {
        return s + next(s[0]);
    }

    for (size_t i = 0; i < s.size() - 1; ++i) {
        if (s[i] == s[i + 1]) {
            string newPassword = s.substr(0, i + 1) + next(s[i]) + s.substr(i + 1);
            return newPassword;
        }
    }
    string newPassword = s+ next(s[s.length()-1]) ;
    return newPassword;
}

int main() {
    int t;
    cin >> t;
    while(t--){
        string s;
        cin>>s;
        string ans= solve(s);
        cout <<ans<<endl;
    }

    return 0;
}
