class Solution {
    bool preprocessed;
    vector<vector<int>> Triangle;
    vector<vector<vector<int>>> res;
public:
    
    Solution(){  
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
        res.push_back({{1}});
        for(int i=1;i<31;++i){
            vector<vector<int>> curr;
            for(int ii=0;ii<i;++ii)
                curr.push_back(Triangle[ii]);
            res.push_back(curr);
        }
    }
    
    vector<vector<int>> generate(int numRows) {
        return res[numRows];
    }
};