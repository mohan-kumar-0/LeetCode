class Solution {
    int n,d;
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        n = arr.size();
        d = arr[1]-arr[0];
        for(int i=2;i<n;++i)
            if(d!=(arr[i]-arr[i-1]))
                return false;
        return true;
    }
};