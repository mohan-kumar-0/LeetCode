class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int ctr[256] = {0};
        for(int i=0;stones[i];++i)
            ++ctr[stones[i]];
        int ans = 0;
        for(int i=0; jewels[i]; ++i)
            ans+=ctr[jewels[i]];
        return ans;
    }
};