class Solution {
    int minRow[50],  maxCol[50];
    int n,m;
    int currElement;
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL); cout.tie(NULL);
        vector<int> res;
        n = matrix.size();
        m = matrix[0].size();
        for(int i=0;i<n;++i)
            minRow[i] = 1000000;
        for(int i=0;i<m;++i)
            maxCol[i] = -1;
        for(int i=0;i<n;++i)
            for(int j=0;j<m;++j){
                currElement = matrix[i][j];
                minRow[i] = min(minRow[i],currElement);
                maxCol[j] = max(maxCol[j],currElement);
            }
        for(int i=0;i<n;++i)
            for(int j=0;j<m;++j){
                currElement = matrix[i][j];
                if(currElement==minRow[i] && currElement==maxCol[j])
                    res.emplace_back(currElement);
            }
        return res;
    }
};