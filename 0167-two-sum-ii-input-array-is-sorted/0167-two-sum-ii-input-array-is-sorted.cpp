class Solution {
    int i,j;
    int sum;
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        i=0;
        j=numbers.size()-1;
        sum = numbers[i]+numbers[j];
        while(sum!=target){
            if(sum>target)
                --j;
            else ++i;
            sum = numbers[i]+numbers[j];
        }
        return {i+1,j+1};
    }
};