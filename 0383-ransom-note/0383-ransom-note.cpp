class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int freq[26];
        for(int i=0;i<26;++i)
            freq[i] = false;
        for(int i=0;magazine[i];++i)
            ++freq[magazine[i]-'a'];
        for(int i=0;ransomNote[i];++i)
            --freq[ransomNote[i]-'a'];
        for(int i=0;i<26;++i)
            if(freq[i]<0)
                return false;
        return true;
    }
};