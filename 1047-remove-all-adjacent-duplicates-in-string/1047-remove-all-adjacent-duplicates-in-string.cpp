class Solution {
public:
    string removeDuplicates(string s) {
        int idx = 0;
        for(int i=1;s[i];++i)
            if(idx<0 || s[idx]!=s[i])
                s[++idx] = s[i];
            else
                idx = max(idx-1,-1);
        return s.substr(0,idx+1);
    }
};