class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        auto itr = upper_bound(letters.begin(), letters.end(), target);
        return itr==letters.end()?letters[0]:letters[itr-letters.begin()];
    }
};