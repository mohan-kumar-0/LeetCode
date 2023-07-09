class Solution {
    vector<string> res;
    map<char,string> mp;
public:
    Solution(){
        mp['2'] = "abc";
        mp['3'] = "def";
        mp['4'] = "ghi";
        mp['5'] = "jkl";
        mp['6'] = "mno";
        mp['7'] = "pqrs";
        mp['8'] = "tuv";
        mp['9'] = "wxyz";
    }
    
    void formAll(string digits, int curr, string soFar){
        if(curr==digits.length()){
            res.push_back(soFar);
            return;
        }
        for(char ch: mp[digits[curr]])
            formAll(digits,curr+1,soFar+ch);
    }
    
    vector<string> letterCombinations(string digits) {
        res.clear();
        if(digits=="")
            return res;
        formAll(digits,0,"");
        return res;
    }
};