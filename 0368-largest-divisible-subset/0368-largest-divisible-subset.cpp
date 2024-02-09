class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int prevDivisibleIdx[n];
        for(int i=0;i<n;++i) prevDivisibleIdx[i] = i;
        int dp[n]; for(int i=0;i<n;++i) dp[i] = 1;
        for(int i=0;i<n;++i) {
            for(int j=i-1; j>=0; --j)
                if(nums[i]%nums[j]==0){
                    if( (dp[j] + 1) > dp[i] ){
                        dp[i] = dp[j] + 1;
                        prevDivisibleIdx[i] = j;
                    }
                }
        }
        int mx = -1;
        int idx = -1;
        for(int i=0;i<n;++i)
            if(mx<dp[i]) {
                mx = dp[i];
                idx = i;
            }
        vector<int> ans;
        while(prevDivisibleIdx[idx]!=idx){
            ans.push_back(nums[idx]);
            idx = prevDivisibleIdx[idx];
        }
        ans.push_back(nums[idx]);
        return ans;
    }
};