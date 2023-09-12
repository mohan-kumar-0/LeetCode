class Solution {
public:
    int minDeletions(string s) {
        int ctr[26] = {0};
        for(char c: s)
            ++ctr[c-'a'];
        sort(ctr,ctr+26);
        int ans = 0;
        for(int i=24;i>=0;--i)
            if(ctr[i]>=ctr[i+1]){
                if(ctr[i+1]>0){
                    ans+=ctr[i] - (ctr[i+1] - 1);
                    ctr[i] = ctr[i+1] - 1;
                }
                else if(ctr[i+1]==0){
                    ans+=ctr[i];
                    ctr[i] = 0;
                }
            }
        return ans;
    }
};