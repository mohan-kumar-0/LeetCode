class Solution {
    int ans[46];
public:
    Solution(){
        ans[0] = 0;
        ans[1] = 1;
        ans[2] = 2;
        for(int i=3;i<46;++i)
            ans[i] = ans[i-1] + ans[i-2];
    }
    int climbStairs(int n) {
        return ans[n];
    }
};