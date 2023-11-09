class Solution {
    set<vector<int>> permutations;
    vector<bool> visited;
    vector<int> currPerm;
public:
    
    void dfs(vector<int>& nums, int n, int curr){
        if(curr==n){
            permutations.insert(currPerm);
        }
        else{
            for(int i=0;i<n;++i)
                if(!visited[i]){
                    visited[i] = true;
                    currPerm.push_back(nums[i]);
                    dfs(nums,n,curr+1);
                    currPerm.pop_back();
                    visited[i] = false;
                }
        }
    }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int n = nums.size();
        permutations.clear();
        for(int i=0;i<n;++i)
            visited.push_back(false);
        dfs(nums,n,0);
        vector<vector<int>> ans;
        for(vector<int> permutation: permutations)
            ans.push_back(permutation);
        return ans;
    }
};