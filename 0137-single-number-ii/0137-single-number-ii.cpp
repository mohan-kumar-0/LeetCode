class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int appearOnce = 0;
        int appearTwice = 0;
        for(int num: nums){
            appearOnce = (appearOnce^num)&(~appearTwice);
            appearTwice = (appearTwice^num)&(~appearOnce);
        }
        return appearOnce;
    }
};