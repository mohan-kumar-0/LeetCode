auto init = [](){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    return 0;
}();

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zeroes = 0;
        for(int n: nums)
            zeroes+=n==0;
        int prod = 1;
        if(zeroes>1){
            vector<int> ans(nums.size(),0);
            return ans;
        }
        else if(zeroes==1) {
            vector<int> ans(nums.size(),0);
            int idx;
            for(int i=0; i<nums.size(); ++i)
                if(nums[i]!=0)
                    prod*=nums[i];
                else 
                    idx = i;
            ans[idx] = prod;
            return ans;
        }
        vector<int> ans;
        for(int n: nums)
            prod*=n;
        for(int i=0; i<nums.size(); ++i)
            ans.push_back(prod/nums[i]);
        return ans;
    }
};