auto init = [](){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    return 0;
}();

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int n: nums)
            ++mp[n];
        vector<int> ans;
        vector<pair<int,int>> ctr;
        for(auto m: mp)
            ctr.push_back({m.second,m.first});
        sort(ctr.begin(),ctr.end());
        int n = ctr.size();
        while(k) {
            --k;
            ans.push_back(ctr[n-k-1].second);
        }
        return ans;
    }
};