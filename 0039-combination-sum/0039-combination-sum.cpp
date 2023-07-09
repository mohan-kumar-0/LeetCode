class Solution {
    vector<vector<int>> res;
    vector<int> currCombination;
    void makeSum(vector<int>& a, int target, int curr = 0, int currSum = 0){
        if(curr==a.size())
            return;
        if((currSum+a[curr])>target)
            return;
        if((currSum+a[curr])==target){
            currCombination.push_back(a[curr]);
            res.push_back(currCombination);
            currCombination.pop_back();
            return;
        }
        currCombination.push_back(a[curr]);
        makeSum(a,target,curr,currSum+a[curr]);
        currCombination.pop_back();
        makeSum(a,target,curr+1,currSum);
    }
    
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        res.clear();
        makeSum(candidates,target);
        return res;
    }
};