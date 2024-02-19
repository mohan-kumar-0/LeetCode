class Solution {
public:
    int firstUniqChar(string s) {
        int freq[256] = {0};
        for(char c: s)
            ++freq[c];
        for(int i=0; s[i]; ++i)
            if(freq[s[i]]==1)
                return i;
        return -1;
    }
};