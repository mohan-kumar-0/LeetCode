class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int start[256];
        int ed[256];
        for(int i=0;i<256;++i){
            start[i] = 999999;
            ed[i] = -1;
        }
        for(int i=0;s[i];++i){
            if(start[s[i]]==999999)
                start[s[i]] = i;
            ed[s[i]] = i;
        }
        int ans = -1;
        for(int i=0;i<256;++i)
            if(start[i]!=999999 && start[i]!=ed[i])
                ans = max(ans,ed[i]-start[i]-1);
        return ans;
    }
};