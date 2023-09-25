class Solution {
    void swap(int& a, int& b){
        int tp = a;
        a = b;
        b = tp;
    }
public:
    void sortColors(vector<int>& nums) {
        int zero = -1;
        int two = nums.size();
        for(int i=0;i<nums.size();)
            if(i>zero && nums[i]==0){
                ++zero;
                swap(nums[i],nums[zero]);
            }
            else if(i<two && nums[i]==2){
                --two;
                swap(nums[i],nums[two]);
            }
            else
                ++i;
    }
};