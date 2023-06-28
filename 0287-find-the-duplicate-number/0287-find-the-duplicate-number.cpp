class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        vector<int> ctr(n,0);
        for(int num: nums){
            if(ctr[num])
                return num;
            ++ctr[num];
        }
        return -1;
    }
};