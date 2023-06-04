class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,char> closingBraces;
        closingBraces[']']='[';
        closingBraces['}']='{';
        closingBraces[')']='(';
        char stack[10000];
        int idx = -1;
        for(int i=0;s[i];++i)
            if(closingBraces.find(s[i])==closingBraces.end()){
                ++idx;
                stack[idx]=s[i];
            }
            else if(idx>=0 && stack[idx]==closingBraces[s[i]]){
                --idx;
            }
            else
                return false;
        return idx==-1;
    }
};