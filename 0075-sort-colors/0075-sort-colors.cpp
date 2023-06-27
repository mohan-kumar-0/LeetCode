class Solution {
public:
    void sortColors(vector<int>& nums) {
        int ctr[3] = {0};
        for(int num: nums)
            ++ctr[num];
        int k = 0;
        for(int i=0;i<3;++i)
            for(int j=0;j<ctr[i];++j)
                nums[k++] = i;
    }
};