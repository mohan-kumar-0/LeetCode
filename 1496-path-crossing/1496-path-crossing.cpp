class Solution {
    string stringify(int x, int y){
        return to_string(x)+" "+to_string(y);
    }
public:
    bool isPathCrossing(string path) {
        int x = 0;
        int y = 0;
        unordered_set<string> s;
        for (auto c:path) {
            if (s.find(stringify(x,y)) != s.end()) {
                return true;
            }
            s.insert(stringify(x,y));
            if (c == 'N') y++;
            else if (c == 'E') x++;
            else if (c == 'S') y--;
            else if (c == 'W') x--;
        }
        if (s.find(stringify(x,y)) != s.end()) {
            return true;
        }
        return false;
    }
};