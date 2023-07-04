class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        vector<int> arr (nums.size(), 0);
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0 and nums[i] - 1 < nums.size()) {
                arr[nums[i] - 1] = 1;
            }
        }
        
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == 0) {
                return i + 1;
            }
        }
        return nums.size() + 1;
    }
};