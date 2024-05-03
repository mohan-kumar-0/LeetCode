class Solution {
    int dirx[4] = {-1,0,1,0};
    int diry[4] = {0,1,0,-1};
    
    bool search(vector<vector<char>>& board, string word, bool visited[6][6], int x, int y, int n, int m, int currIdx = 1){
        if(word[currIdx-1]!=board[x][y])
            return false;
        visited[x][y] = true;
        if(currIdx==word.length())
            return true;
        bool ans = false;
        for(int i=0;i<4;++i)
            if ( (x+dirx[i])>=0 && (x+dirx[i])<n && (y+diry[i])>=0 && (y+diry[i])<m && !visited[x+dirx[i]][y+diry[i]] && board[x+dirx[i]][y+diry[i]]==word[currIdx]) {
                ans = ans || search(board,word,visited,x+dirx[i],y+diry[i],n,m,currIdx+1);
                // cout<<x + dirx[i]<<" "<<y+diry[i]<<" for "<<word[currIdx]<<"\n";
            }
        visited[x][y] = false;
        return ans;
    }
public:
    bool exist(vector<vector<char>>& board, string word) {
        bool visited[6][6];
        int n = board.size();
        int m = board[0].size();
        for(int i=0;i<6;++i)
            for(int j=0;j<6;++j)
                visited[i][j] = false;
        for(int i=0;i<n;++i)
            for(int j=0;j<m;++j)
                if(word[0]==board[i][j]){
                    visited[i][j] = true;
                    bool ans = search(board,word,visited,i,j,n,m);
                    if(ans)
                        return true;
                    visited[i][j] = false;
                }
        return false;
    }
};