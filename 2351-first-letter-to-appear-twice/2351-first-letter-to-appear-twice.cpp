class Solution {
public:
    char repeatedCharacter(string s) {
        int freq[256] = {0};
        for(int i=0; s[i]; ++i){
            ++freq[s[i]];
            if(freq[s[i]]==2)
                return s[i];
        }
        return ' ';
    }
};