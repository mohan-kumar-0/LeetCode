class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n = obstacleGrid.size();
        int m = obstacleGrid[0].size();
        int ans[100][100] = {0};
        ans[0][0] = obstacleGrid[0][0]!=1;
        for(int i=1;i<n;++i)
            ans[i][0] = (obstacleGrid[i][0]!=1)*ans[i-1][0];
        for(int i=1;i<m;++i)
            ans[0][i] = (obstacleGrid[0][i]!=1)*ans[0][i-1];
        for(int i=1;i<n;++i)
            for(int j=1;j<m;++j) {
                if(obstacleGrid[i][j]!=1){
                    ans[i][j] = ans[i-1][j] + ans[i][j-1];
                }
            }
        return ans[n-1][m-1];
    }
};