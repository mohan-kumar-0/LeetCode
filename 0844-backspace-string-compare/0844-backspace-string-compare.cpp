class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int idx = 0;
        for(int i=0;s[i];++i){
            if(s[i]=='#')
                idx = max(idx-1,0);
            else{
                s[idx] = s[i];
                ++idx;
            }
        }
        int idx2 = 0;
        for(int i=0;t[i];++i){
            if(t[i]=='#')
                idx2 = max(idx2-1,0);
            else{
                t[idx2] = t[i];
                ++idx2;
            }
        }
        if(idx!=idx2)
            return false;
        for(int i=0;i<idx;++i)
            if(s[i]!=t[i])
                return false;
        return true;
    }
};