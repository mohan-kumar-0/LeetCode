class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool dec = true;
        bool inc = true;
        int mx = -999999;
        for(int num: nums)
            if(mx<num)
                mx = num;
            else if(num<mx)
                inc = false;
        int mn = 999999;
        for(int num: nums)
            if(mn>num)
                mn = num;
            else if(num>mn)
                dec = false;
        return dec || inc;
    }
};