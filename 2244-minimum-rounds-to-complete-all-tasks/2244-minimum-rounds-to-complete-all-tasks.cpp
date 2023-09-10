class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int> ctr;
        for(int task: tasks)
            ++ctr[task];
        int ans = 0;
        for(auto x: ctr)
            if(x.second==1)
                return -1;
            else{
                ans += x.second/3;
                ans += x.second%3!=0;
            }
        return ans;
    }
};