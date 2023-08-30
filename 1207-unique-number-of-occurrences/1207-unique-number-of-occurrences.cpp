class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int appearance[2001] = {0};
        for(int x: arr)
            ++appearance[1000+x];
        sort(appearance,appearance+2001);
        for(int i=1;i<2001;++i)
            if(appearance[i]!=0 && appearance[i]==appearance[i-1])
                return false;
        return true;
    }
};