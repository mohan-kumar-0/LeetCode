class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n+1,0);
        int tp;
        for(int i=0;i<=n;++i){
            tp = i;
            while(tp){
                ans[i]+=tp%2;
                tp/=2;
            }
        }
        return ans;
    }
};