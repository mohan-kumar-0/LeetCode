class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL); cout.tie(NULL);
        int i=0,j=0;
        int n = nums.size();
        while(j<n){
            nums[i] = nums[j];
            while(j<n && nums[j]==nums[i])
                ++j;
            ++i;
        }
        return i;
    }
};