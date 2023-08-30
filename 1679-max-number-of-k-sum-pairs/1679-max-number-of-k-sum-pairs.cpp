class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int ans = 0;
        int st = 0;
        int sum;
        int ed = nums.size()-1;
        while(st<ed){
            sum = nums[st]+nums[ed];
            if(sum==k){
                ++ans;
                ++st;
                --ed;
            }
            else if (sum<k)
                ++st;
            else
                --ed;
        }
        return ans;
    }
};