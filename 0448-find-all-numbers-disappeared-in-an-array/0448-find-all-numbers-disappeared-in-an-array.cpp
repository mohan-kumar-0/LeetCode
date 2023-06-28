class Solution {
    bool res[100002];
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        for(int i=0;i<(n+1);++i)
            res[i] = true;
        for(int num: nums)
            res[num] = false;
        for(int i=1;i<(n+1);++i)
            if(res[i])
                ans.push_back(i);
        return ans;
    }
};