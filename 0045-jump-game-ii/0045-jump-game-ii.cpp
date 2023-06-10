class Solution {
    int dp[10000],n;
public:
    int jump(vector<int>& nums) {
        n = nums.size();
        for(int i=0;i<n;++i)
            dp[i] = 99999;
        dp[0] = 0;
        for(int i=0;i<n;++i)
            for(int j=0;j<nums[i] && (i+j+1)<n;++j)
                dp[i+j+1] = min(dp[i+j+1],dp[i]+1);
        return dp[n-1];
    }
};