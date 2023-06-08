class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        bool a[200], b[200];
        int n=matrix.size();
        int m = matrix[0].size();
        for(int i=0;i<n;++i)
            a[i] = true;
        for(int i=0;i<m;++i)
            b[i] = true;
        for(int i=0;i<n;++i)
            for(int j=0;j<m;++j){
                a[i] = a[i] && matrix[i][j]!=0;
                b[j] = b[j] && matrix[i][j]!=0;
            }
        for(int i=0;i<n;++i)
            for(int j=0;j<m;++j)
                matrix[i][j] = matrix[i][j]*(a[i]&&b[j]);
    }
};