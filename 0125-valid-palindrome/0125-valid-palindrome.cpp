class Solution {
public:
    string transform(string s){
        string res = "";
        char ch;
        for(int i=0;s[i];++i){
            ch = tolower(s[i]);
            if(isalnum(ch))
                res+=ch;
        }
        return res;
    }
    bool isPalindrome(string s) {
        s = transform(s);
        int i=0,j=s.size()-1;
        while(i<j)
            if(s[i++]!=s[j--])
                return false;
        return true;
    }
};