class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int pivot = -1;
        int tp;
        for(int i=0;i<nums.size();++i)
            if(nums[i]%2==0){
                pivot++;
                tp = nums[pivot];
                nums[pivot] = nums[i];
                nums[i] = tp;
            }
        return nums;
    }
};