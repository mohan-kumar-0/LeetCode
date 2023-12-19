class Solution {
    int dirx[9] = {-1,-1,-1,0,0,0,1,1,1};
    int diry[9] = {-1,0,1,-1,0,1,-1,0,1};
    bool inBounds(int x, int y, int n, int m){
        return x>=0 && y>=0 && x<n && y<m;
    }
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        vector<vector<int>> ans;
        int n = img.size();
        int m = img[0].size();
        for(int i=0;i<n;++i){
            vector<int> row;
            for(int j=0;j<m;++j){
                int sum = 0;
                int ctr = 0;
                for(int k=0;k<9;++k)
                    if(inBounds(i+dirx[k],j+diry[k],n,m)){
                        sum+=img[i+dirx[k]][j+diry[k]];
                        ++ctr;
                    }
                row.push_back(sum/ctr);
            }
            ans.push_back(row);
        }
        return ans;
    }
};