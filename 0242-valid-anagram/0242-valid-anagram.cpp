auto init = [](){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    return 0;
}();

class Solution {
public:
    bool isAnagram(string s, string t) {
        int ctr[26] = {0};
        for(char c: s)
            ++ctr[c-'a'];
        for(char c: t)
            --ctr[c-'a'];
        for(int i=0; i<26; ++i)
            if(ctr[i]!=0)
                return false;
        return true;
    }
};