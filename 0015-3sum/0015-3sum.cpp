class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        set<vector<int>> st;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int i=0;i<n-2;++i){
            int left = i+1;
            int right = n-1;
            int target = -nums[i];
            while(left<right){
                if( (nums[left]+nums[right]) == target) {
                    st.insert({nums[i],nums[left],nums[right]});
                    ++left;
                }
                else if( (nums[left]+nums[right]) < target)
                    ++left;
                else
                    --right;
            }
            while((i+1)<n && nums[i+1]==nums[i])
                ++i;
        }
        for(auto x: st)
            ans.push_back(x);
        return ans;
    }
};