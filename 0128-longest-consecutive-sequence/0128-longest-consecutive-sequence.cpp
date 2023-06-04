class Solution {
public:
    int max(int& a, int& b){
        if(a>b)
            return a;
        return b;
    }

    int longestConsecutive(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
        if(nums.size()==0)
            return 0;
        sort(nums.begin(),nums.end());
        int ans = 0;
        int tp = 1;
        for(int i=1;i<nums.size();++i)
            if((nums[i-1]+1)==nums[i])
                ++tp;
            else if(nums[i-1]!=nums[i]){
                ans = max(ans,tp);
                tp = 1;
            }
        return max(tp,ans);
    }
};