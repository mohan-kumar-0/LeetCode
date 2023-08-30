class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int mx = -1;
        for(int candy: candies)
            if(mx<candy)
                mx = candy;
        mx-=extraCandies;
        vector<bool> ans(candies.size());
        for(int i=0;i<candies.size();++i)
            ans[i] = candies[i]>=mx;
        return ans;
    }
};