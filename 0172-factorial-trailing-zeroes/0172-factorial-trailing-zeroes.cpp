class Solution {
    int ans;
public:
    int trailingZeroes(int n) {
        ans = 0;
        for(int f=5;f<=n;f*=5)
            ans+=n/f;
        return ans;
    }
};