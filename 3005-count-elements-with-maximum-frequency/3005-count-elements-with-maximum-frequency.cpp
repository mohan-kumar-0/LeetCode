class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int ctr[101] = {0};
        for(int num: nums)
            ++ctr[num];
        sort(ctr,ctr+101);
        int ans = 0;
        int i = 100, mx = ctr[100];
        while(ctr[i]==mx){
            ++ans;
            --i;
        }
        return ans*mx;
    }
};