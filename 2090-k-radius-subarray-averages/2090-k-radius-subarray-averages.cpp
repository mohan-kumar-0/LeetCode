class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        vector<int>ans;
        int n=nums.size();
        int i=0,j=2*k;
        if(n<=2*k){
            vector<int>v(n,-1);
            return v;
        } else if(k==0)
            return nums;

        for(int a=0;a<k;a++)
            ans.emplace_back(-1);
      
        long long sum=0;
        for(int a=i;a<=j;a++)
            sum+=nums[a];
        
        while(j<n && i<n){
            int avg=sum/(2*k+1);
            ans.emplace_back(avg);
            sum-=nums[i];
            i++;
            j++;
            if(j<n)sum+=nums[j]; 
        }
        for(int a=0;a<k;a++)
            ans.emplace_back(-1);
        return ans;
    }
};