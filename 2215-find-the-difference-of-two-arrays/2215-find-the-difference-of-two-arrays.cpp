class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        bool appearance[2][2001];
        for(int i=0;i<2001;++i)
            appearance[0][i] = appearance[1][i] = false;
        int n = nums1.size(), m = nums2.size();
        for(int i=0;i<n;++i)
            appearance[0][1000+nums1[i]] = true;
        for(int i=0;i<m;++i)
            appearance[1][1000+nums2[i]] = true;
        set<int> distinct1;
        set<int> distinct2;
        for(int i=0;i<n;++i)
            if(!appearance[1][1000+nums1[i]])
                distinct1.insert(nums1[i]);
        for(int i=0;i<m;++i)
            if(!appearance[0][1000+nums2[i]])
                distinct2.insert(nums2[i]);
        vector<vector<int>> ans;
        vector<int> tp1,tp2;
        for(int x: distinct1)
            tp1.push_back(x);
        for(int x: distinct2)
            tp2.push_back(x);
        ans.push_back(tp1);
        ans.push_back(tp2);
        return ans;
    }
};