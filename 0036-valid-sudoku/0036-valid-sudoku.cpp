auto init = [](){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    return 0;
}();

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int a,b;
        for(int i=0;i<9;++i)
            for(int j=0;j<9;++j)
                if(board[i][j]!='.'){
                    for(int k=0;k<9;++k)
                        if( (k!=i && board[k][j]==board[i][j]) || (k!=j && board[i][k]==board[i][j]))
                            return false;
                    a = i - i%3;
                    b = j - j%3;
                    for(int k=0;k<3;++k)
                        for(int l=0;l<3;++l){
                            if(i!=(a+k) && j!=(b+l) && board[i][j]==board[a+k][b+l])
                                return false;
                        }
                }
        return true;
    }
};