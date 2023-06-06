class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        set<vector<int>> st;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int target;
        for(int i=0;i<n;++i){
            target = -nums[i];
            for(int j=i+1,k=n-1;j<n && k>j;){
                if(i!=j && i!=k){
                    if(nums[j]+nums[k]==target){
                        st.insert({nums[i],nums[j],nums[k]});
                        ++j;
                    }
                    else if(nums[j]+nums[k]>target)
                        --k;
                    else
                        ++j;
                }
            }
            while((1+i)<n && nums[i+1]==nums[i])
                ++i;
        }
        for(auto x: st)
            ans.push_back(x);
        return ans;
    }
};