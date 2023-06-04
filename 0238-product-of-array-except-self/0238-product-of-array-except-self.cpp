class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int leftProd[100000];
        int rightProd[100000];
        vector<int> ans;
        int n = nums.size();
        leftProd[0] = nums[0];
        rightProd[n-1] = nums[n-1];
        for(int i=1;i<n;i++)
            leftProd[i] = leftProd[i-1]*nums[i];
        for(int i=n-2;i>=0;--i)
            rightProd[i] = rightProd[i+1]*nums[i];
        ans.push_back(rightProd[1]);
        for(int i=1;i<(n-1);++i)
            ans.push_back(leftProd[i-1]*rightProd[i+1]);
        ans.push_back(leftProd[n-2]);
        return ans;
    }
};