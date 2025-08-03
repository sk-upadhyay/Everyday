class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int n = landStartTime.size();
        int m = waterStartTime.size();
        int totalride = INT_MAX;
        for(int i =0;i<n;i++){
            int lrs =landStartTime[i]; 
            int lrt = +landDuration[i];
            for(int j =0;j<m;j++){
                int wrs = waterStartTime[j];
                int wrt = waterDuration[j];
                int landride = lrs+lrt;
                int ride = max(landride,wrs);
                int finish1 = ride+wrt;
                int waterride = wrs+wrt;
                int ride1 = max(waterride,lrs);
                int finish2 = ride1+lrt;
                totalride = min(totalride,min(finish1,finish2)); 
                }
            }
        return totalride;
        
    }
};