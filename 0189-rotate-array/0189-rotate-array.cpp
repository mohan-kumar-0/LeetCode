class Solution {
public:
    int tp;
    void reverse(vector<int>& v, int n, int st = 0){
        for(int i=st,j=n;i<j;++i,--j){
            tp = v[i];
            v[i] = v[j];
            v[j] = tp;
        }
    }
    
    void rotate(vector<int>& nums, int k) {
        if(k==nums.size() || k==0)
            return;
        int n = nums.size()-1;
        k = k%(n+1);
        reverse(nums,n);
        reverse(nums,k-1);
        reverse(nums,n,k);
    }
};