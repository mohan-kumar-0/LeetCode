class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int r[100000] = {0};
        int c[100000] = {0};
        pair<int,int> pos[100001];
        int ans = 0;
        int m = mat[0].size();
        int n = mat.size();
        for(int i=0;i<n;++i)
            for(int j=0;j<m;++j)
                pos[mat[i][j]] = {i,j};
        for(;ans<arr.size();++ans){
            r[pos[arr[ans]].first]++;
            c[pos[arr[ans]].second]++;
            if(r[pos[arr[ans]].first]==m || c[pos[arr[ans]].second]==n)
                return ans;
        }
        return ans;
    }
};