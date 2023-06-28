class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int totalXOR = 0;
        for(int num: nums)
            totalXOR^=num;
        int rightmostSetBit = 1;
        while(!(rightmostSetBit&totalXOR))
            rightmostSetBit<<=1;
        int firstNum = 0;
        for(int num: nums)
            if(rightmostSetBit&num)
                firstNum^=num;
        return {firstNum,totalXOR^firstNum};
    }
};