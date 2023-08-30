class Solution {
public:
    long long minimumReplacement(vector<int>& nums) {
        int n = nums.size();
        long long ans = 0;
        long long tp;
        for(int i=n-2;i>=0;--i)
            if(nums[i]>nums[i+1]){
                tp = (nums[i]+nums[i+1]-1)/nums[i+1];
                nums[i] = nums[i]/tp;
                ans += tp-1;
                //cout<<tp<<","<<i<<" --> ";
            }
        return ans;
    }
};