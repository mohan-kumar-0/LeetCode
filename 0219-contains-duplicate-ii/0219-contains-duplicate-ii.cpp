class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
        
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        vector<pair<int,int>> appearance;
        for(int i=0;i<nums.size();++i){
            appearance.push_back({nums[i],i});
        }
        sort(appearance.begin(),appearance.end());
        for(int i=1;i<nums.size();++i)
            if(appearance[i-1].first == appearance[i].first &&abs(appearance[i].second-appearance[i-1].second)<=k)
                    return true;
        return false;
    }
};