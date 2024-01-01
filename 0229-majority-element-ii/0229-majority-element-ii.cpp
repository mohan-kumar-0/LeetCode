class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int c1 = 0, c2 = 0;
        int first = INT_MIN, second = INT_MIN;
        for(int num: nums)
            if(c1==0 && second!=num){
                c1 = 1; first = num;
            }
            else if(c2==0 && first!=num){
                c2 = 1; second = num;
            }
            else if(first==num)
                ++c1;
            else if(second==num)
                ++c2;
            else{
                --c1; --c2;
            }
        c1 = c2 = 0;
        for(int num: nums){
            c1+=num==first;
            c2+=num==second;
        }
        int n = nums.size()/3;
        vector<int> res;
        if(c1>n)
            res.push_back(first);
        if(c2>n)
            res.push_back(second);
        return res;
    }
};