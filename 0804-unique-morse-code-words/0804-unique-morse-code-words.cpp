class Solution {
    string morse[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    string toMorse(string word){
        string ans = "";
        for(char ch: word)
            ans += morse[ch-'a'];
        return ans;
    }
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        unordered_set<string> s;
        for(string word: words){
            s.insert(toMorse(word));
        }
        return s.size();
    }
};