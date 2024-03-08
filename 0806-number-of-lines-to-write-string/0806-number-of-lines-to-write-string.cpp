class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL); cout.tie(NULL);
    }
        
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int lines = 1;
        int currWidth = 0;
        for(char c: s){
            c = c - 'a';
            if(widths[c]+currWidth>100){
                ++lines;
                currWidth = widths[c];
            }
            else {
                currWidth+=widths[c];
            }
        }
        return {lines,currWidth};
    }
};