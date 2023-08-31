class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int freq1[26] = {0};
        for(int i=0; word1[i];++i)
            ++freq1[word1[i]-'a'];
        int freq2[26] = {0};
        for(int i=0; word2[i];++i)
            ++freq2[word2[i]-'a'];
        int diffFreqChars = 0;
        for(int i=0;i<26;++i)
            if(freq2[i]!=freq1[i]){
                diffFreqChars++;
                if((freq2[i]==0 && freq1[i]!=0) || (freq2[i]!=0 && freq1[i]==0))
                    return false;
            }
        if(diffFreqChars==0)
            return true;
        else {
            sort(freq1,freq1+26);
            sort(freq2,freq2+26);
            for(int i=0;i<26;++i)
                if(freq1[i]!=freq2[i])
                    return false;
        }
        return true;
    }
};