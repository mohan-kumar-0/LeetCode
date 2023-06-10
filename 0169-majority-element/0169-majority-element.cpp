class Solution {
    int e,c,n;
public:
    int majorityElement(vector<int>& nums) {
        
        n = nums.size();
        c = 0;
        for(int i=0;i<n;++i){
            if(c==0)
                e = nums[i];
            if(nums[i]==e)
                ++c;
            else
                --c;
        }
        return e;
    }
};