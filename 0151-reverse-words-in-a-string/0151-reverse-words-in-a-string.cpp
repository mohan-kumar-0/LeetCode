class Solution {
public:
    string reverseWords(string s) {
        stack<string> words;
        string ans;
        int i=0;
        string tp;
        while(s[i]){
            if(s[i]!=' ')
                tp += s[i];
            else{
                if(tp.length())
                    words.push(tp);
                tp = "";
            }
            ++i;
        }
        if(tp.length())
            words.push(tp);
        while(!words.empty()){
            tp = words.top();
            ans += tp;
            words.pop();
            if(!words.empty())
                ans+=' ';
        }
        return ans;
    }
};