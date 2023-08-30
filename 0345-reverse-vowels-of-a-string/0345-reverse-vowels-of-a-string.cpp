class Solution {
private: 
    inline bool isVowel(char ch){
        return ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U';
    }
public:
    string reverseVowels(string s) {
        int st = 0;
        int ed = s.length()-1;
        char tp;
        while(st<ed){
            if(isVowel(s[st]) && isVowel(s[ed])){
                tp = s[st]; s[st] = s[ed]; s[ed] = tp;
                ++st; --ed;
            }
            while(!isVowel(s[st]) && st<=ed)
                ++st;
            while(!isVowel(s[ed]) && st<=ed)
                --ed;
        }
        return s;
    }
};