class Solution {
public:
    string removeStars(string s) {
        int idx = 0;
        for(int i=0;s[i];++i){
            if(s[i]=='*')
                idx = max(idx-1,0);
            else{
                s[idx] = s[i];
                ++idx;
            }
        }
        return s.substr(0,idx);
    }
};