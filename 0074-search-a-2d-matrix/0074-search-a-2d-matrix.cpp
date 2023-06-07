class Solution {
    int l,r,n,m,mid,i,j;
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        n = matrix.size();
        m = matrix[0].size();
        r = n*m - 1;
        l = 0;
        int ctr=0;
        while(l<=r){
            mid = l+(r-l)/2;
            i = mid/m;
            j = mid%m;
            if(matrix[i][j]==target)
                return true;
            else if(matrix[i][j]<target)
                l = mid+1;
            else
                r = mid-1;
        }
        return false;
    }
};