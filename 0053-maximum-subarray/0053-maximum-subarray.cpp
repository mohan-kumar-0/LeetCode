class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0];
        int sumSoFar = 0;
        for(int num: nums){
            sumSoFar = sumSoFar + num;
            if(num>sumSoFar)
                sumSoFar = num;
            if(sumSoFar>maxSum)
                maxSum = sumSoFar;
        }
        return maxSum;
    }
};