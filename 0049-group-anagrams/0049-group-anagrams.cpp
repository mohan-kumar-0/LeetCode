class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        vector<vector<string>> ans;
        string tp;
        for(string& str: strs){
            tp = str;
            sort(tp.begin(),tp.end());
            mp[tp].push_back(str);
        }
        for(auto& x: mp)
            ans.push_back(move(x.second));
        return ans;
    }
};