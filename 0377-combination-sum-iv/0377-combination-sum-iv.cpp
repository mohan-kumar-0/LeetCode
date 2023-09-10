class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        unsigned int dp[1005] = {0};
        for(int num: nums)
            ++dp[num];
        for(int i=0;i<=target;++i){
            for(int num: nums)
                if(num<=i)
                    dp[i] += dp[i-num];
        }
        return dp[target];
    }
};