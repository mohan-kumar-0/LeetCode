class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        long long ctr[100001] = {0};
        for(int i=0;i<nums1.size();++i)
            ++ctr[abs(nums1[i]-nums2[i])];
        int i=100000;
        int k = k1+k2;
        while(i && k){
            if(ctr[i]){
                if(k>=ctr[i]){
                    k-=ctr[i];
                    if(i)
                    ctr[i-1]+=ctr[i];
                    ctr[i] = 0;
                }
                else{
                    ctr[i]-=k;
                    ctr[i-1]+=k;
                    k = 0;
                }
            }
            --i;
        }
        long long ans = 0;
        for(long long i=0;i<100001;++i)
            ans += ctr[i]*i*i;
        return ans;
    }
};