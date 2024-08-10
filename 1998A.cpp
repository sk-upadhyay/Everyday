#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y, k;
        cin >> x >> y >> k;
        vector<int> p(k, x);
        vector<int> q(k, y);
        int j = k - 1;

        for (int i = 0; i <= j && i<k/2; i++) {
            if (i < j) {
                p[i] += 1;
                p[j] -= 1;
                q[i] += 1;
                q[j] -= 1;
            }
            if (i + 1 < j - 1) {
                p[i + 1] = p[i];
                q[i + 1] = q[i];
                p[j - 1] = p[j];
                q[j - 1] = q[j];
            }
            j--;
        }

        for (int i = 0; i < k; i++) {
            cout << p[i] << " " << q[i] << endl;
        }
    }
    return 0;
}
