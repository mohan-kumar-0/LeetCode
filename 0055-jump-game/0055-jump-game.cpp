class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        if(n==1)
            return true;
        bool canBeVisited[10000];
        for(int i=1;i<n;++i)
            canBeVisited[i] = false;
        canBeVisited[0] = true;
        for(int i=0;i<n;++i)
            if(canBeVisited[i])
                for(int j=0;j<nums[i];++j)
                    if((i+j+1)>=(n-1))
                        return true;
                    else
                        canBeVisited[i+j+1] = true;
        return false;
    }
};