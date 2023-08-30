class Solution {
private:
    inline bool isVowel(char ch){
        switch(ch){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u': return true;
            default: return false;
        }
    }
public:
    int maxVowels(string s, int k) {
        int count = 0;
        int ans;
        int n = s.length();
        for(int i=0;i<k;++i)
            count+=isVowel(s[i]);
        ans = count;
        for(int i=k;i<n;++i){
            count += isVowel(s[i]) - isVowel(s[i-k]);
            if(ans<count)
                ans = count;
        }
        return ans;
    }
};