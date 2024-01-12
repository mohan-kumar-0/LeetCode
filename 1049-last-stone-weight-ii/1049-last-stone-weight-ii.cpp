class Solution {
public:
    int dp[30][3000];
    int dfs(int i, int sum, int n, int total,vector<int>& stones){
        if(sum*2>=total || i==n)
            return abs((total-sum)-sum);
        if(dp[i][sum]!=-1)
            return dp[i][sum];
        dp[i][sum] = min(dfs(i+1,sum,n,total,stones),dfs(i+1,sum+stones[i],n,total,stones));
        return dp[i][sum];
    }
        
    int lastStoneWeightII(vector<int>& stones) {
        int n = stones.size();
        int total = 0;
        for(int stone: stones)
            total+=stone;
        for(int i=0;i<n;++i)
            for(int j=0; j<total;++j)
                dp[i][j] = -1;
        return dfs(0,0,n,total,stones);
    }
};