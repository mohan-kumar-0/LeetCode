class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int l = -1;
        int n = nums.size();
        for(int i=0;i<n;++i)
            if(nums[i])
                nums[++l] = nums[i];
        ++l;
        for(;l<n;++l)
            nums[l] = 0;
    }
};