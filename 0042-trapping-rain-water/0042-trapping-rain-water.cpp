class Solution {
    int l[20000];
    int r[20000];
    int n;
    int ans;
public:
    int trap(vector<int>& height) {
        ans = 0;
        n = height.size();
        l[0] = 0;
        r[n-1] = 0;
        for(int i=1;i<n;++i)
            l[i] = height[i-1]>l[i-1]?height[i-1]:l[i-1];
        for(int i=n-2;i>=0;--i)
            r[i] = height[i+1]>r[i+1]?height[i+1]:r[i+1];
        for(int i=0;i<n;++i)
            ans+=max(0,min(l[i],r[i])-height[i]);
        return ans;
    }
};