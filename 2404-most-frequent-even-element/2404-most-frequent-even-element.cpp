class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int a[100002] = {0};
        int ctr = 0;
        int ans = -1;
        int maxNum = -1;
        for(int x: nums){
            ++a[x];
            maxNum = max(maxNum,x);
        }
        for(int i=0;i<=maxNum;i+=2)
            if(a[i]>ctr){
                ctr = a[i];
                ans = i;
            }
        return ans;
    }
};