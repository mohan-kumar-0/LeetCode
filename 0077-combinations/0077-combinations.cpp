class Solution {
    vector<vector<int>> res;
    vector<int> x;
public:
    void combinations(int n, int k, int curr){
        if(curr>n)
            return;
        if(x.size()==k){
            res.push_back(x);
            //x.pop_back();
            return;
        }
        x.push_back(curr);
        combinations(n,k,curr+1);
        x.pop_back();
        combinations(n,k,curr+1);
    }
    vector<vector<int>> combine(int n, int k) {
        res.clear();
        x.clear();
        combinations(n+1,k,1);
        return res;
    }
};