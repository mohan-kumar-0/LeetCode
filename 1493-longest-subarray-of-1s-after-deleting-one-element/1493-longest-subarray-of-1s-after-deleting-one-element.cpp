class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int ans = 0;
        int start = 0, end = 0;
        int zeroesRemoved = 0;
        int n = nums.size();
        for(;end<n;++end){
            if(nums[end]==0)
                ++zeroesRemoved;
            while(zeroesRemoved>1){
                if(nums[start]==0){
                    --zeroesRemoved;
                }
                start++;
            }
            ans = max(ans,end-start);
        }
        return ans;
    }
};