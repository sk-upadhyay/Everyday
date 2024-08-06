#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n, s, m;
        cin >> n >> s >> m;
        vector<int> p;
        vector<int> q;
        bool flag = true;
        while (n--) {
            int l, r;
            cin >> l >> r;
            p.push_back(l);
            p.push_back(r);
        }
        for (long i = 2; i < p.size(); i+=2) {
            q.push_back(p[i] - p[i - 1]);
        }
        q.push_back(m-p[p.size()-1]);
        if (p[0] > 0) {
            q.insert(q.begin(), p[0]);
        }
        for (long i = 0; i < q.size(); i++) {
            if (q[i] >= s) {
                cout << "YES" << endl;
                flag = false;
                break;
            }
        }
        if (flag) {
            cout << "NO" << endl;
        }
    }
    return 0;
}
