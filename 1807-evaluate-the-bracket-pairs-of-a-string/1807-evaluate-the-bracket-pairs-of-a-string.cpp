class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string,string> mp;
        for(vector<string> x: knowledge)
            mp[x[0]] = x[1];
        string key = "";
        string res = "";
        int n = s.length();
        for(int i=0;i<n;++i)
            if(s[i]!='('){
                res+=s[i];
                key="";
            }
            else {
                while(s[i+1]!=')'){
                    ++i;
                    key+=s[i];
                }
                if(mp.find(key)!=mp.end())
                    res+=mp[key];
                else
                    res+="?";
                key="";
                ++i;
            }
        return res;
    }
};