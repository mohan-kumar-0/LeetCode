class Solution {
    short max(short a, short b){
        if(a>b)
            return a;
        return b;
    }
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n=text1.length();
        int m = text2.length();
        short dp[1001][1001] = {0};
        for(int i=0;i<n;++i)
            dp[i][0] = max(text1[i]==text2[0],i==0?0:dp[i-1][0]);
        for(int i=0;i<m;++i)
            dp[0][i] = max(text1[0]==text2[i],i==0?0:dp[0][i-1]);
        for(int i=1;i<n;++i)
            for(int j=1;j<m;++j)
                if(text1[i]==text2[j])
                    dp[i][j] = dp[i-1][j-1] + 1;
                else
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
        return dp[n-1][m-1];
    }
};