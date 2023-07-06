class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int k = -1;
        int ctr = -1;
        int ans = -1;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(auto x: nums)
            cout<<x<<" "; cout<<"\n";
        for(int i=0;i<n;){
            ctr = 1;
            for(int j=i+1;j<n && nums[j]==nums[i];++j)
                ++ctr;
            if(ctr>k && nums[i]%2==0){
                k = ctr;
                ans = nums[i];
            }
            i+=ctr;
        }
        return ans;
    }
};