class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int N = matrix.size();
        for(int i=0;i<3;++i)
        for (int x = 0; x < N / 2; x++) {
        for (int y = x; y < N - x - 1; y++) {
            int temp = matrix[x][y];
            matrix[x][y] = matrix[y][N - 1 - x];
            matrix[y][N - 1 - x] = matrix[N - 1 - x][N - 1 - y];
            matrix[N - 1 - x][N - 1 - y] = matrix[N - 1 - y][x];
            matrix[N - 1 - y][x] = temp;
        }
    }
    }
};