class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        return letters.back()<=target?letters[0]:letters[upper_bound(letters.begin(), letters.end(), target)-letters.begin()];
    }
};