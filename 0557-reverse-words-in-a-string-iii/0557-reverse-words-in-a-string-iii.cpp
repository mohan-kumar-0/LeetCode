class Solution {
public:
    string reverseWords(string s) {
        string sentence = "";
        string temp = "";
        for(int i=0;s[i];++i)
            if(s[i]==' '){
                sentence = sentence + temp + " ";
                temp = "";
            }
            else
                temp = s[i] + temp;
        sentence = sentence + temp;
        return sentence;
    }
};