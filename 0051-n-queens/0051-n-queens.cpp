class Solution {
    vector<vector<int>> res[10];
    vector<int> currBoard;
    
    bool isSafe(int pos, int curr){
        for(int i=0;i<curr;++i)
            if(currBoard[i]==pos || abs(currBoard[i]-pos)==abs(i-curr))
                return false;
        return true;
    }

    void generateAllNQueens(int n, int curr){
        if(curr==n){
            res[n].push_back(currBoard);
        }
        else
            for(int i=0;i<n;++i)
                if(isSafe(i,curr)){
                    currBoard[curr] = i;
                    generateAllNQueens(n,curr+1);
                }
    }
public:
    Solution(){
        for(int i=1;i<10;++i){
            currBoard.resize(i,-1);
            generateAllNQueens(i,0);
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        string str = "............";
        cout<<str.substr(0,n);
        for(auto x: res[n]){
            vector<string> curr(n,str.substr(0,n));
            for(int i=0;i<n;++i)
                curr[i][x[i]] = 'Q';
            ans.push_back(curr);
        }
        return ans;
    }
};