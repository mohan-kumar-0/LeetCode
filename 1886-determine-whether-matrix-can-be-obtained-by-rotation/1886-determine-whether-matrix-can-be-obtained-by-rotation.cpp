class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int rotated[10][10];
        int n = target.size();
        for(int rotation=0;rotation<4;++rotation){
            bool ans = true;
            for(int i=0;i<n;++i)
                for(int j=0;j<n;++j)
                    rotated[n-j-1][i] = mat[i][j];
            for(int i=0;ans && i<n;++i)
                for(int j=0;ans && j<n;++j)
                    if(target[i][j]!=rotated[i][j])
                        ans = false;
            if(ans)
                return true;
            for(int i=0;i<n;++i)
                for(int j=0;j<n;++j)
                    mat[i][j] = rotated[i][j];
        }
        return false;
    }
};