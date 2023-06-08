class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        /*
        Instead of making two cases for odd and even, add the same element twice if it's for an odd thing
        m1 + m2 = (size1+size2)/2 coudl be used to update the m1 and m2 values
        */
        int n = nums1.size();
        int m = nums2.size();
        if (n > m)
            return findMedianSortedArrays(nums2, nums1);

        int l = 0;
        int r = n;

        while (l <= r) {
            int mid1 = (l + r) / 2;
            int mid2 = (n + m + 1) / 2 - mid1;
            int l1 = mid1 == 0 ? INT_MIN : nums1[mid1-1];
            int l2 = mid2 == 0 ? INT_MIN : nums2[mid2-1];
            int r1 = mid1 == n ? INT_MAX : nums1[mid1];
            int r2 = mid2 == m ? INT_MAX : nums2[mid2];
            if (l1 <= r2 && l2 <= r1)
                return (n + m) % 2 == 0
                        ? (max(l1, l2) + min(r1, r2)) * 0.5
                        : max(l1, l2);
            else if (l1 > r2)
                r = mid1 - 1;
            else
                l = mid1 + 1;
        }
        return 0;
    }
};