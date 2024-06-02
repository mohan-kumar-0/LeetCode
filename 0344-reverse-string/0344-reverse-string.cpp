class Solution {
public:
    Solution() {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    
    void reverseString(vector<char>& s) {
        reverse(s.begin(),s.end());
    }
};