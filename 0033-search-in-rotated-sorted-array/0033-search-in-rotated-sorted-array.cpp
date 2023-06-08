class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l,r,m,p;
        l = 0; r = nums.size()-1;
        if(r==0)
            return target==nums[0]?0:-1;
        int n = r;
        while(l<r){
            m = l + (r-l)/2;
            if(nums[m]>nums[r])
                l = m+1;
            else
                r = m;
        }
        if(target>nums[n]){
            r = l-1; l = 0;
        }
        else
            r = n;
        //cout<<l<<" "<<r;
        while(l<=r){
            m = l + (r-l)/2;
            if(nums[m]==target)
                return m;
            else if(nums[m]>target)
                r = m - 1;
            else l = m + 1;
        }
        return -1;
    }
};