class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
    
    int minimumLength(string s) {
        int i = 0, j = s.size() - 1;
        while (i < j && s[i] == s[j]) {
            char common{s[i]};
            while (i < j && s[i] == common) {
                i++;
            }
            if (i == j) return 0;
            while (i < j && s[j] == common) {
                j--;
            }
        }
        return s[i] == s[j] ? 1 : j - i + 1;
    }
};