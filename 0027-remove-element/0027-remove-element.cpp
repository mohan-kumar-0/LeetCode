class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int ctr=0;
        int n = nums.size();
        for(int i=0;i<n;++i)
            if(nums[i]==val)
                ++ctr;
            else
                nums[i-ctr] = nums[i];
        return n-ctr;
    }
};