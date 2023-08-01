class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l=999999, r = -1;
        for(int i=0;i<nums.size() && nums[i]<=target ;++i)
            if(target==nums[i]){
                l = min(l,i);
                r = max(r,i);
            }
        if(r!=-1)
            return {l,r};
        return {-1,-1};
    }
};