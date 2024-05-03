class Solution {
    vector<vector<int>> ans;
    vector<int> currCombination;
    void makeSum(vector<int>& nums, int target, int curr = 0){
        if(target==0){
            ans.push_back(currCombination);
            return;
        }
        else if(curr>=nums.size())
            return;
        else {
            int chosen = -1;
            for(int i=curr; i<nums.size();++i)
                if(nums[i]<=target && nums[i]!=chosen){
                    currCombination.push_back(nums[i]);
                    chosen = nums[i];
                    makeSum(nums,target-nums[i],i+1);
                    currCombination.pop_back();
                }
        }
            
    }

public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        int sum = 0;
        for(int num: candidates){
            sum+=num;
        }
        if(sum<target)
            return ans;
        else if(sum==target){
            ans.push_back(candidates);
            return ans;
        }
        sort(candidates.begin(),candidates.end());
        // ans.clear();
        makeSum(candidates,target);
        return ans;
    }
};