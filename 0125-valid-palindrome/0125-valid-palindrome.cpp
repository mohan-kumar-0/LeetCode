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
        ios_base::sync_with_stdio(false);
        cin.tie(NULL); cout.tie(NULL);
        s = transform(s);
        int i=0,j=s.size()-1;
        while(i<j)
            if(s[i++]!=s[j--])
                return false;
        return true;
    }
};