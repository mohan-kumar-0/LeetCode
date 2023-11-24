class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        int nn = l.size();
        vector<bool> ans;
        int ap[500];
        for(int i=0;i<nn;++i){
            int k = 0;
            int n = r[i] - l[i] + 1;
            for(int j=l[i];j<=r[i];++j,++k)
                ap[k] = nums[j];
            sort(ap,ap+n);
            bool isAp = true;
            for(int j=2;isAp && j<n;++j)
                if((ap[j]-ap[j-1]) != (ap[j-1]-ap[j-2]))
                    isAp = false;
            ans.push_back(isAp);
        }
        return ans;
    }
};