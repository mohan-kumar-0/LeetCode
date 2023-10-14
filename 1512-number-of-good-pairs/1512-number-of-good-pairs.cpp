class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int arr[101] = {0};
        int ans = 0;
        for(int num: nums){
            ans += arr[num];
            ++arr[num];
        }
        return ans;
    }
};