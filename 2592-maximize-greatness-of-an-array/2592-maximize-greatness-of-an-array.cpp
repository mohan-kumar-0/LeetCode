class Solution {
public:
    int maximizeGreatness(vector<int>& nums) {
        int ans = 0;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int i = 0, j = 0;
        for( ;i<n && j<n; )
            if(nums[i]<nums[j]){
                ++i; ++j; ++ans;
            }
            else
                ++j;
        return ans;
    }
};