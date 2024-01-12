class Solution {
public:
    vector<long long> maximumEvenSplit(long long finalSum) {
        vector<long long> res;
        if(finalSum%2)
            return res;
        long long sum = 0;
        for(int i=1;(sum+2*i)<=finalSum;++i){
            sum+=2*i;
            res.push_back(2*i);
        }
        if(sum!=finalSum)
            res[res.size()-1] = res[res.size()-1] + (finalSum-sum);
        return res;
    }
};