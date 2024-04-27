#pragma GCC optimize("O3", "unroll-loops")
class Solution {
public:
    int findRotateSteps(string& ring, string& key) {
        vector<int> pos[26];
        const int r = ring.size(), k= key.size();

        for (int i = 0; i < r; i++) {
            pos[ring[i]-'a'].push_back(i);
        }

        int dp[200][200];
        fill(&(dp[0][0]), &(dp[0][0])+40000, INT_MAX);

        for (int p : pos[key[0]-'a']) {
            dp[0][p] = min(p, r-p) + 1;
        }
        for (int i = 1; i < k; i++) {
            for (int j: pos[key[i-1]-'a']){
                for (int p : pos[key[i]-'a']) {
                    int step = abs(p-j);
                    step = min(step, r-step);

                    dp[i][p] = min(dp[i][p], dp[i-1][j]+step+1);
                }
            }
        }
        return *min_element(dp[k-1], begin(dp[k-1])+r);
    }
};


auto init = []()
{ 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();