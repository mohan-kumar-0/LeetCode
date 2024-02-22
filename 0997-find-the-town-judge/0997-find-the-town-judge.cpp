class Solution {
public:
    
    Solution() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL); cout.tie(NULL);
    }
    
    int findJudge(int n, vector<vector<int>>& trust) {
        short trustCount[1001] = {0};
        int size = trust.size();
        for(int i=0;i<size;++i){
            ++trustCount[trust[i][1]];
            --trustCount[trust[i][0]];
        }
        for(int i=1;i<=n;++i)
            if(trustCount[i]==(n-1))
                return i;
        return -1;
    }
};