class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size();
        int fact = 1;
        for(int i=2;i<=n;++i)
            fact*=i;
        vector<vector<int>> permutations;
        permutations.push_back(nums);
        for(int i=1;i<fact;++i){
            next_permutation(nums.begin(),nums.end());
            permutations.push_back(nums);
        }
        return permutations;
    }
};