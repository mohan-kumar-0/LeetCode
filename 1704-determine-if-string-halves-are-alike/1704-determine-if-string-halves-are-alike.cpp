class Solution {
public:
    bool isVowel(char c){
        return c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U';
    }
    bool halvesAreAlike(string s) {
        int n = s.length();
        int x = n/2;
        int ctrA=0, ctrB=0;
        for(int i=0;i<n/2;++i){
            ctrA+=isVowel(s[i]);
            ctrB+=isVowel(s[x+i]);
        }
        return ctrA==ctrB;
    }
};