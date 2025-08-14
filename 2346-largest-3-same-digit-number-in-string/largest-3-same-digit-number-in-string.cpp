class Solution {
public:
    string largestGoodInteger(string num) {
        int n = num.length();
        int mx = INT_MIN;
        string s = "";
        
        for (int i = 0; i <= n - 3; i++) {
            if (num[i] == num[i+1] && num[i+1] == num[i+2]) {
                int digit = num[i] - '0';
                if (digit > mx) {
                    mx = digit;
                    s = num.substr(i, 3);
                }
            }
        }
        return s;
    }
};
