class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int n = nums.size();
        int fact = 1;
        for(int i=2;i<=n;++i)
            fact*=i;
        set<vector<int>> permutations;
        permutations.insert(nums);
        for(int i=1;i<fact;++i){
            next_permutation(nums.begin(),nums.end());
            permutations.insert(nums);
        }
        vector<vector<int>> uniquePerms;
        for(auto x: permutations)
            uniquePerms.push_back(x);
        return uniquePerms;
    }
};