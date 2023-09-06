class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        vector<int> contiguousZeroes;
        int ctr = 0;
        for(int i=0;i<nums.size();++i){
            if(nums[i]==0){
                ctr=0;
                while(i<nums.size() && nums[i]==0){
                    ++i; ++ctr;
                }
                contiguousZeroes.push_back(ctr);
                ctr = 0;
            }
        }
        if(ctr)
            contiguousZeroes.push_back(ctr);
        long long ans = 0;
        for(long x: contiguousZeroes)
            ans += (x*(x+1))/2;
        return ans;
    }
};