class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
    
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        vector<int> ans;
        int rightCtr[100] = {0};
        int leftCtr[100] = {0};
        for(int num: nums)
            ++rightCtr[num];
        int uniqueOnRight = 0, uniqueOnLeft = 0;
        for(int i=0;i<51; ++i)
            if(rightCtr[i])
                ++uniqueOnRight;
        for(int num: nums){
            if(leftCtr[num]==0)
                ++uniqueOnLeft;
            ++leftCtr[num];
            --rightCtr[num];
            if(rightCtr[num]==0)
                --uniqueOnRight;
            ans.push_back(uniqueOnLeft-uniqueOnRight);
        }
        return ans;
    }
};