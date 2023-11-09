class Solution {
public:
    int countHomogenous(string s) {
        long long ans = 0;
        int mod = 1000000007;
        long long ctr;
        for(int i=0;s[i];){
            ctr=0;
            for(int j=0;s[i+j] && s[i]==s[i+j];++j)
                ctr++;
            ans = (ans + ((ctr*(ctr+1))/2)%mod )%mod;
            i+=ctr;
        }
        return ans;
    }
};