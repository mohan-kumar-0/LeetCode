class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int ans = 0;
        int limit[26] = {0};
        for(char c: chars)
            ++limit[c-'a'];
        for(string word: words){
            int ctr[26] = {0};
            bool add = true;
            for(char ch: word){
                ++ctr[ch-'a'];
            }
            for(int i=0;i<26;++i)
                if(ctr[i]>limit[i])
                    add=false;
            ans+=add*word.length();
        }
        return ans;
    }
};