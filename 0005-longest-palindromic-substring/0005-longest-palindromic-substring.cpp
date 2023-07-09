class Solution {
public:
    string longestPalindrome(string s) {
        int dp[1000][1000] = {0};
        string palindrome = "";
        int maxLen = 0;
        for(int gap=0;gap<s.length();++gap){
            for(int i=0, j=gap; j<s.length(); ++i, ++j){
                if(gap==0){
                    dp[i][j]=1;
                }
                else if(gap==1){
                    dp[i][j] = 2*(s[i]==s[j]);
                }
                else if(dp[i+1][j-1]!=0 && s[i]==s[j]) {
                    dp[i][j] = dp[i+1][j-1] + 2;
                }
                if(dp[i][j]>maxLen){
                    maxLen = dp[i][j];
                    palindrome = s.substr(i,maxLen);
                }
            }
        }
        return palindrome;
    }
};