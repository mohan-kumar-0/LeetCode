class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int appearance[256] = {0};
        int n=-1;
        while(s[++n]);
        int window = 0;
        for(int i=0,j=0;i<n && j<n;){
            ++appearance[s[j]];
            if(appearance[s[j]]==1)
                window = max(window,j-i+1);
            else
                while(appearance[s[j]]==2){
                    --appearance[s[i]];
                    ++i;
                }
            ++j;
        }
        return window;
    }
};