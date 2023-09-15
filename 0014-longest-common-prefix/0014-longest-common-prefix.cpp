class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = strs[0];
        int ctr;
        for(string str: strs){
            for(ctr=0;str[ctr] && prefix[ctr] && str[ctr]==prefix[ctr];++ctr);
            prefix = prefix.substr(0,ctr);
        }
        return prefix;
    }
};