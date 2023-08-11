class Solution {
    
    int n;
    int dp[301][5001];
public:
    int rec(int level, int sum, vector<int> &coins, int amount){
        if(sum > amount) return 0;
        if(level == n){
            if(amount == sum) return 1;
            return 0;
        }
        if(dp[level][sum] != -1){
            return dp[level][sum];
        }
        int ans = rec(level+1, sum, coins, amount) + rec(level, sum+coins[level], coins, amount);
        return dp[level][sum] = ans;
    }
    

    int change(int amount, vector<int>& coins) {
        n = coins.size();
        memset(dp, -1, sizeof(dp));
        return rec(0, 0, coins, amount);
    }
};