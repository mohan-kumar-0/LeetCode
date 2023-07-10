class Solution {
public:
    int mySqrt(int n) {
        if(n==0)return 0;
        else if(n==1)return 1;
        for(long long i=2;i<=n;i++){
            if(i*i==n)return i;
            else if(i*i>n)return i-1;
        }
        return -1;
    }
};