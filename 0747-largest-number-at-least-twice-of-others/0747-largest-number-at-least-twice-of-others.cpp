class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int largest = -1;
        int i = -1 ,idx = -1;
        int secondLargest = -1;
        for(int num: nums){
            ++i;
            if(num>=largest){
                secondLargest = largest;
                largest = num;
                idx = i;
            }
            else if(num>secondLargest)
                secondLargest = num;
        }
        return largest>=(2*secondLargest)?idx:-1;
    }
};