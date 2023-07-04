class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int i=0;
        int n=nums.size();
        while (i<n)
            if (nums[i]<=n && nums[i]>0) {
                int correctIndex = nums[i]-1;
                if (correctIndex==i || nums[correctIndex]==nums[i])
                    i++;
                else
                    swap(nums[i], nums[correctIndex]);
            }
            else
                i++;
        for (int i=0; i<n; i++)
            if (nums[i]!=i+1)
                return i+1;
        return n+1;
    }
};