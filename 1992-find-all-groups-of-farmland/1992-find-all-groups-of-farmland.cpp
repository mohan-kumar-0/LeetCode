class Solution {
public:
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        vector<vector<int>> ans;
        int n = land.size();
        int m = land[0].size();
        for(int i=0;i<n;++i)
            for(int j=0;j<m;++j) {
                if(land[i][j]){
                    int startx = i;
                    int starty = j;
                    vector<int> currFarm;
                    currFarm.push_back(startx);
                    currFarm.push_back(starty);
                    bool farmExpands = true;
                    while(farmExpands) {
                        land[startx][starty] = 0;
                        if(startx<(n-1) && starty<(m-1) && land[startx+1][starty+1]==1 && land[startx+1][starty] && land[startx][starty+1]){
                            land[startx][starty+1] = land[startx+1][starty] = 0;
                            ++startx; ++starty;
                            land[startx][starty] = 0;
                        }
                        else if(startx<(n-1) && land[startx+1][starty]==1){
                            ++startx;
                            land[startx][starty] = 0;
                        }
                        else if(starty<(m-1) && land[startx][starty+1]==1){
                            ++starty;
                            land[startx][starty] = 0;
                        }
                        else{
                            currFarm.push_back(startx);
                            currFarm.push_back(starty);
                            for(int x=currFarm[0];x<=startx;++x)
                                for(int y=currFarm[1];y<=starty;++y)
                                    land[x][y] = 0;
                            farmExpands = false;
                        }
                    }
                    ans.push_back(currFarm);
                }
            }
        return ans;
    }
};