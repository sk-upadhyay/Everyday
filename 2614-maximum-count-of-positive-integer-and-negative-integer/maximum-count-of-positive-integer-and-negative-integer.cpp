class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int pos = 0, neg = 0;
        int x = nums.size() - 1, y = 0;

        while (x >= 0 && y < nums.size() && y <= x) {
            if (nums[x] > 0) {
                pos++;
                x--;
            } else if (nums[x] == 0) {
                x--;
            }
            
            if (nums[y] < 0) {
                neg++;
                y++;
            }
        }

        return max(pos, neg);
    }
};
