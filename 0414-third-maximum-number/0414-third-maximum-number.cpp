class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long firstMax = LONG_MIN;
        long secondMax = LONG_MIN;
        long thirdMax = LONG_MIN;
        for(auto num: nums){
            if(num>firstMax){
                thirdMax = secondMax;
                secondMax = firstMax;
                firstMax = num;
            }
            else if(firstMax!=num && num>secondMax){
                thirdMax = secondMax;
                secondMax = num;
            }
            else if(firstMax!=num && secondMax!=num && num>thirdMax)
                thirdMax = num;
        }
        return thirdMax==LONG_MIN?firstMax:thirdMax;
    }
};