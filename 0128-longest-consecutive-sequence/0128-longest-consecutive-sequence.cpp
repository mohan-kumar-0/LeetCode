class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> s;
        int ans = 0;
        int nextNum;
        int num;
        unordered_map<int,vector<int>> mp;
        for(int num: nums)
            s.insert(num);
        for(auto num: s)
            if(s.find(num-1)==s.end())
                mp[num] = {num};
        for(auto itr: mp){
            num = itr.first;
            nextNum = num + 1;
            while(s.find(nextNum)!=s.end()){
                mp[num].push_back(nextNum);
                ++nextNum;
            }
        }
        for(auto itr: mp)
            if(ans<itr.second.size())
                ans = itr.second.size();
        return ans;
    }
};