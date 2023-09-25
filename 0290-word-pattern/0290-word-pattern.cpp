class Solution {
public:
    bool wordPattern(string pattern, string s) {
        string map[26];
        for(int i=0;i<26;++i)
            map[i] = "";
        vector<string> inputString;
        string currString = "";
        for(int i=0;s[i];++i)
            if(s[i]==' '){
                inputString.push_back(currString);
                currString = "";
            }
            else
                currString = currString + s[i];
        inputString.push_back(currString);
        if(pattern.length()!=inputString.size())
            return false;
        for(int i=0;pattern[i];++i)
            if(map[pattern[i]-'a']=="")
               map[pattern[i]-'a'] = inputString[i];
            else if(map[pattern[i]-'a']!=inputString[i])
                return false;
        for(int i=0;i<26;++i)
            for(int j=i+1;j<26;++j)
                if(map[i]==map[j] && map[i]!="")
                    return false;
        return true;
    }
};