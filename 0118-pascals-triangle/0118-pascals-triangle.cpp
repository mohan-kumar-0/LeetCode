class Solution {
    bool preprocessed;
    vector<vector<int>> Triangle;
public:
    
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL); cout.tie(NULL);  
        Triangle.push_back({1});
        Triangle.push_back({1,1});
        for(int i=1;i<30;++i){
            vector<int> row;
            row.push_back(1);
            for(int j=1;j<Triangle[i].size();++j)
                row.push_back(Triangle[i][j]+Triangle[i][j-1]);
            row.push_back(1);
            Triangle.push_back(row);
        }
    }
    
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        for(int i=0;i<numRows;++i)
            res.push_back(Triangle[i]);
        return res;
    }
};