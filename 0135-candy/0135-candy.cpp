class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        int sum = 0;
        int candies[20000] = {0};
        candies[0] = 1;
        for(int i=1;i<n;++i)
            if(ratings[i]<=ratings[i-1])
                candies[i] = 1;
            else
                candies[i] = candies[i-1]+1;
        for(int i=n-2;i>=0;--i)
            if(ratings[i]>ratings[i+1])
                candies[i] = max(candies[i+1] + 1,candies[i]);
        for(int i=0;i<n;++i)
            sum+=candies[i];
        return sum;
    }
};