class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string worda = "", wordb = "";
        for(string s: word1)
            worda+=s;
        for(string s: word2)
            wordb+=s;
        return worda==wordb;
    }
};