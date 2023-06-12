class Solution {
public:
    string toStr(int a, int b){
        string s1 = "",s2 = "";
        int tp = a;
        s1 = to_string(a);
        if(a==b)
            return s1;
        s2 = to_string(b);
        return s1+"->"+s2;
    }
    
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        if(nums.size()==0)
            return ans;
        int l = nums[0];
        int r = nums[0];
        int n = nums.size();
        for(int i=1;i<n;++i){
            if(nums[i]==(nums[i-1]+1))
                ++r;
            else{
                ans.emplace_back(toStr(l,r));
                l = r = nums[i];
            }
        }
        //cout<<l<<" "<<r<<", ";
        ans.emplace_back(toStr(l,r));
        return ans;
    }
};