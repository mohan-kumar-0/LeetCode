class Solution {
public:
    Solution() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
    
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int i=0, j=0;
        int n = nums1.size(), m = nums2.size();
        if(nums1[n-1]<nums2[0] || nums1[0]>nums2[m-1])
            return -1;
        while(i<n && j<m && nums1[i]!=nums2[j]){
            if(nums1[i]<nums2[j])
                ++i;
            else
                ++j;
        }
        if(i<n && j<m && nums1[i]==nums2[j])
            return nums1[i];
        return -1;
    }
};