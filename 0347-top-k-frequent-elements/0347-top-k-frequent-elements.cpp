class Solution {
public:

    bool static cmp(pair<int,int>& a, pair<int,int>& b){
        return a.second>b.second;
    }

    vector<int> topKFrequent2(vector<int>& nums, int k) {
        vector<int> ans;
        pair<int,int> ctr[20001];
        for(int i=0;i<20001;++i)
            ctr[i] = {i-10000,0};
        for(auto& x: nums)
            ++ctr[x+10000].second;
        sort(ctr,ctr+20001,cmp);
        for(int i=0;i<k;++i)
            ans.push_back(ctr[i].first);
        return ans;
    }

    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int,int> m;
        for(auto& x: nums)
            ++m[x];
        vector<pair<int,int>> ctr;
        for(auto& p: m)
            ctr.push_back({p.first,p.second});
        sort(ctr.begin(),ctr.end(),cmp);
        for(int i=0;i<k;++i)
            ans.push_back(ctr[i].first);
        return ans;
    }
};