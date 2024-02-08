class Solution {
    int dp[10001];
public:
    Solution() {
        for(int i=0;i<10001;++i)
            dp[i] = i;
        for(int i=0;i<10001;++i)
            for(int j=1;(i+j*j)<=10000;++j)
                dp[i+j*j] = min(dp[i+j*j],dp[i]+1);
                
    }
    int numSquares(int n) {
        return dp[n];
    }
};