class Solution {
public:
    bool isPalindrome(long x) {
        if(x<0)
            return false;
        long tp = x;
        long y = 0;
        while(tp){
            y = y*10+tp%10;
            tp/=10;
        }
        return x==y;
    }
};