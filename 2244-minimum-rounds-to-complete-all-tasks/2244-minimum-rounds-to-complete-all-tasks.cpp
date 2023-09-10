class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        map<int,int> ctr;
        int tp;
        for(int task: tasks)
            ++ctr[task];
        int ans = 0;
        for(auto x: ctr)
            if(x.second==1)
                return -1;
            else{
                tp = x.second;
                ans += tp/3;
                ans+=tp%3!=0?1:0;
            }
        return ans;
    }
};