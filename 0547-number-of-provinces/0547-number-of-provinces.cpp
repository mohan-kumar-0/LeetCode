class Solution {
public:
    int n, m;
    
    void destroyProvince(vector<vector<int>>& map, int i, int j){
        map[i][j] = 0;
        for(int a=0;a<n;++a)
            if(map[i][a])
                destroyProvince(map,i,a);
        for(int a=0;a<n;++a)
            if(map[a][j])
                destroyProvince(map,a,j);
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        std::ios::sync_with_stdio(false);
        cin.tie(nullptr); cout.tie(nullptr);
        int ans = 0;
        n = isConnected.size();
        m = isConnected[0].size();
        for(int i=0;i<n;++i)
            for(int j=0;j<m;++j)
                if(isConnected[i][j]){
                    ++ans;
                    destroyProvince(isConnected,i,j);
                }
        return ans;
    }
};