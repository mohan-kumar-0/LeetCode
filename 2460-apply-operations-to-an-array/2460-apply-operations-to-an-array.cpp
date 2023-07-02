class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        vector<int> res;
        int n = nums.size();
        for(int i=0;i<n;++i)
            if(nums[i] && i<(n-1) && nums[i]==nums[i+1]){
                res.push_back(2*nums[i+1]);
                ++i;
            } else if(nums[i])
                res.push_back(nums[i]);
        while(res.size()!=n)
            res.push_back(0);
        return res;
    }
};