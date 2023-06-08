class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int n = grid.size();
        int ans = 0;
        int m = grid[0].size();
        if(grid[n-1][m-1]>=0)
            return 0;
        int i=0;
        int j=m-1;
        while(i<n && j>=0){
            while(i<n && grid[i][j]>=0)
                ++i;
            //cout<<i<<" "<<j<<", ";
            ans+=(n-i);
            --j;
        }
        return ans;
    }
};