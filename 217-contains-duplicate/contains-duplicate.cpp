class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        map<int,int> mp;
        for(int i =0;i<n;i++){
            if(mp[nums[i]]>0){
                return true;
            }
            else{
                mp[nums[i]]=i+1;
                continue;
            }
        }
        return false;
    }
};