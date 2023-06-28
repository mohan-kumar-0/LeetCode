class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int minimum = nums[0];
        int maximum = nums[0];
        for(int num: nums){
            if(num<minimum)
                minimum = num;
            if(num>maximum)
                maximum = num;
        }
        for(int num: nums)
            if(num!=minimum && num!=maximum)
                return num;
        return -1;
    }
};