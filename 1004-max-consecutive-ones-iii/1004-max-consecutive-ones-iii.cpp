class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int st = 0;
        int ed = 0;
        int zeroesUsed = 0;
        int n = nums.size();
        int ans = 0;
        for(;ed<n;++ed){
            if(nums[ed]==0)
                ++zeroesUsed;
            if(zeroesUsed>k){
                ans = max(ans,ed-st);
                while(zeroesUsed!=k){
                    if(nums[st]==0)
                        --zeroesUsed;
                    ++st;
                }
            }
            ans = max(ans,ed-st+1);
        }
        return ans;
    }
};