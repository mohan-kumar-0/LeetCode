class Solution {
public:
    int d[3]={0,1,-1};
    int helper(vector<vector<int>> &grid,int r,int i,int j,int n, int m,vector<vector<vector<int>>> &dp){
        if(r>=n){
            return 0;
        }
        int ans=INT_MIN;
        if(dp[r][i][j]!=-1){
            return dp[r][i][j];
        }
        int temp=0;
        for(int k=0;k<3;k++){
            for(int u=0;u<3;u++){
                int ni=i+d[k];
                int nj=j+d[u];
                if(ni>=0 && ni<m && nj<m && nj>=0){
                    if(i==j){
                        temp=grid[r][i];
                    }else{
                        temp=grid[r][j]+grid[r][i];
                    }
                    ans=max(temp+helper(grid,r+1,ni,nj,n,m,dp),ans);
                }
            }
        }
        return dp[r][i][j]=ans;
    }
    int cherryPickup(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<vector<int>>> dp(n,vector<vector<int>>(m,vector<int>(m,-1)));
        return helper(grid,0,0,m-1,n,m,dp);
    }
};