class Solution {
    int fact[10];
public:
    Solution() {
        fact[0] = 1;
        for(int i=1;i<10;++i)
            fact[i] = i*fact[i-1];
    }
    string getPermutation(int n, int k) {
        --k;
        int curr = n;
        int nums[] = {1,2,3,4,5,6,7,8,9,10,11};
        string perm = "";
        int idx = -1;
        while(curr){
            idx = k/fact[curr-1];
            perm = perm + (char)(nums[idx]+'0');
            for(int i=idx;i<9;++i)
                nums[i] = nums[i+1];
            k%=fact[curr-1];
            --curr;
        }
        return perm;
    }
};