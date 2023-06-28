class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<int> ctr(n+1,0);
        vector<int> res;
        for(int num: nums)
            ++ctr[num];
        for(int i=0;i<=n;++i)
            if(ctr[i]==2)
                res.push_back(i);
        return res;
    }
};