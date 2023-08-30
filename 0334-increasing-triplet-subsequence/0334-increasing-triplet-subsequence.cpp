class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int32_t left = INT_MAX;
        int32_t mid = INT_MAX;

        for (int32_t i = 0 ; i < nums.size() ; i++) {
            if (mid < nums[i]) {
                return true;
            } else if (left < nums[i] && mid > nums[i]) {
                mid = nums[i];
            } else if (left > nums[i]) {
                left = nums[i];
            }
        }
        return false;
    }
};