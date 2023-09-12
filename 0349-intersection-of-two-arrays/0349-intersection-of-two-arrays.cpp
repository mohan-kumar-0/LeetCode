class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> a;
        for(int num: nums1)
            a.insert(num);
        set<int> b;
        for(int num: nums2)
            if(a.find(num)!=a.end())
                b.insert(num);
        vector<int> ans;
        for(int x: b)
            ans.push_back(x);
        return ans;
    }
};