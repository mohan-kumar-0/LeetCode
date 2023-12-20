class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int firstMin = INT_MAX, secondMin = INT_MAX;
        int n = prices.size();
        for(int i=0;i<n;++i){
            if(firstMin>=prices[i]){
                secondMin = firstMin;
                firstMin = prices[i];
            }
            else if(secondMin>prices[i])
                secondMin = prices[i];
        }
        int cost = firstMin + secondMin;
        return cost>money?money:money-cost;
    }
};