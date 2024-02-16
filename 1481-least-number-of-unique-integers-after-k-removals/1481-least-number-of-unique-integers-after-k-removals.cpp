class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        int n = arr.size();
        if(k>=n)
            return 0;
        sort(arr.begin(),arr.end());
        int freq[100000] = {0};
        freq[0] = 1;
        int idx=0;
        for(int i=1;i<n;++i)
            if(arr[i]==arr[i-1])
                ++freq[idx];
            else
                freq[++idx] = 1;
        ++idx;
        sort(freq,freq+idx);
        int st=0;
        int ans = idx;
        for(int i=0;i<idx && k;++i)
            if(freq[i]<=k){
                k-=freq[i];
                --ans;
            }
        return ans;
    }
};