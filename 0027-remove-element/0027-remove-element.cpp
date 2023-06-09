class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        ios_base::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
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