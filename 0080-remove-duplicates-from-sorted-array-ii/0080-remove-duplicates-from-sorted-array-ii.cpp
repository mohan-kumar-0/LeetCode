class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL); cout.tie(NULL);
        if(nums.size()<3)
            return nums.size();
        int n = nums.size();
        int i=0,j=0;
        while(j<n){
            nums[i] = nums[j];
            if((j+1)<n && nums[j+1]==nums[i])
                nums[++i] = nums[j];
            while(j<n && nums[j]==nums[i])
                ++j;
            ++i;
        }
        return i;
    }
};