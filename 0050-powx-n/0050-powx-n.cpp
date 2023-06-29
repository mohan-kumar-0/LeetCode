class Solution {
public:
    double myPow(double x, long long int n) {
        if(n==0)
            return 1;
        if(n<0)
            return 1/myPow(x,-n);
        if(n==1)
            return x;
        if(n%2)
            return x*myPow(x*x,n/2);
        return myPow(x*x,n/2);
    }
};